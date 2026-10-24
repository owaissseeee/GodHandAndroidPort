#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_003BB4F0
// Address: 0x3bb4f0 - 0x3bb980
void func_003BB4F0_0x3bb4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BB4F0_0x3bb4f0");
#endif

    switch (ctx->pc) {
        case 0x3bb550u: goto label_3bb550;
        case 0x3bb58cu: goto label_3bb58c;
        case 0x3bb5c8u: goto label_3bb5c8;
        case 0x3bb608u: goto label_3bb608;
        case 0x3bb648u: goto label_3bb648;
        case 0x3bb6a4u: goto label_3bb6a4;
        case 0x3bb6ecu: goto label_3bb6ec;
        case 0x3bb734u: goto label_3bb734;
        case 0x3bb79cu: goto label_3bb79c;
        case 0x3bb7acu: goto label_3bb7ac;
        case 0x3bb7e8u: goto label_3bb7e8;
        case 0x3bb818u: goto label_3bb818;
        case 0x3bb83cu: goto label_3bb83c;
        case 0x3bb864u: goto label_3bb864;
        case 0x3bb888u: goto label_3bb888;
        case 0x3bb8b8u: goto label_3bb8b8;
        case 0x3bb918u: goto label_3bb918;
        default: break;
    }

    ctx->pc = 0x3bb4f0u;

    // 0x3bb4f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3bb4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3bb4f4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3bb4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3bb4f8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3bb4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3bb4fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bb4fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb500: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3bb500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3bb504: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3bb504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb508: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3bb508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3bb50c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3bb50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3bb510: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3bb510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3bb514: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3bb514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3bb518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb51c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3bb51cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bb520: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3bb520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3bb524: 0x1202008f  beq         $s0, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x3BB524u;
    {
        const bool branch_taken_0x3bb524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB524u;
        // 0x3bb528: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb524) {
            ctx->pc = 0x3BB764u;
            goto label_3bb764;
        }
    }
    ctx->pc = 0x3BB52Cu;
    // 0x3bb52c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3BB52Cu;
    {
        const bool branch_taken_0x3bb52c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb52c) {
            ctx->pc = 0x3BB530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB52Cu;
            // 0x3bb530: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB568u;
            goto label_3bb568;
        }
    }
    ctx->pc = 0x3BB534u;
    // 0x3bb534: 0x8e03fffc  lw          $v1, -0x4($s0)
    ctx->pc = 0x3bb534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x3bb538: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3bb538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3bb53c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bb53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bb540: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB540u;
    {
        const bool branch_taken_0x3bb540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb540) {
            ctx->pc = 0x3BB544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB540u;
            // 0x3bb544: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB558u;
            goto label_3bb558;
        }
    }
    ctx->pc = 0x3BB548u;
    // 0x3bb548: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BB548u;
    SET_GPR_U32(ctx, 31, 0x3BB550u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BB548u, 0x3BB550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB550u;
label_3bb550:
    // 0x3bb550: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB550u;
    {
        const bool branch_taken_0x3bb550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB550u;
        // 0x3bb554: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb550) {
            ctx->pc = 0x3BB560u;
            goto label_3bb560;
        }
    }
    ctx->pc = 0x3BB558u;
label_3bb558:
    // 0x3bb558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bb558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bb55c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bb55cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bb560:
    // 0x3bb560: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bb560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3bb564: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3bb564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3bb568:
    // 0x3bb568: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3bb568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3bb56c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3bb56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3bb570: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3bb570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3bb574: 0x24c4fff0  addiu       $a0, $a2, -0x10
    ctx->pc = 0x3bb574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3bb578: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bb578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bb57c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB57Cu;
    {
        const bool branch_taken_0x3bb57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB57Cu;
        // 0x3bb580: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb57c) {
            ctx->pc = 0x3BB594u;
            goto label_3bb594;
        }
    }
    ctx->pc = 0x3BB584u;
    // 0x3bb584: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BB584u;
    SET_GPR_U32(ctx, 31, 0x3BB58Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BB584u, 0x3BB58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB58Cu;
label_3bb58c:
    // 0x3bb58c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB58Cu;
    {
        const bool branch_taken_0x3bb58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB58Cu;
        // 0x3bb590: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb58c) {
            ctx->pc = 0x3BB5A0u;
            goto label_3bb5a0;
        }
    }
    ctx->pc = 0x3BB594u;
label_3bb594:
    // 0x3bb594: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3bb594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3bb598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bb598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bb59c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bb59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bb5a0:
    // 0x3bb5a0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3bb5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bb5a4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x3bb5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x3bb5a8: 0x2471fff8  addiu       $s1, $v1, -0x8
    ctx->pc = 0x3bb5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x3bb5ac: 0x2351023  subu        $v0, $s1, $s5
    ctx->pc = 0x3bb5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x3bb5b0: 0x29083  sra         $s2, $v0, 2
    ctx->pc = 0x3bb5b0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3bb5b4: 0x1a40002c  blez        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x3BB5B4u;
    {
        const bool branch_taken_0x3bb5b4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x3BB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB5B4u;
        // 0x3bb5b8: 0x2470fffc  addiu       $s0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb5b4) {
            ctx->pc = 0x3BB668u;
            goto label_3bb668;
        }
    }
    ctx->pc = 0x3BB5BCu;
    // 0x3bb5bc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3bb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x3bb5c0: 0x24534030  addiu       $s3, $v0, 0x4030
    ctx->pc = 0x3bb5c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x3bb5c4: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x3bb5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_3bb5c8:
    // 0x3bb5c8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x3bb5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x3bb5cc: 0x52300024  beql        $s1, $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3BB5CCu;
    {
        const bool branch_taken_0x3bb5cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x3bb5cc) {
            ctx->pc = 0x3BB5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB5CCu;
            // 0x3bb5d0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB660u;
            goto label_3bb660;
        }
    }
    ctx->pc = 0x3BB5D4u;
    // 0x3bb5d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bb5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bb5d8: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x3bb5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x3bb5dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3bb5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3bb5e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb5e4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BB5E4u;
    {
        const bool branch_taken_0x3bb5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB5E4u;
        // 0x3bb5e8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb5e4) {
            ctx->pc = 0x3BB62Cu;
            goto label_3bb62c;
        }
    }
    ctx->pc = 0x3BB5ECu;
    // 0x3bb5ec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3bb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3bb5f0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3bb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3bb5f4: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3bb5f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bb5f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB5F8u;
    {
        const bool branch_taken_0x3bb5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB5F8u;
        // 0x3bb5fc: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb5f8) {
            ctx->pc = 0x3BB610u;
            goto label_3bb610;
        }
    }
    ctx->pc = 0x3BB600u;
    // 0x3bb600: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3BB600u;
    SET_GPR_U32(ctx, 31, 0x3BB608u);
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3BB600u, 0x3BB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB608u;
label_3bb608:
    // 0x3bb608: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BB608u;
    {
        const bool branch_taken_0x3bb608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB608u;
        // 0x3bb60c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb608) {
            ctx->pc = 0x3BB630u;
            goto label_3bb630;
        }
    }
    ctx->pc = 0x3BB610u;
label_3bb610:
    // 0x3bb610: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3bb610u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3bb614: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bb618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bb61c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3bb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3bb620: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bb620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bb624: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x3bb624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x3bb628: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3bb628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3bb62c:
    // 0x3bb62c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3bb62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bb630:
    // 0x3bb630: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3bb630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3bb634: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bb634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bb638: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB638u;
    {
        const bool branch_taken_0x3bb638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb638) {
            ctx->pc = 0x3BB63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB638u;
            // 0x3bb63c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB650u;
            goto label_3bb650;
        }
    }
    ctx->pc = 0x3BB640u;
    // 0x3bb640: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BB640u;
    SET_GPR_U32(ctx, 31, 0x3BB648u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BB640u, 0x3BB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB648u;
label_3bb648:
    // 0x3bb648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB648u;
    {
        const bool branch_taken_0x3bb648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB648u;
        // 0x3bb64c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb648) {
            ctx->pc = 0x3BB658u;
            goto label_3bb658;
        }
    }
    ctx->pc = 0x3BB650u;
label_3bb650:
    // 0x3bb650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bb650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bb654: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bb654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bb658:
    // 0x3bb658: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bb658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3bb65c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3bb65cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3bb660:
    // 0x3bb660: 0x1e40ffd9  bgtz        $s2, . + 4 + (-0x27 << 2)
    ctx->pc = 0x3BB660u;
    {
        const bool branch_taken_0x3bb660 = (GPR_S64(ctx, 18) > 0);
        ctx->pc = 0x3BB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB660u;
        // 0x3bb664: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb660) {
            ctx->pc = 0x3BB5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb5c8;
        }
    }
    ctx->pc = 0x3BB668u;
label_3bb668:
    // 0x3bb668: 0x13b50025  beq         $sp, $s5, . + 4 + (0x25 << 2)
    ctx->pc = 0x3BB668u;
    {
        const bool branch_taken_0x3bb668 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 21));
        ctx->pc = 0x3BB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB668u;
        // 0x3bb66c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb668) {
            ctx->pc = 0x3BB700u;
            goto label_3bb700;
        }
    }
    ctx->pc = 0x3BB670u;
    // 0x3bb670: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x3bb670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3bb674: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x3bb674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3bb678: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3bb678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3bb67c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb680: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BB680u;
    {
        const bool branch_taken_0x3bb680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB680u;
        // 0x3bb684: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb680) {
            ctx->pc = 0x3BB6D0u;
            goto label_3bb6d0;
        }
    }
    ctx->pc = 0x3BB688u;
    // 0x3bb688: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3bb688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3bb68c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3bb68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3bb690: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3bb690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bb694: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB694u;
    {
        const bool branch_taken_0x3bb694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB694u;
        // 0x3bb698: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb694) {
            ctx->pc = 0x3BB6ACu;
            goto label_3bb6ac;
        }
    }
    ctx->pc = 0x3BB69Cu;
    // 0x3bb69c: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3BB69Cu;
    SET_GPR_U32(ctx, 31, 0x3BB6A4u);
    ctx->pc = 0x3BB6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB69Cu;
    // 0x3bb6a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3BB69Cu, 0x3BB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB6A4u;
label_3bb6a4:
    // 0x3bb6a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3BB6A4u;
    {
        const bool branch_taken_0x3bb6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6A4u;
        // 0x3bb6a8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb6a4) {
            ctx->pc = 0x3BB6D4u;
            goto label_3bb6d4;
        }
    }
    ctx->pc = 0x3BB6ACu;
label_3bb6ac:
    // 0x3bb6ac: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3bb6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3bb6b0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3bb6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3bb6b4: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x3bb6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x3bb6b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb6bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bb6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bb6c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bb6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bb6c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bb6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bb6c8: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x3bb6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x3bb6cc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3bb6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3bb6d0:
    // 0x3bb6d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bb6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bb6d4:
    // 0x3bb6d4: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3bb6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3bb6d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bb6dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB6DCu;
    {
        const bool branch_taken_0x3bb6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb6dc) {
            ctx->pc = 0x3BB6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB6DCu;
            // 0x3bb6e0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB6F4u;
            goto label_3bb6f4;
        }
    }
    ctx->pc = 0x3BB6E4u;
    // 0x3bb6e4: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BB6E4u;
    SET_GPR_U32(ctx, 31, 0x3BB6ECu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BB6E4u, 0x3BB6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB6ECu;
label_3bb6ec:
    // 0x3bb6ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB6ECu;
    {
        const bool branch_taken_0x3bb6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6ECu;
        // 0x3bb6f0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb6ec) {
            ctx->pc = 0x3BB6FCu;
            goto label_3bb6fc;
        }
    }
    ctx->pc = 0x3BB6F4u;
label_3bb6f4:
    // 0x3bb6f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bb6f8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bb6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bb6fc:
    // 0x3bb6fc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x3bb6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_3bb700:
    // 0x3bb700: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3bb700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb704: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x3bb704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3bb708: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3bb708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3bb70c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb710: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x3BB710u;
    {
        const bool branch_taken_0x3bb710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB710u;
        // 0x3bb714: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb710) {
            ctx->pc = 0x3BB954u;
            goto label_3bb954;
        }
    }
    ctx->pc = 0x3BB718u;
    // 0x3bb718: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3bb718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3bb71c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3bb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3bb720: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3bb720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bb724: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB724u;
    {
        const bool branch_taken_0x3bb724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB724u;
        // 0x3bb728: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb724) {
            ctx->pc = 0x3BB73Cu;
            goto label_3bb73c;
        }
    }
    ctx->pc = 0x3BB72Cu;
    // 0x3bb72c: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3BB72Cu;
    SET_GPR_U32(ctx, 31, 0x3BB734u);
    ctx->pc = 0x3BB730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB72Cu;
    // 0x3bb730: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3BB72Cu, 0x3BB734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB734u;
label_3bb734:
    // 0x3bb734: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3BB734u;
    {
        const bool branch_taken_0x3bb734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB734u;
        // 0x3bb738: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb734) {
            ctx->pc = 0x3BB958u;
            goto label_3bb958;
        }
    }
    ctx->pc = 0x3BB73Cu;
label_3bb73c:
    // 0x3bb73c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3bb73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3bb740: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3bb740u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3bb744: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x3bb744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x3bb748: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb74c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bb74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bb750: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bb750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bb754: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bb754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bb758: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x3bb758u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x3bb75c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x3BB75Cu;
    {
        const bool branch_taken_0x3bb75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB75Cu;
        // 0x3bb760: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb75c) {
            ctx->pc = 0x3BB954u;
            goto label_3bb954;
        }
    }
    ctx->pc = 0x3BB764u;
label_3bb764:
    // 0x3bb764: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bb764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bb768: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3bb768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb76c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3bb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3bb770: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3bb770u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3bb774: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3bb774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3bb778: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x3bb778u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3bb77c: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3BB77Cu;
    {
        const bool branch_taken_0x3bb77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB77Cu;
        // 0x3bb780: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb77c) {
            ctx->pc = 0x3BB7FCu;
            goto label_3bb7fc;
        }
    }
    ctx->pc = 0x3BB784u;
    // 0x3bb784: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3bb784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb788: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3bb788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bb78c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BB78Cu;
    {
        const bool branch_taken_0x3bb78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB78Cu;
        // 0x3bb790: 0x26850007  addiu       $a1, $s4, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb78c) {
            ctx->pc = 0x3BB7B4u;
            goto label_3bb7b4;
        }
    }
    ctx->pc = 0x3BB794u;
    // 0x3bb794: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x3BB794u;
    SET_GPR_U32(ctx, 31, 0x3BB79Cu);
    ctx->pc = 0x3BB798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB794u;
    // 0x3bb798: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x3BB794u, 0x3BB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB79Cu;
label_3bb79c:
    // 0x3bb79c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BB79Cu;
    {
        const bool branch_taken_0x3bb79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB79Cu;
        // 0x3bb7a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb79c) {
            ctx->pc = 0x3BB804u;
            goto label_3bb804;
        }
    }
    ctx->pc = 0x3BB7A4u;
    // 0x3bb7a4: 0xc0c75ba  jal         func_31D6E8
    ctx->pc = 0x3BB7A4u;
    SET_GPR_U32(ctx, 31, 0x3BB7ACu);
    ctx->pc = 0x3BB7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB7A4u;
    // 0x3bb7a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D6E8u, 0x3BB7A4u, 0x3BB7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB7ACu;
label_3bb7ac:
    // 0x3bb7ac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3BB7ACu;
    {
        const bool branch_taken_0x3bb7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7ACu;
        // 0x3bb7b0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb7ac) {
            ctx->pc = 0x3BB804u;
            goto label_3bb804;
        }
    }
    ctx->pc = 0x3BB7B4u;
label_3bb7b4:
    // 0x3bb7b4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3bb7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x3bb7b8: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x3bb7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x3bb7bc: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x3bb7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x3bb7c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb7c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bb7c8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3bb7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bb7cc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3bb7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bb7d0: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB7D0u;
    {
        const bool branch_taken_0x3bb7d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb7d0) {
            ctx->pc = 0x3BB7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB7D0u;
            // 0x3bb7d4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB7F0u;
            goto label_3bb7f0;
        }
    }
    ctx->pc = 0x3BB7D8u;
    // 0x3bb7d8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3bb7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3bb7dc: 0x3484fff8  ori         $a0, $a0, 0xFFF8
    ctx->pc = 0x3bb7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65528);
    // 0x3bb7e0: 0xc0c764a  jal         func_31D928
    ctx->pc = 0x3BB7E0u;
    SET_GPR_U32(ctx, 31, 0x3BB7E8u);
    ctx->pc = 0x3BB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB7E0u;
    // 0x3bb7e4: 0xa42024  and         $a0, $a1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D928u, 0x3BB7E0u, 0x3BB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB7E8u;
label_3bb7e8:
    // 0x3bb7e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB7E8u;
    {
        const bool branch_taken_0x3bb7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7E8u;
        // 0x3bb7ec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb7e8) {
            ctx->pc = 0x3BB804u;
            goto label_3bb804;
        }
    }
    ctx->pc = 0x3BB7F0u;
label_3bb7f0:
    // 0x3bb7f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3bb7f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb7f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB7F4u;
    {
        const bool branch_taken_0x3bb7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7F4u;
        // 0x3bb7f8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb7f4) {
            ctx->pc = 0x3BB804u;
            goto label_3bb804;
        }
    }
    ctx->pc = 0x3BB7FCu;
label_3bb7fc:
    // 0x3bb7fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3bb7fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb800: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3bb800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bb804:
    // 0x3bb804: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3bb804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bb808: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3bb808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb80c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3bb80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb810: 0xc0eed1a  jal         func_3BB468
    ctx->pc = 0x3BB810u;
    SET_GPR_U32(ctx, 31, 0x3BB818u);
    ctx->pc = 0x3BB814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB810u;
    // 0x3bb814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB468u, 0x3BB810u, 0x3BB818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB818u;
label_3bb818:
    // 0x3bb818: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3BB818u;
    {
        const bool branch_taken_0x3bb818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB818u;
        // 0x3bb81c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb818) {
            ctx->pc = 0x3BB850u;
            goto label_3bb850;
        }
    }
    ctx->pc = 0x3BB820u;
    // 0x3bb820: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3bb820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3bb824: 0x24c4fff0  addiu       $a0, $a2, -0x10
    ctx->pc = 0x3bb824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3bb828: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bb828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bb82c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB82Cu;
    {
        const bool branch_taken_0x3bb82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb82c) {
            ctx->pc = 0x3BB830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB82Cu;
            // 0x3bb830: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB844u;
            goto label_3bb844;
        }
    }
    ctx->pc = 0x3BB834u;
    // 0x3bb834: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BB834u;
    SET_GPR_U32(ctx, 31, 0x3BB83Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BB834u, 0x3BB83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB83Cu;
label_3bb83c:
    // 0x3bb83c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB83Cu;
    {
        const bool branch_taken_0x3bb83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB83Cu;
        // 0x3bb840: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb83c) {
            ctx->pc = 0x3BB84Cu;
            goto label_3bb84c;
        }
    }
    ctx->pc = 0x3BB844u;
label_3bb844:
    // 0x3bb844: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bb844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bb848: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bb848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bb84c:
    // 0x3bb84c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x3bb84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_3bb850:
    // 0x3bb850: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3bb850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bb854: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x3bb854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3bb858: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3bb858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb85c: 0xc0eed1a  jal         func_3BB468
    ctx->pc = 0x3BB85Cu;
    SET_GPR_U32(ctx, 31, 0x3BB864u);
    ctx->pc = 0x3BB860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB85Cu;
    // 0x3bb860: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB468u, 0x3BB85Cu, 0x3BB864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB864u;
label_3bb864:
    // 0x3bb864: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x3bb864u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bb868: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3bb868u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb86c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3bb86cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bb870: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x3bb870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3bb874: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3BB874u;
    {
        const bool branch_taken_0x3bb874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB874u;
        // 0x3bb878: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb874) {
            ctx->pc = 0x3BB8ECu;
            goto label_3bb8ec;
        }
    }
    ctx->pc = 0x3BB87Cu;
    // 0x3bb87c: 0x24554030  addiu       $s5, $v0, 0x4030
    ctx->pc = 0x3bb87cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x3bb880: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bb880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bb884: 0x0  nop
    ctx->pc = 0x3bb884u;
    // NOP
label_3bb888:
    // 0x3bb888: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x3bb888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x3bb88c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3bb88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3bb890: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb894: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BB894u;
    {
        const bool branch_taken_0x3bb894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB894u;
        // 0x3bb898: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb894) {
            ctx->pc = 0x3BB8DCu;
            goto label_3bb8dc;
        }
    }
    ctx->pc = 0x3BB89Cu;
    // 0x3bb89c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3bb89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3bb8a0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3bb8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3bb8a4: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3bb8a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bb8a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB8A8u;
    {
        const bool branch_taken_0x3bb8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8A8u;
        // 0x3bb8ac: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8a8) {
            ctx->pc = 0x3BB8C0u;
            goto label_3bb8c0;
        }
    }
    ctx->pc = 0x3BB8B0u;
    // 0x3bb8b0: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3BB8B0u;
    SET_GPR_U32(ctx, 31, 0x3BB8B8u);
    ctx->pc = 0x3BB8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB8B0u;
    // 0x3bb8b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3BB8B0u, 0x3BB8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB8B8u;
label_3bb8b8:
    // 0x3bb8b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BB8B8u;
    {
        const bool branch_taken_0x3bb8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8B8u;
        // 0x3bb8bc: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8b8) {
            ctx->pc = 0x3BB8E4u;
            goto label_3bb8e4;
        }
    }
    ctx->pc = 0x3BB8C0u;
label_3bb8c0:
    // 0x3bb8c0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3bb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3bb8c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb8c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bb8cc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3bb8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3bb8d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bb8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bb8d4: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x3bb8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x3bb8d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3bb8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3bb8dc:
    // 0x3bb8dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3bb8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3bb8e0: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x3bb8e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3bb8e4:
    // 0x3bb8e4: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3BB8E4u;
    {
        const bool branch_taken_0x3bb8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb8e4) {
            ctx->pc = 0x3BB8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB8E4u;
            // 0x3bb8e8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb888;
        }
    }
    ctx->pc = 0x3BB8ECu;
label_3bb8ec:
    // 0x3bb8ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3bb8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3bb8f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3bb8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bb8f4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3bb8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3bb8f8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3bb8f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3bb8fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BB8FCu;
    {
        const bool branch_taken_0x3bb8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8FCu;
        // 0x3bb900: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8fc) {
            ctx->pc = 0x3BB944u;
            goto label_3bb944;
        }
    }
    ctx->pc = 0x3BB904u;
    // 0x3bb904: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x3bb904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bb908: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB908u;
    {
        const bool branch_taken_0x3bb908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB908u;
        // 0x3bb90c: 0x24620007  addiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb908) {
            ctx->pc = 0x3BB920u;
            goto label_3bb920;
        }
    }
    ctx->pc = 0x3BB910u;
    // 0x3bb910: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3BB910u;
    SET_GPR_U32(ctx, 31, 0x3BB918u);
    ctx->pc = 0x3BB914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB910u;
    // 0x3bb914: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3BB910u, 0x3BB918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB918u;
label_3bb918:
    // 0x3bb918: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3BB918u;
    {
        const bool branch_taken_0x3bb918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB918u;
        // 0x3bb91c: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb918) {
            ctx->pc = 0x3BB948u;
            goto label_3bb948;
        }
    }
    ctx->pc = 0x3BB920u;
label_3bb920:
    // 0x3bb920: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3bb920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3bb924: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3bb924u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3bb928: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x3bb928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x3bb92c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb930: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bb930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bb934: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bb934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bb938: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bb938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bb93c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3bb93cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3bb940: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3bb940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3bb944:
    // 0x3bb944: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x3bb944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_3bb948:
    // 0x3bb948: 0xae360004  sw          $s6, 0x4($s1)
    ctx->pc = 0x3bb948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 22));
    // 0x3bb94c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3bb94cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3bb950: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x3bb950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_3bb954:
    // 0x3bb954: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3bb954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3bb958:
    // 0x3bb958: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3bb958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bb95c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3bb95cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bb960: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3bb960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bb964: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3bb964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bb968: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3bb968u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bb96c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3bb96cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb974: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB974u;
        // 0x3bb978: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB97Cu;
    // 0x3bb97c: 0x0  nop
    ctx->pc = 0x3bb97cu;
    // NOP
    ctx->pc = 0x3bb980u;
}
