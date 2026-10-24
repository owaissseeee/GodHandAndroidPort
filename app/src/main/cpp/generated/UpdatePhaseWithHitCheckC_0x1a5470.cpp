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

// Function: UpdatePhaseWithHitCheckC
// Address: 0x1a5470 - 0x1a5540
void UpdatePhaseWithHitCheckC_0x1a5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePhaseWithHitCheckC_0x1a5470");
#endif

    switch (ctx->pc) {
        case 0x1a5470u: goto label_1a5470;
        case 0x1a5474u: goto label_1a5474;
        case 0x1a5478u: goto label_1a5478;
        case 0x1a547cu: goto label_1a547c;
        case 0x1a5480u: goto label_1a5480;
        case 0x1a5484u: goto label_1a5484;
        case 0x1a5488u: goto label_1a5488;
        case 0x1a548cu: goto label_1a548c;
        case 0x1a5490u: goto label_1a5490;
        case 0x1a5494u: goto label_1a5494;
        case 0x1a5498u: goto label_1a5498;
        case 0x1a549cu: goto label_1a549c;
        case 0x1a54a0u: goto label_1a54a0;
        case 0x1a54a4u: goto label_1a54a4;
        case 0x1a54a8u: goto label_1a54a8;
        case 0x1a54acu: goto label_1a54ac;
        case 0x1a54b0u: goto label_1a54b0;
        case 0x1a54b4u: goto label_1a54b4;
        case 0x1a54b8u: goto label_1a54b8;
        case 0x1a54bcu: goto label_1a54bc;
        case 0x1a54c0u: goto label_1a54c0;
        case 0x1a54c4u: goto label_1a54c4;
        case 0x1a54c8u: goto label_1a54c8;
        case 0x1a54ccu: goto label_1a54cc;
        case 0x1a54d0u: goto label_1a54d0;
        case 0x1a54d4u: goto label_1a54d4;
        case 0x1a54d8u: goto label_1a54d8;
        case 0x1a54dcu: goto label_1a54dc;
        case 0x1a54e0u: goto label_1a54e0;
        case 0x1a54e4u: goto label_1a54e4;
        case 0x1a54e8u: goto label_1a54e8;
        case 0x1a54ecu: goto label_1a54ec;
        case 0x1a54f0u: goto label_1a54f0;
        case 0x1a54f4u: goto label_1a54f4;
        case 0x1a54f8u: goto label_1a54f8;
        case 0x1a54fcu: goto label_1a54fc;
        case 0x1a5500u: goto label_1a5500;
        case 0x1a5504u: goto label_1a5504;
        case 0x1a5508u: goto label_1a5508;
        case 0x1a550cu: goto label_1a550c;
        case 0x1a5510u: goto label_1a5510;
        case 0x1a5514u: goto label_1a5514;
        case 0x1a5518u: goto label_1a5518;
        case 0x1a551cu: goto label_1a551c;
        case 0x1a5520u: goto label_1a5520;
        case 0x1a5524u: goto label_1a5524;
        case 0x1a5528u: goto label_1a5528;
        case 0x1a552cu: goto label_1a552c;
        case 0x1a5530u: goto label_1a5530;
        case 0x1a5534u: goto label_1a5534;
        case 0x1a5538u: goto label_1a5538;
        case 0x1a553cu: goto label_1a553c;
        default: break;
    }

    ctx->pc = 0x1a5470u;

label_1a5470:
    // 0x1a5470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a5474:
    // 0x1a5474: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a5474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a5478:
    // 0x1a5478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a547c:
    // 0x1a547c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a5480:
    // 0x1a5480: 0xc06ddac  jal         func_1B76B0
label_1a5484:
    if (ctx->pc == 0x1A5484u) {
        ctx->pc = 0x1A5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5480u;
        // 0x1a5484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5488u;
        goto label_1a5488;
    }
    ctx->pc = 0x1A5480u;
    SET_GPR_U32(ctx, 31, 0x1A5488u);
    ctx->pc = 0x1A5484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5480u;
    // 0x1a5484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1A5480u, 0x1A5488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5488u;
label_1a5488:
    // 0x1a5488: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1a548c:
    if (ctx->pc == 0x1A548Cu) {
        ctx->pc = 0x1A548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5488u;
        // 0x1a548c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5490u;
        goto label_1a5490;
    }
    ctx->pc = 0x1A5488u;
    {
        const bool branch_taken_0x1a5488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5488u;
        // 0x1a548c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5488) {
            ctx->pc = 0x1A5528u;
            goto label_1a5528;
        }
    }
    ctx->pc = 0x1A5490u;
label_1a5490:
    // 0x1a5490: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1a5490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1a5494:
    // 0x1a5494: 0x2446db98  addiu       $a2, $v0, -0x2468
    ctx->pc = 0x1a5494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957976));
label_1a5498:
    // 0x1a5498: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1a5498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a549c:
    // 0x1a549c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a549cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a54a0:
    // 0x1a54a0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a54a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a54a4:
    // 0x1a54a4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1a54a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a54a8:
    // 0x1a54a8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1a54ac:
    if (ctx->pc == 0x1A54ACu) {
        ctx->pc = 0x1A54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54A8u;
        // 0x1a54ac: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A54B0u;
        goto label_1a54b0;
    }
    ctx->pc = 0x1A54A8u;
    {
        const bool branch_taken_0x1a54a8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54A8u;
        // 0x1a54ac: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54a8) {
            ctx->pc = 0x1A54D4u;
            goto label_1a54d4;
        }
    }
    ctx->pc = 0x1A54B0u;
label_1a54b0:
    // 0x1a54b0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1a54b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a54b4:
    // 0x1a54b4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a54b8:
    // 0x1a54b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a54b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a54bc:
    // 0x1a54bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a54bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a54c0:
    // 0x1a54c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a54c4:
    // 0x1a54c4: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1a54c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1a54c8:
    // 0x1a54c8: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1a54c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1a54cc:
    // 0x1a54cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a54d0:
    if (ctx->pc == 0x1A54D0u) {
        ctx->pc = 0x1A54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54CCu;
        // 0x1a54d0: 0x2503db98  addiu       $v1, $t0, -0x2468 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A54D4u;
        goto label_1a54d4;
    }
    ctx->pc = 0x1A54CCu;
    {
        const bool branch_taken_0x1a54cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54CCu;
        // 0x1a54d0: 0x2503db98  addiu       $v1, $t0, -0x2468 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54cc) {
            ctx->pc = 0x1A54E0u;
            goto label_1a54e0;
        }
    }
    ctx->pc = 0x1A54D4u;
label_1a54d4:
    // 0x1a54d4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a54d8:
    // 0x1a54d8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a54d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a54dc:
    // 0x1a54dc: 0x2503db98  addiu       $v1, $t0, -0x2468
    ctx->pc = 0x1a54dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957976));
label_1a54e0:
    // 0x1a54e0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1a54e4:
    // 0x1a54e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a54e8:
    // 0x1a54e8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a54ec:
    if (ctx->pc == 0x1A54ECu) {
        ctx->pc = 0x1A54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54E8u;
        // 0x1a54ec: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A54F0u;
        goto label_1a54f0;
    }
    ctx->pc = 0x1A54E8u;
    {
        const bool branch_taken_0x1a54e8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54E8u;
        // 0x1a54ec: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54e8) {
            ctx->pc = 0x1A5504u;
            goto label_1a5504;
        }
    }
    ctx->pc = 0x1A54F0u;
label_1a54f0:
    // 0x1a54f0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1a54f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1a54f4:
    // 0x1a54f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a54f8:
    // 0x1a54f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a54f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a54fc:
    // 0x1a54fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a5500:
    if (ctx->pc == 0x1A5500u) {
        ctx->pc = 0x1A5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54FCu;
        // 0x1a5500: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5504u;
        goto label_1a5504;
    }
    ctx->pc = 0x1A54FCu;
    {
        const bool branch_taken_0x1a54fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54FCu;
        // 0x1a5500: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54fc) {
            ctx->pc = 0x1A5508u;
            goto label_1a5508;
        }
    }
    ctx->pc = 0x1A5504u;
label_1a5504:
    // 0x1a5504: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a5504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a5508:
    // 0x1a5508: 0xc0f809  jalr        $a2
label_1a550c:
    if (ctx->pc == 0x1A550Cu) {
        ctx->pc = 0x1A550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5508u;
        // 0x1a550c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5510u;
        goto label_1a5510;
    }
    ctx->pc = 0x1A5508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A5510u);
        ctx->pc = 0x1A550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5508u;
        // 0x1a550c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5508u, 0x1A5510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5510u;
label_1a5510:
    // 0x1a5510: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1a5510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1a5514:
    // 0x1a5514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5518:
    // 0x1a5518: 0xc04d23a  jal         func_1348E8
label_1a551c:
    if (ctx->pc == 0x1A551Cu) {
        ctx->pc = 0x1A551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5518u;
        // 0x1a551c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5520u;
        goto label_1a5520;
    }
    ctx->pc = 0x1A5518u;
    SET_GPR_U32(ctx, 31, 0x1A5520u);
    ctx->pc = 0x1A551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5518u;
    // 0x1a551c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x1A5518u, 0x1A5520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5520u;
label_1a5520:
    // 0x1a5520: 0xc06ddb6  jal         func_1B76D8
label_1a5524:
    if (ctx->pc == 0x1A5524u) {
        ctx->pc = 0x1A5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5520u;
        // 0x1a5524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5528u;
        goto label_1a5528;
    }
    ctx->pc = 0x1A5520u;
    SET_GPR_U32(ctx, 31, 0x1A5528u);
    ctx->pc = 0x1A5524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5520u;
    // 0x1a5524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1A5520u, 0x1A5528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5528u;
label_1a5528:
    // 0x1a5528: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a5528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a552c:
    // 0x1a552c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a552cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5530:
    // 0x1a5530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5534:
    // 0x1a5534: 0x3e00008  jr          $ra
label_1a5538:
    if (ctx->pc == 0x1A5538u) {
        ctx->pc = 0x1A5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5534u;
        // 0x1a5538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A553Cu;
        goto label_1a553c;
    }
    ctx->pc = 0x1A5534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5534u;
        // 0x1a5538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A553Cu;
label_1a553c:
    // 0x1a553c: 0x0  nop
    ctx->pc = 0x1a553cu;
    // NOP
    ctx->pc = 0x1a5540u;
}
