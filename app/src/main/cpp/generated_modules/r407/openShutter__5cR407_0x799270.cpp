#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r407_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r407
{
// Function: openShutter__5cR407
// Address: 0x799270 - 0x7995e8
void openShutter__5cR407_0x799270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("openShutter__5cR407_0x799270");
#endif

    switch (ctx->pc) {
        case 0x7992e8u: goto label_7992e8;
        case 0x799318u: goto label_799318;
        case 0x799340u: goto label_799340;
        case 0x799370u: goto label_799370;
        case 0x79938cu: goto label_79938c;
        case 0x7993ecu: goto label_7993ec;
        case 0x799460u: goto label_799460;
        case 0x7994f0u: goto label_7994f0;
        case 0x799534u: goto label_799534;
        case 0x799554u: goto label_799554;
        case 0x799560u: goto label_799560;
        case 0x79956cu: goto label_79956c;
        case 0x799574u: goto label_799574;
        case 0x799580u: goto label_799580;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995b4u: goto label_7995b4;
        default: break;
    }

    ctx->pc = 0x799270u;

    // 0x799270: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x799274: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799278: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79927c: 0x7fb10360  sq          $s1, 0x360($sp)
    ctx->pc = 0x79927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 17));
    // 0x799280: 0x7fb20350  sq          $s2, 0x350($sp)
    ctx->pc = 0x799280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 18));
    // 0x799284: 0x24469a20  addiu       $a2, $v0, -0x65E0
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941216));
    // 0x799288: 0x7fb30340  sq          $s3, 0x340($sp)
    ctx->pc = 0x799288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 19));
    // 0x79928c: 0x24684c38  addiu       $t0, $v1, 0x4C38
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x799290: 0x7fb40330  sq          $s4, 0x330($sp)
    ctx->pc = 0x799290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 20));
    // 0x799294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799298: 0x7fb50320  sq          $s5, 0x320($sp)
    ctx->pc = 0x799298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 21));
    // 0x79929c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79929cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a0: 0x7fb60310  sq          $s6, 0x310($sp)
    ctx->pc = 0x7992a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 22));
    // 0x7992a4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a8: 0x7fb70300  sq          $s7, 0x300($sp)
    ctx->pc = 0x7992a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 23));
    // 0x7992ac: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x7992b0: 0x7fbe02f0  sq          $fp, 0x2F0($sp)
    ctx->pc = 0x7992b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 30));
    // 0x7992b4: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x7992b8: 0x80449a20  lb          $a0, -0x65E0($v0)
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x799A20u));
    // 0x7992bc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7992c0: 0x7fb00370  sq          $s0, 0x370($sp)
    ctx->pc = 0x7992c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 16));
    // 0x7992c4: 0x27b7002c  addiu       $s7, $sp, 0x2C
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x7992c8: 0xffbf02e0  sd          $ra, 0x2E0($sp)
    ctx->pc = 0x7992c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 31));
    // 0x7992cc: 0x27be018c  addiu       $fp, $sp, 0x18C
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x7992d0: 0xe7b40380  swc1        $f20, 0x380($sp)
    ctx->pc = 0x7992d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
    // 0x7992d4: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7992d8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7992D8u;
    {
        const bool branch_taken_0x7992d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D8u;
        // 0x7992dc: 0x27b30180  addiu       $s3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992d8) {
            ctx->pc = 0x799310u;
            goto label_799310;
        }
    }
    ctx->pc = 0x7992E0u;
    // 0x7992e0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7992e4: 0x0  nop
    ctx->pc = 0x7992e4u;
    // NOP
label_7992e8:
    // 0x7992e8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7992ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7992f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7992f4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7992f8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7992fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7992FCu;
    {
        const bool branch_taken_0x7992fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992FCu;
        // 0x799300: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992fc) {
            ctx->pc = 0x799310u;
            goto label_799310;
        }
    }
    ctx->pc = 0x799304u;
    // 0x799304: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799308: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799308u;
    {
        const bool branch_taken_0x799308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799308) {
            ctx->pc = 0x79930Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799308u;
            // 0x79930c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7992E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992e8;
        }
    }
    ctx->pc = 0x799310u;
label_799310:
    // 0x799310: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799310u;
    SET_GPR_U32(ctx, 31, 0x799318u);
    ctx->pc = 0x799314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799310u;
    // 0x799314: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799310u, 0x799318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799318u;
label_799318:
    // 0x799318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79931c: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x799320: 0x82429a30  lb          $v0, -0x65D0($s2)
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294941232)));
    // 0x799324: 0x26439a30  addiu       $v1, $s2, -0x65D0
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941232));
    // 0x799328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79932c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79932Cu;
    {
        const bool branch_taken_0x79932c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79932Cu;
        // 0x799330: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79932c) {
            ctx->pc = 0x799368u;
            goto label_799368;
        }
    }
    ctx->pc = 0x799334u;
    // 0x799334: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799338: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79933c: 0x0  nop
    ctx->pc = 0x79933cu;
    // NOP
label_799340:
    // 0x799340: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799344: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799348: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79934c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799350: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799354: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799354u;
    {
        const bool branch_taken_0x799354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799354u;
        // 0x799358: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799354) {
            ctx->pc = 0x799368u;
            goto label_799368;
        }
    }
    ctx->pc = 0x79935Cu;
    // 0x79935c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799360: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799360u;
    {
        const bool branch_taken_0x799360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799360) {
            ctx->pc = 0x799364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799360u;
            // 0x799364: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799340;
        }
    }
    ctx->pc = 0x799368u;
label_799368:
    // 0x799368: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799368u;
    SET_GPR_U32(ctx, 31, 0x799370u);
    ctx->pc = 0x79936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799368u;
    // 0x79936c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799368u, 0x799370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799370u;
    {
        const bool branch_taken_0x799370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799370u;
        // 0x799374: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799370) {
            ctx->pc = 0x799380u;
            goto label_799380;
        }
    }
    ctx->pc = 0x799378u;
    // 0x799378: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x799378u;
    {
        const bool branch_taken_0x799378 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x799378) {
            ctx->pc = 0x79938Cu;
            goto label_79938c;
        }
    }
    ctx->pc = 0x799380u;
label_799380:
    // 0x799380: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x799384: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799384u;
    SET_GPR_U32(ctx, 31, 0x79938Cu);
    ctx->pc = 0x799388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799384u;
    // 0x799388: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799384u, 0x79938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79938Cu;
label_79938c:
    // 0x79938c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799390: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799394: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799398: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x79939c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79939cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7993a0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7993a4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x7993a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7993a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7993ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7993b0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x7993b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x7993b4: 0x240600ba  addiu       $a2, $zero, 0xBA
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x7993b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7993b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7993bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7993bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x7993c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x7993c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c8: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x7993c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x7993cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x7993d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x7993d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x7993d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x7993dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x7993dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x7993e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x7993e4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x7993E4u;
    SET_GPR_U32(ctx, 31, 0x7993ECu);
    ctx->pc = 0x7993E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E4u;
    // 0x7993e8: 0xe622000c  swc1        $f2, 0xC($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x7993E4u, 0x7993ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ECu;
label_7993ec:
    // 0x7993ec: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x7993ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7993f0: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x7993f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7993f4: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x7993f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7993f8: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x7993f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7993fc: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x7993fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799400: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x799400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799404: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x799404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799408: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x799408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79940c: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x79940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799410: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x799410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799414: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x799414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799418: 0xfba00120  sqc2        $vf0, 0x120($sp)
    ctx->pc = 0x799418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79941c: 0xfba00130  sqc2        $vf0, 0x130($sp)
    ctx->pc = 0x79941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799420: 0xfba00140  sqc2        $vf0, 0x140($sp)
    ctx->pc = 0x799420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799424: 0xa3a00020  sb          $zero, 0x20($sp)
    ctx->pc = 0x799424u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x799428: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79942c: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x79942cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x799430: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799434: 0xa3a00022  sb          $zero, 0x22($sp)
    ctx->pc = 0x799434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x799438: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x799438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x79943c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x79943cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x799440: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x799440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x799444: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x799444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x799448: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x799448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x79944c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x79944cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x799450: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x799450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x799454: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x799454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x799458: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x799458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x79945c: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x79945cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_799460:
    // 0x799460: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x799460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x799464: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x799468: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x799468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79946c: 0x0  nop
    ctx->pc = 0x79946cu;
    // NOP
    // 0x799470: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799470u;
    {
        const bool branch_taken_0x799470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799470) {
            ctx->pc = 0x799460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799460;
        }
    }
    ctx->pc = 0x799478u;
    // 0x799478: 0xfba001d0  sqc2        $vf0, 0x1D0($sp)
    ctx->pc = 0x799478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79947c: 0xfba001e0  sqc2        $vf0, 0x1E0($sp)
    ctx->pc = 0x79947cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799480: 0xfba001f0  sqc2        $vf0, 0x1F0($sp)
    ctx->pc = 0x799480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799484: 0xfba00200  sqc2        $vf0, 0x200($sp)
    ctx->pc = 0x799484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799488: 0xfba00210  sqc2        $vf0, 0x210($sp)
    ctx->pc = 0x799488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79948c: 0xfba00220  sqc2        $vf0, 0x220($sp)
    ctx->pc = 0x79948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799490: 0xfba00230  sqc2        $vf0, 0x230($sp)
    ctx->pc = 0x799490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799494: 0xfba00240  sqc2        $vf0, 0x240($sp)
    ctx->pc = 0x799494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799498: 0xfba00250  sqc2        $vf0, 0x250($sp)
    ctx->pc = 0x799498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79949c: 0xfba00260  sqc2        $vf0, 0x260($sp)
    ctx->pc = 0x79949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7994a0: 0xfba00270  sqc2        $vf0, 0x270($sp)
    ctx->pc = 0x7994a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7994a4: 0xfba00280  sqc2        $vf0, 0x280($sp)
    ctx->pc = 0x7994a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7994a8: 0xfba00290  sqc2        $vf0, 0x290($sp)
    ctx->pc = 0x7994a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7994ac: 0xfba002a0  sqc2        $vf0, 0x2A0($sp)
    ctx->pc = 0x7994acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7994b0: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x7994b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x7994b4: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b8: 0xa3a00181  sb          $zero, 0x181($sp)
    ctx->pc = 0x7994b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 385), (uint8_t)GPR_U32(ctx, 0));
    // 0x7994bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c0: 0xa3a00182  sb          $zero, 0x182($sp)
    ctx->pc = 0x7994c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 0));
    // 0x7994c4: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x7994c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x7994c8: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x7994c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x7994cc: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x7994ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
    // 0x7994d0: 0xafa001b4  sw          $zero, 0x1B4($sp)
    ctx->pc = 0x7994d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
    // 0x7994d4: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x7994d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
    // 0x7994d8: 0xafa001bc  sw          $zero, 0x1BC($sp)
    ctx->pc = 0x7994d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 0));
    // 0x7994dc: 0xafa002b0  sw          $zero, 0x2B0($sp)
    ctx->pc = 0x7994dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 0));
    // 0x7994e0: 0xafa002b4  sw          $zero, 0x2B4($sp)
    ctx->pc = 0x7994e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 0));
    // 0x7994e4: 0xafa002b8  sw          $zero, 0x2B8($sp)
    ctx->pc = 0x7994e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 0));
    // 0x7994e8: 0xafa002bc  sw          $zero, 0x2BC($sp)
    ctx->pc = 0x7994e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 0));
    // 0x7994ec: 0x0  nop
    ctx->pc = 0x7994ecu;
    // NOP
label_7994f0:
    // 0x7994f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x7994f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x7994f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7994f8: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x7994fc: 0x0  nop
    ctx->pc = 0x7994fcu;
    // NOP
    // 0x799500: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799500u;
    {
        const bool branch_taken_0x799500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799500u;
        // 0x799504: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799500) {
            ctx->pc = 0x7994F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994f0;
        }
    }
    ctx->pc = 0x799508u;
    // 0x799508: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x79950c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79950cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799510: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79951c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x79951cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799520: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799524: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x799524u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x799528: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79952c: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x79952Cu;
    SET_GPR_U32(ctx, 31, 0x799534u);
    ctx->pc = 0x799530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79952Cu;
    // 0x799530: 0x2407002d  addiu       $a3, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x79952Cu, 0x799534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799534u;
label_799534:
    // 0x799534: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799534u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799538: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79953c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x79953cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799544: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799548: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x79954c: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x79954Cu;
    SET_GPR_U32(ctx, 31, 0x799554u);
    ctx->pc = 0x799550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79954Cu;
    // 0x799550: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x79954Cu, 0x799554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799554u;
label_799554:
    // 0x799554: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799554u;
    {
        const bool branch_taken_0x799554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799554) {
            ctx->pc = 0x79956Cu;
            goto label_79956c;
        }
    }
    ctx->pc = 0x79955Cu;
    // 0x79955c: 0x0  nop
    ctx->pc = 0x79955cu;
    // NOP
label_799560:
    // 0x799560: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799564: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799564u;
    SET_GPR_U32(ctx, 31, 0x79956Cu);
    ctx->pc = 0x799568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799564u;
    // 0x799568: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799564u, 0x79956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x79956Cu;
    SET_GPR_U32(ctx, 31, 0x799574u);
    ctx->pc = 0x799570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79956Cu;
    // 0x799570: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79956Cu, 0x799574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799574u;
label_799574:
    // 0x799574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799578: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x799578u;
    SET_GPR_U32(ctx, 31, 0x799580u);
    ctx->pc = 0x79957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799578u;
    // 0x79957c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x799578u, 0x799580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799580u;
label_799580:
    // 0x799580: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799580u;
    {
        const bool branch_taken_0x799580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x799580) {
            ctx->pc = 0x799584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799580u;
            // 0x799584: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799560;
        }
    }
    ctx->pc = 0x799588u;
    // 0x799588: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x799588u;
    {
        const bool branch_taken_0x799588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799588u;
        // 0x79958c: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799588) {
            ctx->pc = 0x799560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799560;
        }
    }
    ctx->pc = 0x799590u;
    // 0x799590: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x799594: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799598: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79959c: 0x24a59a40  addiu       $a1, $a1, -0x65C0
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941248));
    // 0x7995a0: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7995A0u;
    SET_GPR_U32(ctx, 31, 0x7995A8u);
    ctx->pc = 0x7995A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A0u;
    // 0x7995a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7995A0u, 0x7995A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A8u;
label_7995a8:
    // 0x7995a8: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x7995ac: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7995ACu;
    SET_GPR_U32(ctx, 31, 0x7995B4u);
    ctx->pc = 0x7995B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995ACu;
    // 0x7995b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995ACu, 0x7995B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B4u;
label_7995b4:
    // 0x7995b4: 0x7bb00370  lq          $s0, 0x370($sp)
    ctx->pc = 0x7995b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x7995b8: 0x7bb10360  lq          $s1, 0x360($sp)
    ctx->pc = 0x7995b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x7995bc: 0x7bb20350  lq          $s2, 0x350($sp)
    ctx->pc = 0x7995bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x7995c0: 0x7bb30340  lq          $s3, 0x340($sp)
    ctx->pc = 0x7995c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x7995c4: 0x7bb40330  lq          $s4, 0x330($sp)
    ctx->pc = 0x7995c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x7995c8: 0x7bb50320  lq          $s5, 0x320($sp)
    ctx->pc = 0x7995c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x7995cc: 0x7bb60310  lq          $s6, 0x310($sp)
    ctx->pc = 0x7995ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x7995d0: 0x7bb70300  lq          $s7, 0x300($sp)
    ctx->pc = 0x7995d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x7995d4: 0x7bbe02f0  lq          $fp, 0x2F0($sp)
    ctx->pc = 0x7995d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x7995d8: 0xdfbf02e0  ld          $ra, 0x2E0($sp)
    ctx->pc = 0x7995d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x7995dc: 0xc7b40380  lwc1        $f20, 0x380($sp)
    ctx->pc = 0x7995dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7995e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7995E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995E8u;
}
} // namespace gh_r407
