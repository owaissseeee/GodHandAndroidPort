#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r504_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r504
{
// Function: BossControlTask__5cR504
// Address: 0x7992d8 - 0x799520
void BossControlTask__5cR504_0x7992d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BossControlTask__5cR504_0x7992d8");
#endif

    switch (ctx->pc) {
        case 0x799348u: goto label_799348;
        case 0x799354u: goto label_799354;
        case 0x799364u: goto label_799364;
        case 0x799378u: goto label_799378;
        case 0x79939cu: goto label_79939c;
        case 0x799428u: goto label_799428;
        case 0x799434u: goto label_799434;
        case 0x799444u: goto label_799444;
        case 0x799454u: goto label_799454;
        case 0x799460u: goto label_799460;
        case 0x79946cu: goto label_79946c;
        case 0x79947cu: goto label_79947c;
        case 0x799484u: goto label_799484;
        case 0x799494u: goto label_799494;
        case 0x7994a4u: goto label_7994a4;
        case 0x7994b0u: goto label_7994b0;
        case 0x7994e0u: goto label_7994e0;
        case 0x7994ecu: goto label_7994ec;
        default: break;
    }

    ctx->pc = 0x7992d8u;

    // 0x7992d8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x7992dc: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x7992e0: 0x8c639900  lw          $v1, -0x6700($v1)
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x799900u));
    // 0x7992e4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7992e8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x7992e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x7992ec: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x7992ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x7992f0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7992f4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x7992f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x7992f8: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7992fc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x7992fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x799300: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x799304: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x799304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x799308: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x79930c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x79930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x799310: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x799314: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x799314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x799318: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x79931c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x79931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x799320: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x799320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x799324: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x799324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x799328: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79932c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x79932cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x799330: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799334: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x799334u;
    {
        const bool branch_taken_0x799334 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799334u;
        // 0x799338: 0x3c1e0058  lui         $fp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799334) {
            ctx->pc = 0x7993B4u;
            goto label_7993b4;
        }
    }
    ctx->pc = 0x79933Cu;
    // 0x79933c: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x799340: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799340u;
    {
        const bool branch_taken_0x799340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799340u;
        // 0x799344: 0x3c140074  lui         $s4, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799340) {
            ctx->pc = 0x799354u;
            goto label_799354;
        }
    }
    ctx->pc = 0x799348u;
label_799348:
    // 0x799348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79934c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79934Cu;
    SET_GPR_U32(ctx, 31, 0x799354u);
    ctx->pc = 0x799350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79934Cu;
    // 0x799350: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79934Cu, 0x799354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799354u;
label_799354:
    // 0x799354: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x799358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79935c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799368: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799368u;
    {
        const bool branch_taken_0x799368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799368u;
        // 0x79936c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799368) {
            ctx->pc = 0x799348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799348;
        }
    }
    ctx->pc = 0x799370u;
    // 0x799370: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799370u;
    SET_GPR_U32(ctx, 31, 0x799378u);
    ctx->pc = 0x799374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799370u;
    // 0x799374: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799370u, 0x799378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799378u;
label_799378:
    // 0x799378: 0x26827a2c  addiu       $v0, $s4, 0x7A2C
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 31276));
    // 0x79937c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x799380: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799384: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799388: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x799388u;
    {
        const bool branch_taken_0x799388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799388u;
        // 0x79938c: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799388) {
            ctx->pc = 0x7993A0u;
            goto label_7993a0;
        }
    }
    ctx->pc = 0x799390u;
    // 0x799390: 0x27c46af0  addiu       $a0, $fp, 0x6AF0
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 27376));
    // 0x799394: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799394u;
    SET_GPR_U32(ctx, 31, 0x79939Cu);
    ctx->pc = 0x799398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799394u;
    // 0x799398: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799394u, 0x79939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79939Cu;
label_79939c:
    // 0x79939c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_7993a0:
    // 0x7993a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x7993a4: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
    // 0x7993a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7993ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7993b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7993b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_7993b4:
    // 0x7993b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7993b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x7993b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x7993bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7993bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x7993c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x7993c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x7993c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7993c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7993cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d0: 0x3c013fcb  lui         $at, 0x3FCB
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16331 << 16));
    // 0x7993d4: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x7993d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7993d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7993dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e0: 0x3c01c110  lui         $at, 0xC110
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49424 << 16));
    // 0x7993e4: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x7993e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x7993e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7993e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7993ec: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7993f0: 0x3c01403c  lui         $at, 0x403C
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16444 << 16));
    // 0x7993f4: 0x3421c65a  ori         $at, $at, 0xC65A
    ctx->pc = 0x7993f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50778);
    // 0x7993f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7993f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7993fc: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x799400: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x799400u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799404: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799408: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79940c: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x79940cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x799410: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x799414: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x799414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x799418: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x79941c: 0xe604000c  swc1        $f4, 0xC($s0)
    ctx->pc = 0x79941cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x799420: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x8ea4264c  lw          $a0, 0x264C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79942c: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x79942Cu;
    SET_GPR_U32(ctx, 31, 0x799434u);
    ctx->pc = 0x799430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79942Cu;
    // 0x799430: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79942Cu, 0x799434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799434u;
label_799434:
    // 0x799434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79943c: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x79943Cu;
    SET_GPR_U32(ctx, 31, 0x799444u);
    ctx->pc = 0x799440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79943Cu;
    // 0x799440: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x79943Cu, 0x799444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799444u;
label_799444:
    // 0x799444: 0x26e46ab0  addiu       $a0, $s7, 0x6AB0
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 27312));
    // 0x799448: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x799448u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x79944c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79944Cu;
    SET_GPR_U32(ctx, 31, 0x799454u);
    ctx->pc = 0x799450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79944Cu;
    // 0x799450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x799454u;
    {
        const bool branch_taken_0x799454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799454) {
            ctx->pc = 0x79947Cu;
            goto label_79947c;
        }
    }
    ctx->pc = 0x79945Cu;
    // 0x79945c: 0x0  nop
    ctx->pc = 0x79945cu;
    // NOP
label_799460:
    // 0x799460: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799464: 0xc1e65bc  jal         func_7996F0
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0x26859820  addiu       $a1, $s4, -0x67E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996F0u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799470: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799474: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799474u;
    SET_GPR_U32(ctx, 31, 0x79947Cu);
    ctx->pc = 0x799478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799474u;
    // 0x799478: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799474u, 0x79947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0xc1e6548  jal         func_799520
    ctx->pc = 0x79947Cu;
    SET_GPR_U32(ctx, 31, 0x799484u);
    ctx->pc = 0x799480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79947Cu;
    // 0x799480: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799520u, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x5c40fff6  bgtzl       $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799484u;
    {
        const bool branch_taken_0x799484 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x799484) {
            ctx->pc = 0x799488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799484u;
            // 0x799488: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799460;
        }
    }
    ctx->pc = 0x79948Cu;
    // 0x79948c: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79948Cu;
    SET_GPR_U32(ctx, 31, 0x799494u);
    ctx->pc = 0x799490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79948Cu;
    // 0x799490: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79948Cu, 0x799494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799494u;
label_799494:
    // 0x799494: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799498: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79949c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79949Cu;
    SET_GPR_U32(ctx, 31, 0x7994A4u);
    ctx->pc = 0x7994A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79949Cu;
    // 0x7994a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79949Cu, 0x7994A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A4u;
label_7994a4:
    // 0x7994a4: 0x27c46af0  addiu       $a0, $fp, 0x6AF0
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 27376));
    // 0x7994a8: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7994A8u;
    SET_GPR_U32(ctx, 31, 0x7994B0u);
    ctx->pc = 0x7994ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A8u;
    // 0x7994ac: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7994A8u, 0x7994B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B0u;
label_7994b0:
    // 0x7994b0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x7994b4: 0x2462d880  addiu       $v0, $v1, -0x2780
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957184));
    // 0x7994b8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7994b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD880u));
    // 0x7994bc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7994bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7994c0: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7994c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x7994c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x7994c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7994cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7994ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994d4: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x7994d8: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x7994D8u;
    SET_GPR_U32(ctx, 31, 0x7994E0u);
    ctx->pc = 0x7994DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D8u;
    // 0x7994dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x7994D8u, 0x7994E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E0u;
label_7994e0:
    // 0x7994e0: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x7994e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7994e4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7994E4u;
    SET_GPR_U32(ctx, 31, 0x7994ECu);
    ctx->pc = 0x7994E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E4u;
    // 0x7994e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7994E4u, 0x7994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x7994ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x7994f0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x7994f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x7994f4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x7994f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x7994f8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x7994f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7994fc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x7994fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799500: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x799500u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799504: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x799504u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799508: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x799508u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79950c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x79950cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799510: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x799510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799514: 0x3e00008  jr          $ra
    ctx->pc = 0x799514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799514u;
        // 0x799518: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79951Cu;
    // 0x79951c: 0x0  nop
    ctx->pc = 0x79951cu;
    // NOP
    ctx->pc = 0x799520u;
}
} // namespace gh_r504
