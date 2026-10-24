#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlay__C12cEventVertex
// Address: 0x7b22a0 - 0x7b23d8
void movePlay__C12cEventVertex_0x7b22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__C12cEventVertex_0x7b22a0");
#endif

    switch (ctx->pc) {
        case 0x7b22e8u: goto label_7b22e8;
        case 0x7b2320u: goto label_7b2320;
        case 0x7b2330u: goto label_7b2330;
        case 0x7b2360u: goto label_7b2360;
        case 0x7b238cu: goto label_7b238c;
        case 0x7b23a0u: goto label_7b23a0;
        default: break;
    }

    ctx->pc = 0x7b22a0u;

    // 0x7b22a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b22a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b22a4: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7b22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7b22a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b22a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b22ac: 0x24424f80  addiu       $v0, $v0, 0x4F80
    ctx->pc = 0x7b22acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20352));
    // 0x7b22b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b22b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b22b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7b22b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b22b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b22b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b22bc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b22bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b22c0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b22c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b22c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b22c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b22c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b22c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b22cc: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x7b22ccu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x7B4F84u));
    // 0x7b22d0: 0x1a600037  blez        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x7B22D0u;
    {
        const bool branch_taken_0x7b22d0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x7B22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B22D0u;
        // 0x7b22d4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b22d0) {
            ctx->pc = 0x7B23B0u;
            goto label_7b23b0;
        }
    }
    ctx->pc = 0x7B22D8u;
    // 0x7b22d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7b22d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b22dc: 0x24140048  addiu       $s4, $zero, 0x48
    ctx->pc = 0x7b22dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7b22e0: 0x111600  sll         $v0, $s1, 24
    ctx->pc = 0x7b22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x7b22e4: 0x0  nop
    ctx->pc = 0x7b22e4u;
    // NOP
label_7b22e8:
    // 0x7b22e8: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x7b22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x7b22ec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x7b22ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x7b22f0: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x7b22f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7b22f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7b22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7b22f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x7b22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7b22fc: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x7B22FCu;
    {
        const bool branch_taken_0x7b22fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b22fc) {
            ctx->pc = 0x7B2300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B22FCu;
            // 0x7b2300: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B23A4u;
            goto label_7b23a4;
        }
    }
    ctx->pc = 0x7B2304u;
    // 0x7b2304: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x7b2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x7b2308: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x7b2308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x7b230c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x7B230Cu;
    {
        const bool branch_taken_0x7b230c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b230c) {
            ctx->pc = 0x7B2310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B230Cu;
            // 0x7b2310: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B23A4u;
            goto label_7b23a4;
        }
    }
    ctx->pc = 0x7B2314u;
    // 0x7b2314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7b2314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2318: 0xc1ecc6c  jal         func_7B31B0
    ctx->pc = 0x7B2318u;
    SET_GPR_U32(ctx, 31, 0x7B2320u);
    ctx->pc = 0x7B231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2318u;
    // 0x7b231c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B31B0u, 0x7B2318u, 0x7B2320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2320u;
label_7b2320:
    // 0x7b2320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7b2320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7b2324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2328: 0xc1ecc08  jal         func_7B3020
    ctx->pc = 0x7B2328u;
    SET_GPR_U32(ctx, 31, 0x7B2330u);
    ctx->pc = 0x7B232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2328u;
    // 0x7b232c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B3020u, 0x7B2328u, 0x7B2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2330u;
label_7b2330:
    // 0x7b2330: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B2330u;
    {
        const bool branch_taken_0x7b2330 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2330u;
        // 0x7b2334: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2330) {
            ctx->pc = 0x7B2348u;
            goto label_7b2348;
        }
    }
    ctx->pc = 0x7B2338u;
    // 0x7b2338: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x7B2338u;
    {
        const bool branch_taken_0x7b2338 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2338u;
        // 0x7b233c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2338) {
            ctx->pc = 0x7B23A0u;
            goto label_7b23a0;
        }
    }
    ctx->pc = 0x7B2340u;
    // 0x7b2340: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7B2340u;
    {
        const bool branch_taken_0x7b2340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b2340) {
            ctx->pc = 0x7B2358u;
            goto label_7b2358;
        }
    }
    ctx->pc = 0x7B2348u;
label_7b2348:
    // 0x7b2348: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x7b2348u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7b234c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x7b234cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x7b2350: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B2350u;
    {
        const bool branch_taken_0x7b2350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2350u;
        // 0x7b2354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2350) {
            ctx->pc = 0x7B2368u;
            goto label_7b2368;
        }
    }
    ctx->pc = 0x7B2358u;
label_7b2358:
    // 0x7b2358: 0xc1ec8f6  jal         func_7B23D8
    ctx->pc = 0x7B2358u;
    SET_GPR_U32(ctx, 31, 0x7B2360u);
    ctx->pc = 0x7B235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2358u;
    // 0x7b235c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B23D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B23D8u, 0x7B2358u, 0x7B2360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2360u;
label_7b2360:
    // 0x7b2360: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x7B2360u;
    {
        const bool branch_taken_0x7b2360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2360u;
        // 0x7b2364: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2360) {
            ctx->pc = 0x7B23A4u;
            goto label_7b23a4;
        }
    }
    ctx->pc = 0x7B2368u;
label_7b2368:
    // 0x7b2368: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x7b2368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x7b236c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B236Cu;
    {
        const bool branch_taken_0x7b236c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B236Cu;
        // 0x7b2370: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b236c) {
            ctx->pc = 0x7B2394u;
            goto label_7b2394;
        }
    }
    ctx->pc = 0x7B2374u;
    // 0x7b2374: 0x12070008  beq         $s0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B2374u;
    {
        const bool branch_taken_0x7b2374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x7B2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2374u;
        // 0x7b2378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2374) {
            ctx->pc = 0x7B2398u;
            goto label_7b2398;
        }
    }
    ctx->pc = 0x7B237Cu;
    // 0x7b237c: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x7B237Cu;
    {
        const bool branch_taken_0x7b237c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b237c) {
            ctx->pc = 0x7B2398u;
            goto label_7b2398;
        }
    }
    ctx->pc = 0x7B2384u;
    // 0x7b2384: 0xc1ec8fa  jal         func_7B23E8
    ctx->pc = 0x7B2384u;
    SET_GPR_U32(ctx, 31, 0x7B238Cu);
    ctx->pc = 0x7B2388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2384u;
    // 0x7b2388: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B23E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B23E8u, 0x7B2384u, 0x7B238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B238Cu;
label_7b238c:
    // 0x7b238c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7B238Cu;
    {
        const bool branch_taken_0x7b238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B238Cu;
        // 0x7b2390: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b238c) {
            ctx->pc = 0x7B23A4u;
            goto label_7b23a4;
        }
    }
    ctx->pc = 0x7B2394u;
label_7b2394:
    // 0x7b2394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7b2394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7b2398:
    // 0x7b2398: 0xc1ec8f8  jal         func_7B23E0
    ctx->pc = 0x7B2398u;
    SET_GPR_U32(ctx, 31, 0x7B23A0u);
    ctx->pc = 0x7B239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2398u;
    // 0x7b239c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B23E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B23E0u, 0x7B2398u, 0x7B23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B23A0u;
label_7b23a0:
    // 0x7b23a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x7b23a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_7b23a4:
    // 0x7b23a4: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x7b23a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x7b23a8: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x7B23A8u;
    {
        const bool branch_taken_0x7b23a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b23a8) {
            ctx->pc = 0x7B23ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B23A8u;
            // 0x7b23ac: 0x111600  sll         $v0, $s1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B22E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b22e8;
        }
    }
    ctx->pc = 0x7B23B0u;
label_7b23b0:
    // 0x7b23b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b23b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b23b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b23b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b23b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b23b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b23bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b23bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b23c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b23c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b23c4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b23c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b23c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b23c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b23cc: 0x3e00008  jr          $ra
    ctx->pc = 0x7B23CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B23CCu;
        // 0x7b23d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B23CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B23D4u;
    // 0x7b23d4: 0x0  nop
    ctx->pc = 0x7b23d4u;
    // NOP
    ctx->pc = 0x7b23d8u;
}
} // namespace gh_event
