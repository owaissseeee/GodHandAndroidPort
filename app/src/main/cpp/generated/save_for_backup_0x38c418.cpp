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

// Function: save_for_backup
// Address: 0x38c418 - 0x38c5b8
void save_for_backup_0x38c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("save_for_backup_0x38c418");
#endif

    switch (ctx->pc) {
        case 0x38c440u: goto label_38c440;
        case 0x38c478u: goto label_38c478;
        case 0x38c4a4u: goto label_38c4a4;
        case 0x38c4b8u: goto label_38c4b8;
        case 0x38c4d4u: goto label_38c4d4;
        case 0x38c4e8u: goto label_38c4e8;
        case 0x38c51cu: goto label_38c51c;
        case 0x38c550u: goto label_38c550;
        case 0x38c570u: goto label_38c570;
        default: break;
    }

    ctx->pc = 0x38c418u;

    // 0x38c418: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38c418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38c41c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38c420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c424: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38c424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38c428: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38c42c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38c430: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38c430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38c434: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38c434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38c438: 0xc0e308e  jal         func_38C238
    ctx->pc = 0x38C438u;
    SET_GPR_U32(ctx, 31, 0x38C440u);
    ctx->pc = 0x38C43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C438u;
    // 0x38c43c: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C238u, 0x38C438u, 0x38C440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C440u;
label_38c440:
    // 0x38c440: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x38c440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38c444: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38c444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c448: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x38c448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x38c44c: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x38c44cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x38c450: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x38c450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x38c454: 0xe51823  subu        $v1, $a3, $a1
    ctx->pc = 0x38c454u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x38c458: 0x719023  subu        $s2, $v1, $s1
    ctx->pc = 0x38c458u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x38c45c: 0x1043023  subu        $a2, $t0, $a0
    ctx->pc = 0x38c45cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x38c460: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x38c460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x38c464: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x38C464u;
    {
        const bool branch_taken_0x38c464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c464) {
            ctx->pc = 0x38C504u;
            goto label_38c504;
        }
    }
    ctx->pc = 0x38C46Cu;
    // 0x38c46c: 0x26440064  addiu       $a0, $s2, 0x64
    ctx->pc = 0x38c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x38c470: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x38C470u;
    SET_GPR_U32(ctx, 31, 0x38C478u);
    ctx->pc = 0x38C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C470u;
    // 0x38c474: 0x24150064  addiu       $s5, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x38C470u, 0x38C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C478u;
label_38c478:
    // 0x38c478: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x38c478u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c47c: 0x12800044  beqz        $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x38C47Cu;
    {
        const bool branch_taken_0x38c47c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C47Cu;
        // 0x38c480: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c47c) {
            ctx->pc = 0x38C590u;
            goto label_38c590;
        }
    }
    ctx->pc = 0x38C484u;
    // 0x38c484: 0x623000e  bgezl       $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x38C484u;
    {
        const bool branch_taken_0x38c484 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x38c484) {
            ctx->pc = 0x38C488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C484u;
            // 0x38c488: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C4C0u;
            goto label_38c4c0;
        }
    }
    ctx->pc = 0x38C48Cu;
    // 0x38c48c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x38c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x38c490: 0x26930064  addiu       $s3, $s4, 0x64
    ctx->pc = 0x38c490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x38c494: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38c494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c498: 0x113023  negu        $a2, $s1
    ctx->pc = 0x38c498u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x38c49c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x38C49Cu;
    SET_GPR_U32(ctx, 31, 0x38C4A4u);
    ctx->pc = 0x38C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C49Cu;
    // 0x38c4a0: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x38C49Cu, 0x38C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C4A4u;
label_38c4a4:
    // 0x38c4a4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x38c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x38c4a8: 0x2712023  subu        $a0, $s3, $s1
    ctx->pc = 0x38c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x38c4ac: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x38c4acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38c4b0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x38C4B0u;
    SET_GPR_U32(ctx, 31, 0x38C4B8u);
    ctx->pc = 0x38C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C4B0u;
    // 0x38c4b4: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x38C4B0u, 0x38C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C4B8u;
label_38c4b8:
    // 0x38c4b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38C4B8u;
    {
        const bool branch_taken_0x38c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4B8u;
        // 0x38c4bc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4b8) {
            ctx->pc = 0x38C4D8u;
            goto label_38c4d8;
        }
    }
    ctx->pc = 0x38C4C0u;
label_38c4c0:
    // 0x38c4c0: 0x26930064  addiu       $s3, $s4, 0x64
    ctx->pc = 0x38c4c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x38c4c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38c4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c4c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x38c4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c4cc: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x38C4CCu;
    SET_GPR_U32(ctx, 31, 0x38C4D4u);
    ctx->pc = 0x38C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C4CCu;
    // 0x38c4d0: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x38C4CCu, 0x38C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C4D4u;
label_38c4d4:
    // 0x38c4d4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x38c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_38c4d8:
    // 0x38c4d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38C4D8u;
    {
        const bool branch_taken_0x38c4d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4D8u;
        // 0x38c4dc: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4d8) {
            ctx->pc = 0x38C4ECu;
            goto label_38c4ec;
        }
    }
    ctx->pc = 0x38C4E0u;
    // 0x38c4e0: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x38C4E0u;
    SET_GPR_U32(ctx, 31, 0x38C4E8u);
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x38C4E0u, 0x38C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C4E8u;
label_38c4e8:
    // 0x38c4e8: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x38c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_38c4ec:
    // 0x38c4ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c4f0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x38c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x38c4f4: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x38c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x38c4f8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x38c4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38c4fc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x38C4FCu;
    {
        const bool branch_taken_0x38c4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4FCu;
        // 0x38c500: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4fc) {
            ctx->pc = 0x38C55Cu;
            goto label_38c55c;
        }
    }
    ctx->pc = 0x38C504u;
label_38c504:
    // 0x38c504: 0x621000c  bgez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x38C504u;
    {
        const bool branch_taken_0x38c504 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x38C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C504u;
        // 0x38c508: 0xd2a823  subu        $s5, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c504) {
            ctx->pc = 0x38C538u;
            goto label_38c538;
        }
    }
    ctx->pc = 0x38C50Cu;
    // 0x38c50c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x38c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x38c510: 0x1112821  addu        $a1, $t0, $s1
    ctx->pc = 0x38c510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x38c514: 0xc0e947d  jal         func_3A51F4
    ctx->pc = 0x38C514u;
    SET_GPR_U32(ctx, 31, 0x38C51Cu);
    ctx->pc = 0x38C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C514u;
    // 0x38c518: 0x113023  negu        $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x38C514u, 0x38C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C51Cu;
label_38c51c:
    // 0x38c51c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x38c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x38c520: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x38c520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x38c524: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x38c524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38c528: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x38c528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x38c52c: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x38c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x38c530: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38C530u;
    {
        const bool branch_taken_0x38c530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C530u;
        // 0x38c534: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c530) {
            ctx->pc = 0x38C548u;
            goto label_38c548;
        }
    }
    ctx->pc = 0x38C538u;
label_38c538:
    // 0x38c538: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x38C538u;
    {
        const bool branch_taken_0x38c538 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x38C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C538u;
        // 0x38c53c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c538) {
            ctx->pc = 0x38C55Cu;
            goto label_38c55c;
        }
    }
    ctx->pc = 0x38C540u;
    // 0x38c540: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x38c540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x38c544: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x38c544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_38c548:
    // 0x38c548: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x38C548u;
    SET_GPR_U32(ctx, 31, 0x38C550u);
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x38C548u, 0x38C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C550u;
label_38c550:
    // 0x38c550: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x38c550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38c554: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x38c554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x38c558: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x38c558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_38c55c:
    // 0x38c55c: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x38c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x38c560: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x38c560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x38c564: 0xe51823  subu        $v1, $a3, $a1
    ctx->pc = 0x38c564u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x38c568: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x38C568u;
    {
        const bool branch_taken_0x38c568 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C568u;
        // 0x38c56c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c568) {
            ctx->pc = 0x38C58Cu;
            goto label_38c58c;
        }
    }
    ctx->pc = 0x38C570u;
label_38c570:
    // 0x38c570: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x38c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x38c574: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x38c574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38c578: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x38c578u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x38c57c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x38c57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38c580: 0x0  nop
    ctx->pc = 0x38c580u;
    // NOP
    // 0x38c584: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38C584u;
    {
        const bool branch_taken_0x38c584 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c584) {
            ctx->pc = 0x38C570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c570;
        }
    }
    ctx->pc = 0x38C58Cu;
label_38c58c:
    // 0x38c58c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38c58cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c590:
    // 0x38c590: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38c590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38c594: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38c594u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38c598: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38c598u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c59c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38c59cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38c5a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38c5a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38c5a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38c5a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c5a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x38C5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5ACu;
        // 0x38c5b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C5B4u;
    // 0x38c5b4: 0x0  nop
    ctx->pc = 0x38c5b4u;
    // NOP
    ctx->pc = 0x38c5b8u;
}
