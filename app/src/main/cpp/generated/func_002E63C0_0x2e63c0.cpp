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

// Function: func_002E63C0
// Address: 0x2e63c0 - 0x2e64b0
void func_002E63C0_0x2e63c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E63C0_0x2e63c0");
#endif

    switch (ctx->pc) {
        case 0x2e63c0u: goto label_2e63c0;
        case 0x2e63c4u: goto label_2e63c4;
        case 0x2e63c8u: goto label_2e63c8;
        case 0x2e63ccu: goto label_2e63cc;
        case 0x2e63d0u: goto label_2e63d0;
        case 0x2e63d4u: goto label_2e63d4;
        case 0x2e63d8u: goto label_2e63d8;
        case 0x2e63dcu: goto label_2e63dc;
        case 0x2e63e0u: goto label_2e63e0;
        case 0x2e63e4u: goto label_2e63e4;
        case 0x2e63e8u: goto label_2e63e8;
        case 0x2e63ecu: goto label_2e63ec;
        case 0x2e63f0u: goto label_2e63f0;
        case 0x2e63f4u: goto label_2e63f4;
        case 0x2e63f8u: goto label_2e63f8;
        case 0x2e63fcu: goto label_2e63fc;
        case 0x2e6400u: goto label_2e6400;
        case 0x2e6404u: goto label_2e6404;
        case 0x2e6408u: goto label_2e6408;
        case 0x2e640cu: goto label_2e640c;
        case 0x2e6410u: goto label_2e6410;
        case 0x2e6414u: goto label_2e6414;
        case 0x2e6418u: goto label_2e6418;
        case 0x2e641cu: goto label_2e641c;
        case 0x2e6420u: goto label_2e6420;
        case 0x2e6424u: goto label_2e6424;
        case 0x2e6428u: goto label_2e6428;
        case 0x2e642cu: goto label_2e642c;
        case 0x2e6430u: goto label_2e6430;
        case 0x2e6434u: goto label_2e6434;
        case 0x2e6438u: goto label_2e6438;
        case 0x2e643cu: goto label_2e643c;
        case 0x2e6440u: goto label_2e6440;
        case 0x2e6444u: goto label_2e6444;
        case 0x2e6448u: goto label_2e6448;
        case 0x2e644cu: goto label_2e644c;
        case 0x2e6450u: goto label_2e6450;
        case 0x2e6454u: goto label_2e6454;
        case 0x2e6458u: goto label_2e6458;
        case 0x2e645cu: goto label_2e645c;
        case 0x2e6460u: goto label_2e6460;
        case 0x2e6464u: goto label_2e6464;
        case 0x2e6468u: goto label_2e6468;
        case 0x2e646cu: goto label_2e646c;
        case 0x2e6470u: goto label_2e6470;
        case 0x2e6474u: goto label_2e6474;
        case 0x2e6478u: goto label_2e6478;
        case 0x2e647cu: goto label_2e647c;
        case 0x2e6480u: goto label_2e6480;
        case 0x2e6484u: goto label_2e6484;
        case 0x2e6488u: goto label_2e6488;
        case 0x2e648cu: goto label_2e648c;
        case 0x2e6490u: goto label_2e6490;
        case 0x2e6494u: goto label_2e6494;
        case 0x2e6498u: goto label_2e6498;
        case 0x2e649cu: goto label_2e649c;
        case 0x2e64a0u: goto label_2e64a0;
        case 0x2e64a4u: goto label_2e64a4;
        case 0x2e64a8u: goto label_2e64a8;
        case 0x2e64acu: goto label_2e64ac;
        default: break;
    }

    ctx->pc = 0x2e63c0u;

label_2e63c0:
    // 0x2e63c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e63c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e63c4:
    // 0x2e63c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e63c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2e63c8:
    // 0x2e63c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e63c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e63cc:
    // 0x2e63cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e63ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e63d0:
    // 0x2e63d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e63d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e63d4:
    // 0x2e63d4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2e63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_2e63d8:
    // 0x2e63d8: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x2e63d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2e63dc:
    // 0x2e63dc: 0x8e0502b4  lw          $a1, 0x2B4($s0)
    ctx->pc = 0x2e63dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_2e63e0:
    // 0x2e63e0: 0xc0c1b1e  jal         func_306C78
label_2e63e4:
    if (ctx->pc == 0x2E63E4u) {
        ctx->pc = 0x2E63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63E0u;
        // 0x2e63e4: 0x24841dc8  addiu       $a0, $a0, 0x1DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63E8u;
        goto label_2e63e8;
    }
    ctx->pc = 0x2E63E0u;
    SET_GPR_U32(ctx, 31, 0x2E63E8u);
    ctx->pc = 0x2E63E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E63E0u;
    // 0x2e63e4: 0x24841dc8  addiu       $a0, $a0, 0x1DC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306C78u, 0x2E63E0u, 0x2E63E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63E8u;
label_2e63e8:
    // 0x2e63e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2e63ec:
    if (ctx->pc == 0x2E63ECu) {
        ctx->pc = 0x2E63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63E8u;
        // 0x2e63ec: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63F0u;
        goto label_2e63f0;
    }
    ctx->pc = 0x2E63E8u;
    {
        const bool branch_taken_0x2e63e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63E8u;
        // 0x2e63ec: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e63e8) {
            ctx->pc = 0x2E640Cu;
            goto label_2e640c;
        }
    }
    ctx->pc = 0x2E63F0u;
label_2e63f0:
    // 0x2e63f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e63f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e63f4:
    // 0x2e63f4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e63f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2e63f8:
    // 0x2e63f8: 0x8c8602b4  lw          $a2, 0x2B4($a0)
    ctx->pc = 0x2e63f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 692)));
label_2e63fc:
    // 0x2e63fc: 0xc0b67da  jal         func_2D9F68
label_2e6400:
    if (ctx->pc == 0x2E6400u) {
        ctx->pc = 0x2E6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63FCu;
        // 0x2e6400: 0x24a5e3b0  addiu       $a1, $a1, -0x1C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6404u;
        goto label_2e6404;
    }
    ctx->pc = 0x2E63FCu;
    SET_GPR_U32(ctx, 31, 0x2E6404u);
    ctx->pc = 0x2E6400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E63FCu;
    // 0x2e6400: 0x24a5e3b0  addiu       $a1, $a1, -0x1C50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2E63FCu, 0x2E6404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6404u;
label_2e6404:
    // 0x2e6404: 0x10000026  b           . + 4 + (0x26 << 2)
label_2e6408:
    if (ctx->pc == 0x2E6408u) {
        ctx->pc = 0x2E6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6404u;
        // 0x2e6408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E640Cu;
        goto label_2e640c;
    }
    ctx->pc = 0x2E6404u;
    {
        const bool branch_taken_0x2e6404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6404u;
        // 0x2e6408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6404) {
            ctx->pc = 0x2E64A0u;
            goto label_2e64a0;
        }
    }
    ctx->pc = 0x2E640Cu;
label_2e640c:
    // 0x2e640c: 0xc0c3ea6  jal         func_30FA98
label_2e6410:
    if (ctx->pc == 0x2E6410u) {
        ctx->pc = 0x2E6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E640Cu;
        // 0x2e6410: 0x24040500  addiu       $a0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6414u;
        goto label_2e6414;
    }
    ctx->pc = 0x2E640Cu;
    SET_GPR_U32(ctx, 31, 0x2E6414u);
    ctx->pc = 0x2E6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E640Cu;
    // 0x2e6410: 0x24040500  addiu       $a0, $zero, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x2E640Cu, 0x2E6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6414u;
label_2e6414:
    // 0x2e6414: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e6414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6418:
    // 0x2e6418: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_2e641c:
    if (ctx->pc == 0x2E641Cu) {
        ctx->pc = 0x2E641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6418u;
        // 0x2e641c: 0xae0502b0  sw          $a1, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6420u;
        goto label_2e6420;
    }
    ctx->pc = 0x2E6418u;
    {
        const bool branch_taken_0x2e6418 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6418u;
        // 0x2e641c: 0xae0502b0  sw          $a1, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6418) {
            ctx->pc = 0x2E6438u;
            goto label_2e6438;
        }
    }
    ctx->pc = 0x2E6420u;
label_2e6420:
    // 0x2e6420: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e6420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2e6424:
    // 0x2e6424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6428:
    // 0x2e6428: 0xc0b67da  jal         func_2D9F68
label_2e642c:
    if (ctx->pc == 0x2E642Cu) {
        ctx->pc = 0x2E642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6428u;
        // 0x2e642c: 0x24a5e3d8  addiu       $a1, $a1, -0x1C28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6430u;
        goto label_2e6430;
    }
    ctx->pc = 0x2E6428u;
    SET_GPR_U32(ctx, 31, 0x2E6430u);
    ctx->pc = 0x2E642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6428u;
    // 0x2e642c: 0x24a5e3d8  addiu       $a1, $a1, -0x1C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2E6428u, 0x2E6430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6430u;
label_2e6430:
    // 0x2e6430: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2e6434:
    if (ctx->pc == 0x2E6434u) {
        ctx->pc = 0x2E6434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6430u;
        // 0x2e6434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6438u;
        goto label_2e6438;
    }
    ctx->pc = 0x2E6430u;
    {
        const bool branch_taken_0x2e6430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6430u;
        // 0x2e6434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6430) {
            ctx->pc = 0x2E64A0u;
            goto label_2e64a0;
        }
    }
    ctx->pc = 0x2E6438u;
label_2e6438:
    // 0x2e6438: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x2e6438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_2e643c:
    // 0x2e643c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2e643cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2e6440:
    // 0x2e6440: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2e6440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2e6444:
    // 0x2e6444: 0x40f809  jalr        $v0
label_2e6448:
    if (ctx->pc == 0x2E6448u) {
        ctx->pc = 0x2E6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6444u;
        // 0x2e6448: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E644Cu;
        goto label_2e644c;
    }
    ctx->pc = 0x2E6444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E644Cu);
        ctx->pc = 0x2E6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6444u;
        // 0x2e6448: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6444u, 0x2E644Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E644Cu;
label_2e644c:
    // 0x2e644c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2e6450:
    if (ctx->pc == 0x2E6450u) {
        ctx->pc = 0x2E6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E644Cu;
        // 0x2e6450: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6454u;
        goto label_2e6454;
    }
    ctx->pc = 0x2E644Cu;
    {
        const bool branch_taken_0x2e644c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E644Cu;
        // 0x2e6450: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e644c) {
            ctx->pc = 0x2E6464u;
            goto label_2e6464;
        }
    }
    ctx->pc = 0x2E6454u;
label_2e6454:
    // 0x2e6454: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e6454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2e6458:
    // 0x2e6458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e645c:
    // 0x2e645c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e6460:
    if (ctx->pc == 0x2E6460u) {
        ctx->pc = 0x2E6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E645Cu;
        // 0x2e6460: 0x24a5e3f8  addiu       $a1, $a1, -0x1C08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6464u;
        goto label_2e6464;
    }
    ctx->pc = 0x2E645Cu;
    {
        const bool branch_taken_0x2e645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E645Cu;
        // 0x2e6460: 0x24a5e3f8  addiu       $a1, $a1, -0x1C08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e645c) {
            ctx->pc = 0x2E648Cu;
            goto label_2e648c;
        }
    }
    ctx->pc = 0x2E6464u;
label_2e6464:
    // 0x2e6464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e6464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6468:
    // 0x2e6468: 0x8e0402b0  lw          $a0, 0x2B0($s0)
    ctx->pc = 0x2e6468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_2e646c:
    // 0x2e646c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e646cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6470:
    // 0x2e6470: 0xc0525ce  jal         func_149738
label_2e6474:
    if (ctx->pc == 0x2E6474u) {
        ctx->pc = 0x2E6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6470u;
        // 0x2e6474: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6478u;
        goto label_2e6478;
    }
    ctx->pc = 0x2E6470u;
    SET_GPR_U32(ctx, 31, 0x2E6478u);
    ctx->pc = 0x2E6474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6470u;
    // 0x2e6474: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x2E6470u, 0x2E6478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6478u;
label_2e6478:
    // 0x2e6478: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2e647c:
    if (ctx->pc == 0x2E647Cu) {
        ctx->pc = 0x2E647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6478u;
        // 0x2e647c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6480u;
        goto label_2e6480;
    }
    ctx->pc = 0x2E6478u;
    {
        const bool branch_taken_0x2e6478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6478u;
        // 0x2e647c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6478) {
            ctx->pc = 0x2E64A0u;
            goto label_2e64a0;
        }
    }
    ctx->pc = 0x2E6480u;
label_2e6480:
    // 0x2e6480: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e6480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2e6484:
    // 0x2e6484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6488:
    // 0x2e6488: 0x24a5e418  addiu       $a1, $a1, -0x1BE8
    ctx->pc = 0x2e6488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960152));
label_2e648c:
    // 0x2e648c: 0xc0b67da  jal         func_2D9F68
label_2e6490:
    if (ctx->pc == 0x2E6490u) {
        ctx->pc = 0x2E6494u;
        goto label_2e6494;
    }
    ctx->pc = 0x2E648Cu;
    SET_GPR_U32(ctx, 31, 0x2E6494u);
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2E648Cu, 0x2E6494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6494u;
label_2e6494:
    // 0x2e6494: 0xc0c49c2  jal         func_312708
label_2e6498:
    if (ctx->pc == 0x2E6498u) {
        ctx->pc = 0x2E6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6494u;
        // 0x2e6498: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E649Cu;
        goto label_2e649c;
    }
    ctx->pc = 0x2E6494u;
    SET_GPR_U32(ctx, 31, 0x2E649Cu);
    ctx->pc = 0x2E6498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6494u;
    // 0x2e6498: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x2E6494u, 0x2E649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E649Cu;
label_2e649c:
    // 0x2e649c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e649cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e64a0:
    // 0x2e64a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e64a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e64a4:
    // 0x2e64a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e64a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e64a8:
    // 0x2e64a8: 0x3e00008  jr          $ra
label_2e64ac:
    if (ctx->pc == 0x2E64ACu) {
        ctx->pc = 0x2E64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64A8u;
        // 0x2e64ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E64B0u;
        goto label_fallthrough_0x2e64a8;
    }
    ctx->pc = 0x2E64A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64A8u;
        // 0x2e64ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E64A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e64a8:
    ctx->pc = 0x2E64B0u;
}
