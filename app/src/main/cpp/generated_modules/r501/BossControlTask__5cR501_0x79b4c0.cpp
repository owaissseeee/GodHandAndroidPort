#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: BossControlTask__5cR501
// Address: 0x79b4c0 - 0x79b728
void BossControlTask__5cR501_0x79b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BossControlTask__5cR501_0x79b4c0");
#endif

    switch (ctx->pc) {
        case 0x79b500u: goto label_79b500;
        case 0x79b510u: goto label_79b510;
        case 0x79b520u: goto label_79b520;
        case 0x79b538u: goto label_79b538;
        case 0x79b548u: goto label_79b548;
        case 0x79b558u: goto label_79b558;
        case 0x79b560u: goto label_79b560;
        case 0x79b580u: goto label_79b580;
        case 0x79b58cu: goto label_79b58c;
        case 0x79b598u: goto label_79b598;
        case 0x79b5c4u: goto label_79b5c4;
        case 0x79b5d4u: goto label_79b5d4;
        case 0x79b5e0u: goto label_79b5e0;
        case 0x79b5e8u: goto label_79b5e8;
        case 0x79b5fcu: goto label_79b5fc;
        case 0x79b620u: goto label_79b620;
        case 0x79b660u: goto label_79b660;
        case 0x79b670u: goto label_79b670;
        case 0x79b67cu: goto label_79b67c;
        case 0x79b690u: goto label_79b690;
        case 0x79b6f4u: goto label_79b6f4;
        case 0x79b700u: goto label_79b700;
        default: break;
    }

    ctx->pc = 0x79b4c0u;

    // 0x79b4c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79b4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79b4c4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b4c8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79b4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79b4cc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x79b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79b4d0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79b4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79b4d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b4d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79b4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79b4dc: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x79b4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x79b4e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79b4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79b4e4: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79b4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79b4e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79b4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x79b4ec: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x79b4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x79b4f0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x79b4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x79b4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79b4f8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79B4F8u;
    SET_GPR_U32(ctx, 31, 0x79B500u);
    ctx->pc = 0x79B4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4F8u;
    // 0x79b4fc: 0x8c5209d0  lw          $s2, 0x9D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79B4F8u, 0x79B500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B500u;
label_79b500:
    // 0x79b500: 0x2604ae50  addiu       $a0, $s0, -0x51B0
    ctx->pc = 0x79b500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x79b504: 0x26250798  addiu       $a1, $s1, 0x798
    ctx->pc = 0x79b504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1944));
    // 0x79b508: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79B508u;
    SET_GPR_U32(ctx, 31, 0x79B510u);
    ctx->pc = 0x79B50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B508u;
    // 0x79b50c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79B508u, 0x79B510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B510u;
label_79b510:
    // 0x79b510: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79b514: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b518: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x79B518u;
    SET_GPR_U32(ctx, 31, 0x79B520u);
    ctx->pc = 0x79B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B518u;
    // 0x79b51c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79B518u, 0x79B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B520u;
label_79b520:
    // 0x79b520: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x79b520u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b524: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x79b524u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b528: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79b528u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79b52c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b52cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b530: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79B530u;
    {
        const bool branch_taken_0x79b530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B530u;
        // 0x79b534: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b530) {
            ctx->pc = 0x79B558u;
            goto label_79b558;
        }
    }
    ctx->pc = 0x79B538u;
label_79b538:
    // 0x79b538: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b53c: 0x24a50868  addiu       $a1, $a1, 0x868
    ctx->pc = 0x79b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2152));
    // 0x79b540: 0xc1e810a  jal         func_7A0428
    ctx->pc = 0x79B540u;
    SET_GPR_U32(ctx, 31, 0x79B548u);
    ctx->pc = 0x79B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B540u;
    // 0x79b544: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A0428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A0428u, 0x79B540u, 0x79B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B548u;
label_79b548:
    // 0x79b548: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b54c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b550: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B550u;
    SET_GPR_U32(ctx, 31, 0x79B558u);
    ctx->pc = 0x79B554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B550u;
    // 0x79b554: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B550u, 0x79B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B558u;
label_79b558:
    // 0x79b558: 0xc1e6dca  jal         func_79B728
    ctx->pc = 0x79B558u;
    SET_GPR_U32(ctx, 31, 0x79B560u);
    ctx->pc = 0x79B728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B728u, 0x79B558u, 0x79B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B560u;
label_79b560:
    // 0x79b560: 0x5c40fff5  bgtzl       $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79B560u;
    {
        const bool branch_taken_0x79b560 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x79b560) {
            ctx->pc = 0x79B564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B560u;
            // 0x79b564: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b538;
        }
    }
    ctx->pc = 0x79B568u;
    // 0x79b568: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b56c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x79b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x79b570: 0x26106af0  addiu       $s0, $s0, 0x6AF0
    ctx->pc = 0x79b570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27376));
    // 0x79b574: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x79b574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x79b578: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B578u;
    SET_GPR_U32(ctx, 31, 0x79B580u);
    ctx->pc = 0x79B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B578u;
    // 0x79b57c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B578u, 0x79B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B580u;
label_79b580:
    // 0x79b580: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b584: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79B584u;
    SET_GPR_U32(ctx, 31, 0x79B58Cu);
    ctx->pc = 0x79B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B584u;
    // 0x79b588: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79B584u, 0x79B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B58Cu;
label_79b58c:
    // 0x79b58c: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x79b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x79b590: 0xc0a5916  jal         func_296458
    ctx->pc = 0x79B590u;
    SET_GPR_U32(ctx, 31, 0x79B598u);
    ctx->pc = 0x79B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B590u;
    // 0x79b594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296458u, 0x79B590u, 0x79B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B598u;
label_79b598:
    // 0x79b598: 0x8e657a8c  lw          $a1, 0x7A8C($s3)
    ctx->pc = 0x79b598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31372)));
    // 0x79b59c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79b5a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79b5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79b5a4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x79b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x79b5a8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79b5a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79b5ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79b5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79b5b0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x79b5b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x79b5b4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x79b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79b5b8: 0xae657a8c  sw          $a1, 0x7A8C($s3)
    ctx->pc = 0x79b5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31372), GPR_U32(ctx, 5));
    // 0x79b5bc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79B5BCu;
    SET_GPR_U32(ctx, 31, 0x79B5C4u);
    ctx->pc = 0x79B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5BCu;
    // 0x79b5c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79B5BCu, 0x79B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5C4u;
label_79b5c4:
    // 0x79b5c4: 0x26a4ae50  addiu       $a0, $s5, -0x51B0
    ctx->pc = 0x79b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946384));
    // 0x79b5c8: 0x26c50798  addiu       $a1, $s6, 0x798
    ctx->pc = 0x79b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1944));
    // 0x79b5cc: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79B5CCu;
    SET_GPR_U32(ctx, 31, 0x79B5D4u);
    ctx->pc = 0x79B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5CCu;
    // 0x79b5d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79B5CCu, 0x79B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5D4u;
label_79b5d4:
    // 0x79b5d4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x79B5D4u;
    {
        const bool branch_taken_0x79b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5D4u;
        // 0x79b5d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5d4) {
            ctx->pc = 0x79B674u;
            goto label_79b674;
        }
    }
    ctx->pc = 0x79B5DCu;
    // 0x79b5dc: 0x0  nop
    ctx->pc = 0x79b5dcu;
    // NOP
label_79b5e0:
    // 0x79b5e0: 0xc0a5f08  jal         func_297C20
    ctx->pc = 0x79B5E0u;
    SET_GPR_U32(ctx, 31, 0x79B5E8u);
    ctx->pc = 0x79B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5E0u;
    // 0x79b5e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C20u, 0x79B5E0u, 0x79B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5E8u;
label_79b5e8:
    // 0x79b5e8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79B5E8u;
    {
        const bool branch_taken_0x79b5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5E8u;
        // 0x79b5ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5e8) {
            ctx->pc = 0x79B660u;
            goto label_79b660;
        }
    }
    ctx->pc = 0x79B5F0u;
    // 0x79b5f0: 0x24050217  addiu       $a1, $zero, 0x217
    ctx->pc = 0x79b5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x79b5f4: 0xc0a5f14  jal         func_297C50
    ctx->pc = 0x79B5F4u;
    SET_GPR_U32(ctx, 31, 0x79B5FCu);
    ctx->pc = 0x79B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5F4u;
    // 0x79b5f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C50u, 0x79B5F4u, 0x79B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5FCu;
label_79b5fc:
    // 0x79b5fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x79b5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b600: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x79B600u;
    {
        const bool branch_taken_0x79b600 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B600u;
        // 0x79b604: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b600) {
            ctx->pc = 0x79B660u;
            goto label_79b660;
        }
    }
    ctx->pc = 0x79B608u;
    // 0x79b608: 0x8e4202a8  lw          $v0, 0x2A8($s2)
    ctx->pc = 0x79b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x79b60c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79B60Cu;
    {
        const bool branch_taken_0x79b60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B60Cu;
        // 0x79b610: 0x264402a8  addiu       $a0, $s2, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b60c) {
            ctx->pc = 0x79B64Cu;
            goto label_79b64c;
        }
    }
    ctx->pc = 0x79B614u;
    // 0x79b614: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79b614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b618: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x79b618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b61c: 0x0  nop
    ctx->pc = 0x79b61cu;
    // NOP
label_79b620:
    // 0x79b620: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x79b620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x79b624: 0x8ce500f0  lw          $a1, 0xF0($a3)
    ctx->pc = 0x79b624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
    // 0x79b628: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x79b628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x79b62c: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x79b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x79b630: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x79b630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x79b634: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x79b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b638: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B638u;
    {
        const bool branch_taken_0x79b638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B638u;
        // 0x79b63c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b638) {
            ctx->pc = 0x79B64Cu;
            goto label_79b64c;
        }
    }
    ctx->pc = 0x79B640u;
    // 0x79b640: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x79b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b644: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x79B644u;
    {
        const bool branch_taken_0x79b644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b644) {
            ctx->pc = 0x79B648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B644u;
            // 0x79b648: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b620;
        }
    }
    ctx->pc = 0x79B64Cu;
label_79b64c:
    // 0x79b64c: 0x8ce200f0  lw          $v0, 0xF0($a3)
    ctx->pc = 0x79b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
    // 0x79b650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79b650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b654: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79b654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b658: 0xc1e6e6c  jal         func_79B9B0
    ctx->pc = 0x79B658u;
    SET_GPR_U32(ctx, 31, 0x79B660u);
    ctx->pc = 0x79B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B658u;
    // 0x79b65c: 0xe6400394  swc1        $f0, 0x394($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 916), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B9B0u, 0x79B658u, 0x79B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B660u;
label_79b660:
    // 0x79b660: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b664: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b668: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B668u;
    SET_GPR_U32(ctx, 31, 0x79B670u);
    ctx->pc = 0x79B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B668u;
    // 0x79b66c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B668u, 0x79B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B670u;
label_79b670:
    // 0x79b670: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_79b674:
    // 0x79b674: 0xc1e8106  jal         func_7A0418
    ctx->pc = 0x79B674u;
    SET_GPR_U32(ctx, 31, 0x79B67Cu);
    ctx->pc = 0x79B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B674u;
    // 0x79b678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A0418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A0418u, 0x79B674u, 0x79B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B67Cu;
label_79b67c:
    // 0x79b67c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x79b67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x79b680: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x79B680u;
    {
        const bool branch_taken_0x79b680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b680) {
            ctx->pc = 0x79B5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b5e0;
        }
    }
    ctx->pc = 0x79B688u;
    // 0x79b688: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B688u;
    SET_GPR_U32(ctx, 31, 0x79B690u);
    ctx->pc = 0x79B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B688u;
    // 0x79b68c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B688u, 0x79B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B690u;
label_79b690:
    // 0x79b690: 0x3c01c1a2  lui         $at, 0xC1A2
    ctx->pc = 0x79b690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49570 << 16));
    // 0x79b694: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x79b694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x79b698: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b69c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6a0: 0x3c013faf  lui         $at, 0x3FAF
    ctx->pc = 0x79b6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16303 << 16));
    // 0x79b6a4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x79b6a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x79b6a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b6ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b6acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6b0: 0x3c01c2aa  lui         $at, 0xC2AA
    ctx->pc = 0x79b6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49834 << 16));
    // 0x79b6b4: 0x3421e666  ori         $at, $at, 0xE666
    ctx->pc = 0x79b6b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58982);
    // 0x79b6b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b6bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b6bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b6c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b6c8: 0x24050503  addiu       $a1, $zero, 0x503
    ctx->pc = 0x79b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x79b6cc: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b6d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79b6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6d4: 0x3c01bf7e  lui         $at, 0xBF7E
    ctx->pc = 0x79b6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49022 << 16));
    // 0x79b6d8: 0x3421adae  ori         $at, $at, 0xADAE
    ctx->pc = 0x79b6d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44462);
    // 0x79b6dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b6e0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x79b6e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79b6e4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79b6e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79b6e8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79b6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79b6ec: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79B6ECu;
    SET_GPR_U32(ctx, 31, 0x79B6F4u);
    ctx->pc = 0x79B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6ECu;
    // 0x79b6f0: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79B6ECu, 0x79B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6F4u;
label_79b6f4:
    // 0x79b6f4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b6f8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B6F8u;
    SET_GPR_U32(ctx, 31, 0x79B700u);
    ctx->pc = 0x79B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6F8u;
    // 0x79b6fc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B6F8u, 0x79B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B700u;
label_79b700:
    // 0x79b700: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79b700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b704: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79b704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b708: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79b708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b70c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79b70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b710: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79b710u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b714: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x79b714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b718: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x79b718u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b71c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b720: 0x3e00008  jr          $ra
    ctx->pc = 0x79B720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B720u;
        // 0x79b724: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B728u;
}
} // namespace gh_r501
