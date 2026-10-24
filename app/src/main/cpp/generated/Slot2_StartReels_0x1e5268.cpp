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

// Function: Slot2_StartReels
// Address: 0x1e5268 - 0x1e5448
void Slot2_StartReels_0x1e5268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_StartReels_0x1e5268");
#endif

    switch (ctx->pc) {
        case 0x1e52e8u: goto label_1e52e8;
        case 0x1e5308u: goto label_1e5308;
        default: break;
    }

    ctx->pc = 0x1e5268u;

    // 0x1e5268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e5268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e526c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e526cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e5270: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e5270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e5274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e527c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e5280: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1e5280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e5284: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1E5284u;
    {
        const bool branch_taken_0x1e5284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5284u;
        // 0x1e5288: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5284) {
            ctx->pc = 0x1E5430u;
            goto label_1e5430;
        }
    }
    ctx->pc = 0x1E528Cu;
    // 0x1e528c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e528cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e5290: 0x2442b920  addiu       $v0, $v0, -0x46E0
    ctx->pc = 0x1e5290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949152));
    // 0x1e5294: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e5294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e5298: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e5298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e529c: 0x800008  jr          $a0
    ctx->pc = 0x1E529Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E52A4u: goto label_1e52a4;
            case 0x1E52C4u: goto label_1e52c4;
            case 0x1E5338u: goto label_1e5338;
            case 0x1E5390u: goto label_1e5390;
            case 0x1E53E8u: goto label_1e53e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E529Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E52A4u;
label_1e52a4:
    // 0x1e52a4: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x1e52a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x1e52a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e52a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e52ac: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1e52acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1e52b0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e52b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1e52b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e52b8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e52b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e52bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e52bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e52c0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1e52c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1e52c4:
    // 0x1e52c4: 0x9e020364  lwu         $v0, 0x364($s0)
    ctx->pc = 0x1e52c4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1e52c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e52c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e52cc: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x1E52CCu;
    {
        const bool branch_taken_0x1e52cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e52cc) {
            ctx->pc = 0x1E52D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E52CCu;
            // 0x1e52d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5434u;
            goto label_1e5434;
        }
    }
    ctx->pc = 0x1E52D4u;
    // 0x1e52d4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1e52d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e52d8: 0x26110058  addiu       $s1, $s0, 0x58
    ctx->pc = 0x1e52d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1e52dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e52dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e52e0: 0xc07a392  jal         func_1E8E48
    ctx->pc = 0x1E52E0u;
    SET_GPR_U32(ctx, 31, 0x1E52E8u);
    ctx->pc = 0x1E52E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E52E0u;
    // 0x1e52e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E48u, 0x1E52E0u, 0x1E52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E52E8u;
label_1e52e8:
    // 0x1e52e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e52e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e52ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e52ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e52f0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e52f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e52f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e52f8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e52f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e52fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e52fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5300: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E5300u;
    SET_GPR_U32(ctx, 31, 0x1E5308u);
    ctx->pc = 0x1E5304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5300u;
    // 0x1e5304: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E5300u, 0x1E5308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5308u;
label_1e5308:
    // 0x1e5308: 0x9e030118  lwu         $v1, 0x118($s0)
    ctx->pc = 0x1e5308u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1e530c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e530cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e5310: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5310u;
    {
        const bool branch_taken_0x1e5310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5310u;
        // 0x1e5314: 0xae0203ec  sw          $v0, 0x3EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5310) {
            ctx->pc = 0x1E5328u;
            goto label_1e5328;
        }
    }
    ctx->pc = 0x1E5318u;
    // 0x1e5318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e531c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e531cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e5320: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e5320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e5324: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e5324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e5328:
    // 0x1e5328: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e5328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e532c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e5330: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1E5330u;
    {
        const bool branch_taken_0x1e5330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5330u;
        // 0x1e5334: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5330) {
            ctx->pc = 0x1E53DCu;
            goto label_1e53dc;
        }
    }
    ctx->pc = 0x1E5338u;
label_1e5338:
    // 0x1e5338: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e5338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e533c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E533Cu;
    {
        const bool branch_taken_0x1e533c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E533Cu;
        // 0x1e5340: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e533c) {
            ctx->pc = 0x1E5350u;
            goto label_1e5350;
        }
    }
    ctx->pc = 0x1E5344u;
    // 0x1e5344: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e5344u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5348u;
    {
        const bool branch_taken_0x1e5348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5348u;
        // 0x1e534c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5348) {
            ctx->pc = 0x1E5354u;
            goto label_1e5354;
        }
    }
    ctx->pc = 0x1E5350u;
label_1e5350:
    // 0x1e5350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5354:
    // 0x1e5354: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e5354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e5358: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E5358u;
    {
        const bool branch_taken_0x1e5358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5358) {
            ctx->pc = 0x1E535Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5358u;
            // 0x1e535c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5434u;
            goto label_1e5434;
        }
    }
    ctx->pc = 0x1E5360u;
    // 0x1e5360: 0x9e020200  lwu         $v0, 0x200($s0)
    ctx->pc = 0x1e5360u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1e5364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5368: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5368u;
    {
        const bool branch_taken_0x1e5368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5368u;
        // 0x1e536c: 0x26030140  addiu       $v1, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5368) {
            ctx->pc = 0x1E5380u;
            goto label_1e5380;
        }
    }
    ctx->pc = 0x1E5370u;
    // 0x1e5370: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5374: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e5374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1e5378: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e5378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e537c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e537cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1e5380:
    // 0x1e5380: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e5380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e5384: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e5384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e5388: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E5388u;
    {
        const bool branch_taken_0x1e5388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5388u;
        // 0x1e538c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5388) {
            ctx->pc = 0x1E53DCu;
            goto label_1e53dc;
        }
    }
    ctx->pc = 0x1E5390u;
label_1e5390:
    // 0x1e5390: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e5394: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5394u;
    {
        const bool branch_taken_0x1e5394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5394u;
        // 0x1e5398: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5394) {
            ctx->pc = 0x1E53A8u;
            goto label_1e53a8;
        }
    }
    ctx->pc = 0x1E539Cu;
    // 0x1e539c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e539cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E53A0u;
    {
        const bool branch_taken_0x1e53a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53A0u;
        // 0x1e53a4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53a0) {
            ctx->pc = 0x1E53ACu;
            goto label_1e53ac;
        }
    }
    ctx->pc = 0x1E53A8u;
label_1e53a8:
    // 0x1e53a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e53ac:
    // 0x1e53ac: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e53acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e53b0: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E53B0u;
    {
        const bool branch_taken_0x1e53b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e53b0) {
            ctx->pc = 0x1E53B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E53B0u;
            // 0x1e53b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5434u;
            goto label_1e5434;
        }
    }
    ctx->pc = 0x1E53B8u;
    // 0x1e53b8: 0x9e0202e8  lwu         $v0, 0x2E8($s0)
    ctx->pc = 0x1e53b8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x1e53bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e53bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e53c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E53C0u;
    {
        const bool branch_taken_0x1e53c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53C0u;
        // 0x1e53c4: 0x26030228  addiu       $v1, $s0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53c0) {
            ctx->pc = 0x1E53D8u;
            goto label_1e53d8;
        }
    }
    ctx->pc = 0x1E53C8u;
    // 0x1e53c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e53cc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e53ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1e53d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e53d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e53d4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e53d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1e53d8:
    // 0x1e53d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e53dc:
    // 0x1e53dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e53e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E53E0u;
    {
        const bool branch_taken_0x1e53e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53E0u;
        // 0x1e53e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53e0) {
            ctx->pc = 0x1E5430u;
            goto label_1e5430;
        }
    }
    ctx->pc = 0x1E53E8u;
label_1e53e8:
    // 0x1e53e8: 0x9e020118  lwu         $v0, 0x118($s0)
    ctx->pc = 0x1e53e8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1e53ec: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e53ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e53f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e53f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e53f4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1E53F4u;
    {
        const bool branch_taken_0x1e53f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e53f4) {
            ctx->pc = 0x1E53F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E53F4u;
            // 0x1e53f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5434u;
            goto label_1e5434;
        }
    }
    ctx->pc = 0x1E53FCu;
    // 0x1e53fc: 0x9e020200  lwu         $v0, 0x200($s0)
    ctx->pc = 0x1e53fcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1e5400: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e5400u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e5404: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5408: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E5408u;
    {
        const bool branch_taken_0x1e5408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5408) {
            ctx->pc = 0x1E540Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5408u;
            // 0x1e540c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5434u;
            goto label_1e5434;
        }
    }
    ctx->pc = 0x1E5410u;
    // 0x1e5410: 0x9e0202e8  lwu         $v0, 0x2E8($s0)
    ctx->pc = 0x1e5410u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x1e5414: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e5414u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e5418: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e541c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E541Cu;
    {
        const bool branch_taken_0x1e541c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E541Cu;
        // 0x1e5420: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e541c) {
            ctx->pc = 0x1E5430u;
            goto label_1e5430;
        }
    }
    ctx->pc = 0x1E5424u;
    // 0x1e5424: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e5424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e5428: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e5428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e542c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e542cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e5430:
    // 0x1e5430: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e5430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5434:
    // 0x1e5434: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e5434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e543c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E543Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E543Cu;
        // 0x1e5440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E543Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5444u;
    // 0x1e5444: 0x0  nop
    ctx->pc = 0x1e5444u;
    // NOP
    ctx->pc = 0x1e5448u;
}
