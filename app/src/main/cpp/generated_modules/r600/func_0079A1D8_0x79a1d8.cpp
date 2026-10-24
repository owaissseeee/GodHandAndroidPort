#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_0079A1D8
// Address: 0x79a1d8 - 0x79a390
void func_0079A1D8_0x79a1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A1D8_0x79a1d8");
#endif

    switch (ctx->pc) {
        case 0x79a234u: goto label_79a234;
        case 0x79a254u: goto label_79a254;
        case 0x79a270u: goto label_79a270;
        case 0x79a280u: goto label_79a280;
        case 0x79a290u: goto label_79a290;
        case 0x79a2a8u: goto label_79a2a8;
        case 0x79a2b4u: goto label_79a2b4;
        case 0x79a2d4u: goto label_79a2d4;
        case 0x79a2f4u: goto label_79a2f4;
        case 0x79a2fcu: goto label_79a2fc;
        case 0x79a308u: goto label_79a308;
        case 0x79a314u: goto label_79a314;
        case 0x79a320u: goto label_79a320;
        case 0x79a328u: goto label_79a328;
        case 0x79a330u: goto label_79a330;
        case 0x79a338u: goto label_79a338;
        case 0x79a344u: goto label_79a344;
        case 0x79a34cu: goto label_79a34c;
        case 0x79a35cu: goto label_79a35c;
        case 0x79a368u: goto label_79a368;
        default: break;
    }

    ctx->pc = 0x79a1d8u;

    // 0x79a1d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x79a1dc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x79a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79a1e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x79a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a1e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a1e8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79a1ec: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x79a1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79a1f0: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x79a1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x79a1f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1f8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x79a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x79a1fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a200: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x79a200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x79a204: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79a204u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79a208: 0xa3a60018  sb          $a2, 0x18($sp)
    ctx->pc = 0x79a208u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a20c: 0xa3a70020  sb          $a3, 0x20($sp)
    ctx->pc = 0x79a20cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 7));
    // 0x79a210: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x79a210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x79a214: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x79a214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x79a218: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x79a218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x79a21c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x79a21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x79a220: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x79a220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x79a224: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79a228: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a228u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a22c: 0xc1e6b56  jal         func_79AD58
    ctx->pc = 0x79A22Cu;
    SET_GPR_U32(ctx, 31, 0x79A234u);
    ctx->pc = 0x79A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A22Cu;
    // 0x79a230: 0xa3a30008  sb          $v1, 0x8($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD58u, 0x79A22Cu, 0x79A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A234u;
label_79a234:
    // 0x79a234: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x79a234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x79a238: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a23c: 0x240600be  addiu       $a2, $zero, 0xBE
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x79a240: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a244: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a248: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a248u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a24c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A24Cu;
    SET_GPR_U32(ctx, 31, 0x79A254u);
    ctx->pc = 0x79A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A24Cu;
    // 0x79a250: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A24Cu, 0x79A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A254u;
label_79a254:
    // 0x79a254: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79a254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a258: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x79a258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a25c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79a25cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79a260: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x79a260u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x79a264: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a268: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A268u;
    {
        const bool branch_taken_0x79a268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A268u;
        // 0x79a26c: 0x3c16007a  lui         $s6, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a268) {
            ctx->pc = 0x79A280u;
            goto label_79a280;
        }
    }
    ctx->pc = 0x79A270u;
label_79a270:
    // 0x79a270: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a278: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A278u;
    SET_GPR_U32(ctx, 31, 0x79A280u);
    ctx->pc = 0x79A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A278u;
    // 0x79a27c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A278u, 0x79A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A280u;
label_79a280:
    // 0x79a280: 0x2650ee00  addiu       $s0, $s2, -0x1200
    ctx->pc = 0x79a280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
    // 0x79a284: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x79a284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a288: 0xc0b2f3c  jal         func_2CBCF0
    ctx->pc = 0x79A288u;
    SET_GPR_U32(ctx, 31, 0x79A290u);
    ctx->pc = 0x79A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A288u;
    // 0x79a28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBCF0u, 0x79A288u, 0x79A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A290u;
label_79a290:
    // 0x79a290: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A290u;
    {
        const bool branch_taken_0x79a290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A290u;
        // 0x79a294: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a290) {
            ctx->pc = 0x79A270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a270;
        }
    }
    ctx->pc = 0x79A298u;
    // 0x79a298: 0x26a46ab0  addiu       $a0, $s5, 0x6AB0
    ctx->pc = 0x79a298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 27312));
    // 0x79a29c: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79a29cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a2a0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A2A0u;
    SET_GPR_U32(ctx, 31, 0x79A2A8u);
    ctx->pc = 0x79A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2A0u;
    // 0x79a2a4: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A2A0u, 0x79A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2A8u;
label_79a2a8:
    // 0x79a2a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2ac: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79A2ACu;
    SET_GPR_U32(ctx, 31, 0x79A2B4u);
    ctx->pc = 0x79A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2ACu;
    // 0x79a2b0: 0x240503c2  addiu       $a1, $zero, 0x3C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 962));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A2ACu, 0x79A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2B4u;
label_79a2b4:
    // 0x79a2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a2bc: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x79a2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x79a2c0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a2c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a2c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a2c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2cc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A2CCu;
    SET_GPR_U32(ctx, 31, 0x79A2D4u);
    ctx->pc = 0x79A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2CCu;
    // 0x79a2d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A2CCu, 0x79A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2D4u;
label_79a2d4:
    // 0x79a2d4: 0x240600c1  addiu       $a2, $zero, 0xC1
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x79a2d8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a2dc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a2e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a2e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a2e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2ec: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A2ECu;
    SET_GPR_U32(ctx, 31, 0x79A2F4u);
    ctx->pc = 0x79A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2ECu;
    // 0x79a2f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A2ECu, 0x79A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2F4u;
label_79a2f4:
    // 0x79a2f4: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79A2F4u;
    SET_GPR_U32(ctx, 31, 0x79A2FCu);
    ctx->pc = 0x79A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2F4u;
    // 0x79a2f8: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A2F4u, 0x79A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2FCu;
label_79a2fc:
    // 0x79a2fc: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a300: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A300u;
    SET_GPR_U32(ctx, 31, 0x79A308u);
    ctx->pc = 0x79A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A300u;
    // 0x79a304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A300u, 0x79A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A308u;
label_79a308:
    // 0x79a308: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a30c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79A30Cu;
    SET_GPR_U32(ctx, 31, 0x79A314u);
    ctx->pc = 0x79A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A30Cu;
    // 0x79a310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A30Cu, 0x79A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A314u;
label_79a314:
    // 0x79a314: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a318: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A318u;
    SET_GPR_U32(ctx, 31, 0x79A320u);
    ctx->pc = 0x79A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A318u;
    // 0x79a31c: 0x26c5b7d8  addiu       $a1, $s6, -0x4828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A318u, 0x79A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A320u;
label_79a320:
    // 0x79a320: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A320u;
    SET_GPR_U32(ctx, 31, 0x79A328u);
    ctx->pc = 0x79A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A320u;
    // 0x79a324: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A320u, 0x79A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A328u;
label_79a328:
    // 0x79a328: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A328u;
    SET_GPR_U32(ctx, 31, 0x79A330u);
    ctx->pc = 0x79A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A328u;
    // 0x79a32c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A328u, 0x79A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A330u;
label_79a330:
    // 0x79a330: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79A330u;
    {
        const bool branch_taken_0x79a330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a330) {
            ctx->pc = 0x79A344u;
            goto label_79a344;
        }
    }
    ctx->pc = 0x79A338u;
label_79a338:
    // 0x79a338: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a33c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A33Cu;
    SET_GPR_U32(ctx, 31, 0x79A344u);
    ctx->pc = 0x79A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A33Cu;
    // 0x79a340: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A33Cu, 0x79A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A344u;
label_79a344:
    // 0x79a344: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A344u;
    SET_GPR_U32(ctx, 31, 0x79A34Cu);
    ctx->pc = 0x79A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A344u;
    // 0x79a348: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A344u, 0x79A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A34Cu;
label_79a34c:
    // 0x79a34c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A34Cu;
    {
        const bool branch_taken_0x79a34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A34Cu;
        // 0x79a350: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a34c) {
            ctx->pc = 0x79A338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a338;
        }
    }
    ctx->pc = 0x79A354u;
    // 0x79a354: 0xc1e6a42  jal         func_79A908
    ctx->pc = 0x79A354u;
    SET_GPR_U32(ctx, 31, 0x79A35Cu);
    ctx->pc = 0x79A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A354u;
    // 0x79a358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A908u, 0x79A354u, 0x79A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A35Cu;
label_79a35c:
    // 0x79a35c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a360: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A360u;
    SET_GPR_U32(ctx, 31, 0x79A368u);
    ctx->pc = 0x79A364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A360u;
    // 0x79a364: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A360u, 0x79A368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A368u;
label_79a368:
    // 0x79a368: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x79a368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a36c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x79a36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a370: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x79a370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a374: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x79a374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a378: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x79a378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a37c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x79a37cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a380: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x79a380u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a384: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79a384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a388: 0x3e00008  jr          $ra
    ctx->pc = 0x79A388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A388u;
        // 0x79a38c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A390u;
}
} // namespace gh_r600
