#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: func_00799310
// Address: 0x799310 - 0x7994c0
void func_00799310_0x799310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799310_0x799310");
#endif

    switch (ctx->pc) {
        case 0x799368u: goto label_799368;
        case 0x79936cu: goto label_79936c;
        case 0x799388u: goto label_799388;
        case 0x79939cu: goto label_79939c;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993ccu: goto label_7993cc;
        case 0x7993e4u: goto label_7993e4;
        case 0x7993f4u: goto label_7993f4;
        case 0x799404u: goto label_799404;
        case 0x799414u: goto label_799414;
        case 0x799424u: goto label_799424;
        case 0x799444u: goto label_799444;
        case 0x799454u: goto label_799454;
        case 0x79945cu: goto label_79945c;
        case 0x79946cu: goto label_79946c;
        case 0x79947cu: goto label_79947c;
        case 0x79948cu: goto label_79948c;
        case 0x79949cu: goto label_79949c;
        default: break;
    }

    ctx->pc = 0x799310u;

    // 0x799310: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x799314: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799318: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79931c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799320: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799324: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x799324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x799328: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x799328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79932c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79932cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x799330: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x799330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x799334: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x799334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x799338: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x799338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x79933c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79933cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799340: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799340u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799344: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x799344u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x799348: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x799348u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x79934c: 0xa3a50018  sb          $a1, 0x18($sp)
    ctx->pc = 0x79934cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x799350: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799354: 0x27b20018  addiu       $s2, $sp, 0x18
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x799358: 0x27b30008  addiu       $s3, $sp, 0x8
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x79935c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x79935Cu;
    {
        const bool branch_taken_0x79935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79935Cu;
        // 0x799360: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79935c) {
            ctx->pc = 0x799454u;
            goto label_799454;
        }
    }
    ctx->pc = 0x799364u;
    // 0x799364: 0x0  nop
    ctx->pc = 0x799364u;
    // NOP
label_799368:
    // 0x799368: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_79936c:
    // 0x79936c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x799370: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936152)));
    // 0x799374: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799378: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79937c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79937Cu;
    {
        const bool branch_taken_0x79937c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79937Cu;
        // 0x799380: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79937c) {
            ctx->pc = 0x7993BCu;
            goto label_7993bc;
        }
    }
    ctx->pc = 0x799384u;
    // 0x799384: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799388:
    // 0x799388: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79938c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79938cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799394: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x799394u;
    SET_GPR_U32(ctx, 31, 0x79939Cu);
    ctx->pc = 0x799398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799394u;
    // 0x799398: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x799394u, 0x79939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79939Cu;
label_79939c:
    // 0x79939c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79939cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993a0: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x7993A0u;
    SET_GPR_U32(ctx, 31, 0x7993A8u);
    ctx->pc = 0x7993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A0u;
    // 0x7993a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x7993A0u, 0x7993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x7993a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x7993ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7993ACu;
    {
        const bool branch_taken_0x7993ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ACu;
        // 0x7993b0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993ac) {
            ctx->pc = 0x799388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799388;
        }
    }
    ctx->pc = 0x7993B4u;
    // 0x7993b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7993B4u;
    {
        const bool branch_taken_0x7993b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7993b4) {
            ctx->pc = 0x7993DCu;
            goto label_7993dc;
        }
    }
    ctx->pc = 0x7993BCu;
label_7993bc:
    // 0x7993bc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x7993bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7993c0:
    // 0x7993c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c4: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x7993C4u;
    SET_GPR_U32(ctx, 31, 0x7993CCu);
    ctx->pc = 0x7993C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C4u;
    // 0x7993c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x7993C4u, 0x7993CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993CCu;
label_7993cc:
    // 0x7993cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x7993ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x7993d0: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x7993d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x7993d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7993D4u;
    {
        const bool branch_taken_0x7993d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D4u;
        // 0x7993d8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d4) {
            ctx->pc = 0x7993C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993c0;
        }
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x7993DCu;
    SET_GPR_U32(ctx, 31, 0x7993E4u);
    ctx->pc = 0x7993E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993DCu;
    // 0x7993e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x7993DCu, 0x7993E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E4u;
label_7993e4:
    // 0x7993e4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x7993E4u;
    {
        const bool branch_taken_0x7993e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E4u;
        // 0x7993e8: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993e4) {
            ctx->pc = 0x799448u;
            goto label_799448;
        }
    }
    ctx->pc = 0x7993ECu;
    // 0x7993ec: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7993ECu;
    SET_GPR_U32(ctx, 31, 0x7993F4u);
    ctx->pc = 0x7993F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993ECu;
    // 0x7993f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7993ECu, 0x7993F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F4u;
label_7993f4:
    // 0x7993f4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x7993F4u;
    {
        const bool branch_taken_0x7993f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F4u;
        // 0x7993f8: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993f4) {
            ctx->pc = 0x799448u;
            goto label_799448;
        }
    }
    ctx->pc = 0x7993FCu;
    // 0x7993fc: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7993FCu;
    SET_GPR_U32(ctx, 31, 0x799404u);
    ctx->pc = 0x799400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993FCu;
    // 0x799400: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7993FCu, 0x799404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799404u;
label_799404:
    // 0x799404: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x799404u;
    {
        const bool branch_taken_0x799404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799404u;
        // 0x799408: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799404) {
            ctx->pc = 0x799448u;
            goto label_799448;
        }
    }
    ctx->pc = 0x79940Cu;
    // 0x79940c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79940Cu;
    SET_GPR_U32(ctx, 31, 0x799414u);
    ctx->pc = 0x799410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79940Cu;
    // 0x799410: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79940Cu, 0x799414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799414u;
label_799414:
    // 0x799414: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799414u;
    {
        const bool branch_taken_0x799414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799414u;
        // 0x799418: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799414) {
            ctx->pc = 0x799448u;
            goto label_799448;
        }
    }
    ctx->pc = 0x79941Cu;
    // 0x79941c: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79941Cu;
    SET_GPR_U32(ctx, 31, 0x799424u);
    ctx->pc = 0x799420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79941Cu;
    // 0x799420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79941Cu, 0x799424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799424u;
label_799424:
    // 0x799424: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799428: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79942c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79942cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799438: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79943c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79943Cu;
    SET_GPR_U32(ctx, 31, 0x799444u);
    ctx->pc = 0x799440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79943Cu;
    // 0x799440: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79943Cu, 0x799444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799444u;
label_799444:
    // 0x799444: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799448:
    // 0x799448: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79944c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79944Cu;
    SET_GPR_U32(ctx, 31, 0x799454u);
    ctx->pc = 0x799450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79944Cu;
    // 0x799450: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799454u;
    SET_GPR_U32(ctx, 31, 0x79945Cu);
    ctx->pc = 0x799458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799454u;
    // 0x799458: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x79945Cu;
    {
        const bool branch_taken_0x79945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0x3c04005f  lui         $a0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79945c) {
            ctx->pc = 0x79936Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79936c;
        }
    }
    ctx->pc = 0x799464u;
    // 0x799464: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x1040ffbf  beqz        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x79946Cu;
    {
        const bool branch_taken_0x79946c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x3c04005f  lui         $a0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79946c) {
            ctx->pc = 0x79936Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79936c;
        }
    }
    ctx->pc = 0x799474u;
    // 0x799474: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799474u;
    SET_GPR_U32(ctx, 31, 0x79947Cu);
    ctx->pc = 0x799478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799474u;
    // 0x799478: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799474u, 0x79947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0x1040ffbb  beqz        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x79947Cu;
    {
        const bool branch_taken_0x79947c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79947Cu;
        // 0x799480: 0x3c04005f  lui         $a0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79947c) {
            ctx->pc = 0x79936Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79936c;
        }
    }
    ctx->pc = 0x799484u;
    // 0x799484: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799484u;
    SET_GPR_U32(ctx, 31, 0x79948Cu);
    ctx->pc = 0x799488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799484u;
    // 0x799488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799484u, 0x79948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79948Cu;
label_79948c:
    // 0x79948c: 0x1040ffb6  beqz        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x79948Cu;
    {
        const bool branch_taken_0x79948c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79948Cu;
        // 0x799490: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79948c) {
            ctx->pc = 0x799368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799368;
        }
    }
    ctx->pc = 0x799494u;
    // 0x799494: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799494u;
    SET_GPR_U32(ctx, 31, 0x79949Cu);
    ctx->pc = 0x799498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799494u;
    // 0x799498: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799494u, 0x79949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79949cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7994a0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x7994a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7994a4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x7994a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7994a8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x7994a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7994ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x7994acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7994b0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x7994b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7994b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7994b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7994B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B8u;
        // 0x7994bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994C0u;
}
} // namespace gh_r608
