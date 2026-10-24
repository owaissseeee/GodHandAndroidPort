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
// Function: func_0079B510
// Address: 0x79b510 - 0x79b6d0
void func_0079B510_0x79b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B510_0x79b510");
#endif

    switch (ctx->pc) {
        case 0x79b550u: goto label_79b550;
        case 0x79b570u: goto label_79b570;
        case 0x79b57cu: goto label_79b57c;
        case 0x79b590u: goto label_79b590;
        case 0x79b5a8u: goto label_79b5a8;
        case 0x79b5d8u: goto label_79b5d8;
        case 0x79b5f4u: goto label_79b5f4;
        case 0x79b624u: goto label_79b624;
        case 0x79b62cu: goto label_79b62c;
        case 0x79b644u: goto label_79b644;
        case 0x79b650u: goto label_79b650;
        case 0x79b664u: goto label_79b664;
        case 0x79b66cu: goto label_79b66c;
        case 0x79b684u: goto label_79b684;
        case 0x79b690u: goto label_79b690;
        case 0x79b69cu: goto label_79b69c;
        default: break;
    }

    ctx->pc = 0x79b510u;

    // 0x79b510: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x79b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x79b514: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b518: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x79b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x79b51c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79b51cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79b520: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x79b520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x79b524: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x79b524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x79b528: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x79b528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x79b52c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x79b52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x79b530: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x79b530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x79b534: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x79b534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x79b538: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x79b538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x79b53c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79b53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79b540: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x79b540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x79b544: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b548: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B548u;
    SET_GPR_U32(ctx, 31, 0x79B550u);
    ctx->pc = 0x79B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B548u;
    // 0x79b54c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B548u, 0x79B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B550u;
label_79b550:
    // 0x79b550: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x79b550u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b554: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x79b554u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x79b558: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x79b558u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x79b55c: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x79b55cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x79b560: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x79b560u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x79b564: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x79b564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b568: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79B568u;
    {
        const bool branch_taken_0x79b568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B568u;
        // 0x79b56c: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b568) {
            ctx->pc = 0x79B57Cu;
            goto label_79b57c;
        }
    }
    ctx->pc = 0x79B570u;
label_79b570:
    // 0x79b570: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b574: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B574u;
    SET_GPR_U32(ctx, 31, 0x79B57Cu);
    ctx->pc = 0x79B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B574u;
    // 0x79b578: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B574u, 0x79B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B57Cu;
label_79b57c:
    // 0x79b57c: 0x2654ea60  addiu       $s4, $s2, -0x15A0
    ctx->pc = 0x79b57cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x79b580: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79b580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b584: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b588: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B588u;
    SET_GPR_U32(ctx, 31, 0x79B590u);
    ctx->pc = 0x79B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B588u;
    // 0x79b58c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B588u, 0x79B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B590u;
label_79b590:
    // 0x79b590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b594: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x79B594u;
    {
        const bool branch_taken_0x79b594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B594u;
        // 0x79b598: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b594) {
            ctx->pc = 0x79B570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b570;
        }
    }
    ctx->pc = 0x79B59Cu;
    // 0x79b59c: 0x26048658  addiu       $a0, $s0, -0x79A8
    ctx->pc = 0x79b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x79b5a0: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B5A0u;
    SET_GPR_U32(ctx, 31, 0x79B5A8u);
    ctx->pc = 0x79B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5A0u;
    // 0x79b5a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B5A0u, 0x79B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5A8u;
label_79b5a8:
    // 0x79b5a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b5ac: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x79b5acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x79b5b0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79B5B0u;
    {
        const bool branch_taken_0x79b5b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5B0u;
        // 0x79b5b4: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5b0) {
            ctx->pc = 0x79B570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b570;
        }
    }
    ctx->pc = 0x79B5B8u;
    // 0x79b5b8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x79b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x79b5bc: 0x26f06ab0  addiu       $s0, $s7, 0x6AB0
    ctx->pc = 0x79b5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 27312));
    // 0x79b5c0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x79b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x79b5c4: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79b5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b5c8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5d0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B5D0u;
    SET_GPR_U32(ctx, 31, 0x79B5D8u);
    ctx->pc = 0x79B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5D0u;
    // 0x79b5d4: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B5D0u, 0x79B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5D8u;
label_79b5d8:
    // 0x79b5d8: 0x8ea3c500  lw          $v1, -0x3B00($s5)
    ctx->pc = 0x79b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952192)));
    // 0x79b5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b5e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b5e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79b5ec: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B5ECu;
    SET_GPR_U32(ctx, 31, 0x79B5F4u);
    ctx->pc = 0x79B5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5ECu;
    // 0x79b5f0: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B5ECu, 0x79B5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5F4u;
label_79b5f4:
    // 0x79b5f4: 0x8ea3c500  lw          $v1, -0x3B00($s5)
    ctx->pc = 0x79b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952192)));
    // 0x79b5f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b5fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b600: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79b600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79b604: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79b604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b608: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79b608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b60c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b610: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79b614: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79b618: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b61c: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79B61Cu;
    SET_GPR_U32(ctx, 31, 0x79B624u);
    ctx->pc = 0x79B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B61Cu;
    // 0x79b620: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79B61Cu, 0x79B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B624u;
label_79b624:
    // 0x79b624: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B624u;
    SET_GPR_U32(ctx, 31, 0x79B62Cu);
    ctx->pc = 0x79B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B624u;
    // 0x79b628: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B624u, 0x79B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B62Cu;
label_79b62c:
    // 0x79b62c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b630: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79b630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b634: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b638: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b63c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B63Cu;
    SET_GPR_U32(ctx, 31, 0x79B644u);
    ctx->pc = 0x79B640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B63Cu;
    // 0x79b640: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B63Cu, 0x79B644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B644u;
label_79b644:
    // 0x79b644: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b648: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79B648u;
    SET_GPR_U32(ctx, 31, 0x79B650u);
    ctx->pc = 0x79B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B648u;
    // 0x79b64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B648u, 0x79B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B650u;
label_79b650:
    // 0x79b650: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b654: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79b654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b65c: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79B65Cu;
    SET_GPR_U32(ctx, 31, 0x79B664u);
    ctx->pc = 0x79B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B65Cu;
    // 0x79b660: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79B65Cu, 0x79B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B664u;
label_79b664:
    // 0x79b664: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B664u;
    SET_GPR_U32(ctx, 31, 0x79B66Cu);
    ctx->pc = 0x79B668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B664u;
    // 0x79b668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B664u, 0x79B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B66Cu;
label_79b66c:
    // 0x79b66c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b66cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79b670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b674: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79b674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b67c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B67Cu;
    SET_GPR_U32(ctx, 31, 0x79B684u);
    ctx->pc = 0x79B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B67Cu;
    // 0x79b680: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B67Cu, 0x79B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B684u;
label_79b684:
    // 0x79b684: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79b684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b688: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79B688u;
    SET_GPR_U32(ctx, 31, 0x79B690u);
    ctx->pc = 0x79B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B688u;
    // 0x79b68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B688u, 0x79B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B690u;
label_79b690:
    // 0x79b690: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x79b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x79b694: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B694u;
    SET_GPR_U32(ctx, 31, 0x79B69Cu);
    ctx->pc = 0x79B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B694u;
    // 0x79b698: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B694u, 0x79B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B69Cu;
label_79b69c:
    // 0x79b69c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x79b69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79b6a0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x79b6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79b6a4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x79b6a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79b6a8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x79b6a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b6ac: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x79b6acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b6b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x79b6b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b6b4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x79b6b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b6b8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x79b6b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b6bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79b6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b6c0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x79b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x79B6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6C4u;
        // 0x79b6c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B6CCu;
    // 0x79b6cc: 0x0  nop
    ctx->pc = 0x79b6ccu;
    // NOP
    ctx->pc = 0x79b6d0u;
}
} // namespace gh_r100
