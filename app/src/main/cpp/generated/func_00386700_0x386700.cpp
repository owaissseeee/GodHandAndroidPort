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

// Function: func_00386700
// Address: 0x386700 - 0x386d48
void func_00386700_0x386700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00386700_0x386700");
#endif

    switch (ctx->pc) {
        case 0x386754u: goto label_386754;
        case 0x38678cu: goto label_38678c;
        case 0x3867b0u: goto label_3867b0;
        case 0x3867ccu: goto label_3867cc;
        case 0x3867d8u: goto label_3867d8;
        case 0x3867f4u: goto label_3867f4;
        case 0x386820u: goto label_386820;
        case 0x386860u: goto label_386860;
        case 0x38689cu: goto label_38689c;
        case 0x386900u: goto label_386900;
        case 0x386938u: goto label_386938;
        case 0x386974u: goto label_386974;
        case 0x3869d4u: goto label_3869d4;
        case 0x386a2cu: goto label_386a2c;
        case 0x386a40u: goto label_386a40;
        case 0x386a6cu: goto label_386a6c;
        case 0x386a8cu: goto label_386a8c;
        case 0x386aacu: goto label_386aac;
        case 0x386ac8u: goto label_386ac8;
        case 0x386b08u: goto label_386b08;
        case 0x386b50u: goto label_386b50;
        case 0x386b98u: goto label_386b98;
        case 0x386bfcu: goto label_386bfc;
        case 0x386c38u: goto label_386c38;
        case 0x386c44u: goto label_386c44;
        case 0x386c54u: goto label_386c54;
        case 0x386c88u: goto label_386c88;
        case 0x386ce8u: goto label_386ce8;
        default: break;
    }

    ctx->pc = 0x386700u;

    // 0x386700: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x386700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x386704: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x386704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x386708: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x386708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
    // 0x38670c: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x38670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
    // 0x386710: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x386710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386714: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x386714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
    // 0x386718: 0x2444b168  addiu       $a0, $v0, -0x4E98
    ctx->pc = 0x386718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947176));
    // 0x38671c: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x38671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
    // 0x386720: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x386720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386724: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x386724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
    // 0x386728: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x386728u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38672c: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x38672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
    // 0x386730: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x386730u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386734: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x386734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
    // 0x386738: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x386738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
    // 0x38673c: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x38673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x386740: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x386740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BB174u));
    // 0x386744: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x386744u;
    {
        const bool branch_taken_0x386744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386744u;
        // 0x386748: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386744) {
            ctx->pc = 0x38675Cu;
            goto label_38675c;
        }
    }
    ctx->pc = 0x38674Cu;
    // 0x38674c: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x38674Cu;
    SET_GPR_U32(ctx, 31, 0x386754u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x38674Cu, 0x386754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386754u;
label_386754:
    // 0x386754: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x386754u;
    {
        const bool branch_taken_0x386754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386754u;
        // 0x386758: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386754) {
            ctx->pc = 0x38676Cu;
            goto label_38676c;
        }
    }
    ctx->pc = 0x38675Cu;
label_38675c:
    // 0x38675c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x38675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x386760: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x386760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x386764: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x386764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386768: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x386768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_38676c:
    // 0x38676c: 0x26e4b168  addiu       $a0, $s7, -0x4E98
    ctx->pc = 0x38676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947176));
    // 0x386770: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x386770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x386774: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x386774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x386778: 0x2451d020  addiu       $s1, $v0, -0x2FE0
    ctx->pc = 0x386778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955040));
    // 0x38677c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38677Cu;
    {
        const bool branch_taken_0x38677c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38677Cu;
        // 0x386780: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38677c) {
            ctx->pc = 0x386794u;
            goto label_386794;
        }
    }
    ctx->pc = 0x386784u;
    // 0x386784: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x386784u;
    SET_GPR_U32(ctx, 31, 0x38678Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x386784u, 0x38678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38678Cu;
label_38678c:
    // 0x38678c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38678Cu;
    {
        const bool branch_taken_0x38678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38678Cu;
        // 0x386790: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38678c) {
            ctx->pc = 0x3867A4u;
            goto label_3867a4;
        }
    }
    ctx->pc = 0x386794u;
label_386794:
    // 0x386794: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x386794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x386798: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x386798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x38679c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3867a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3867a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3867a4:
    // 0x3867a4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3867a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3867a8: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3867A8u;
    SET_GPR_U32(ctx, 31, 0x3867B0u);
    ctx->pc = 0x3867ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3867A8u;
    // 0x3867ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3867A8u, 0x3867B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3867B0u;
label_3867b0:
    // 0x3867b0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3867b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3867b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3867b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3867b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3867b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3867bc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3867bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3867c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3867c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3867c4: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x3867C4u;
    SET_GPR_U32(ctx, 31, 0x3867CCu);
    ctx->pc = 0x3867C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3867C4u;
    // 0x3867c8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x3867C4u, 0x3867CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3867CCu;
label_3867cc:
    // 0x3867cc: 0xa2600020  sb          $zero, 0x20($s3)
    ctx->pc = 0x3867ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x3867d0: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3867D0u;
    SET_GPR_U32(ctx, 31, 0x3867D8u);
    ctx->pc = 0x3867D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3867D0u;
    // 0x3867d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3867D0u, 0x3867D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3867D8u;
label_3867d8:
    // 0x3867d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3867d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3867dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3867dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3867e0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3867e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3867e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3867e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3867e8: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x3867e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3867ec: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x3867ECu;
    SET_GPR_U32(ctx, 31, 0x3867F4u);
    ctx->pc = 0x3867F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3867ECu;
    // 0x3867f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x3867ECu, 0x3867F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3867F4u;
label_3867f4:
    // 0x3867f4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3867f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3867f8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3867f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3867fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3867FCu;
    {
        const bool branch_taken_0x3867fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3867FCu;
        // 0x386800: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3867fc) {
            ctx->pc = 0x386810u;
            goto label_386810;
        }
    }
    ctx->pc = 0x386804u;
    // 0x386804: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x386804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x386808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x386808u;
    {
        const bool branch_taken_0x386808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386808u;
        // 0x38680c: 0x2444d008  addiu       $a0, $v0, -0x2FF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386808) {
            ctx->pc = 0x386818u;
            goto label_386818;
        }
    }
    ctx->pc = 0x386810u;
label_386810:
    // 0x386810: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x386810u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x386814: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x386814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_386818:
    // 0x386818: 0xc0ed4bc  jal         func_3B52F0
    ctx->pc = 0x386818u;
    SET_GPR_U32(ctx, 31, 0x386820u);
    ctx->pc = 0x3B52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B52F0u, 0x386818u, 0x386820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386820u;
label_386820:
    // 0x386820: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x386820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386824: 0x6810104  bgez        $s4, . + 4 + (0x104 << 2)
    ctx->pc = 0x386824u;
    {
        const bool branch_taken_0x386824 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x386828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386824u;
        // 0x386828: 0x27b50020  addiu       $s5, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386824) {
            ctx->pc = 0x386C38u;
            goto label_386c38;
        }
    }
    ctx->pc = 0x38682Cu;
    // 0x38682c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x386830: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x386830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386834: 0x2444d028  addiu       $a0, $v0, -0x2FD8
    ctx->pc = 0x386834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955048));
    // 0x386838: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x386838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x38683c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38683Cu;
    {
        const bool branch_taken_0x38683c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38683Cu;
        // 0x386840: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38683c) {
            ctx->pc = 0x386850u;
            goto label_386850;
        }
    }
    ctx->pc = 0x386844u;
    // 0x386844: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x386844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x386848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x386848u;
    {
        const bool branch_taken_0x386848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386848u;
        // 0x38684c: 0x2445d008  addiu       $a1, $v0, -0x2FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386848) {
            ctx->pc = 0x386858u;
            goto label_386858;
        }
    }
    ctx->pc = 0x386850u;
label_386850:
    // 0x386850: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x386850u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x386854: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x386854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_386858:
    // 0x386858: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x386858u;
    SET_GPR_U32(ctx, 31, 0x386860u);
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x386858u, 0x386860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386860u;
label_386860:
    // 0x386860: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x386860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x386864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386868: 0xa2620020  sb          $v0, 0x20($s3)
    ctx->pc = 0x386868u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x38686c: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x38686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x386870: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x386870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x386874: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386878: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x386878u;
    {
        const bool branch_taken_0x386878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386878u;
        // 0x38687c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386878) {
            ctx->pc = 0x3868C8u;
            goto label_3868c8;
        }
    }
    ctx->pc = 0x386880u;
    // 0x386880: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x386880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x386884: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x386884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x386888: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x386888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x38688c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38688Cu;
    {
        const bool branch_taken_0x38688c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38688Cu;
        // 0x386890: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38688c) {
            ctx->pc = 0x3868A4u;
            goto label_3868a4;
        }
    }
    ctx->pc = 0x386894u;
    // 0x386894: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x386894u;
    SET_GPR_U32(ctx, 31, 0x38689Cu);
    ctx->pc = 0x386898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386894u;
    // 0x386898: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x386894u, 0x38689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38689Cu;
label_38689c:
    // 0x38689c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38689Cu;
    {
        const bool branch_taken_0x38689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3868A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38689Cu;
        // 0x3868a0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38689c) {
            ctx->pc = 0x3868CCu;
            goto label_3868cc;
        }
    }
    ctx->pc = 0x3868A4u;
label_3868a4:
    // 0x3868a4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3868a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3868a8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3868a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3868ac: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x3868acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x3868b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3868b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3868b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3868b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3868b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3868b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3868bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3868bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3868c0: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x3868c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x3868c4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3868c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3868c8:
    // 0x3868c8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3868c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3868cc:
    // 0x3868cc: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x3868ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3868d0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3868d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3868d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3868d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3868d8: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3868D8u;
    {
        const bool branch_taken_0x3868d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3868DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868D8u;
        // 0x3868dc: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868d8) {
            ctx->pc = 0x386A00u;
            goto label_386a00;
        }
    }
    ctx->pc = 0x3868E0u;
    // 0x3868e0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3868e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3868e4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3868e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3868e8: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3868e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3868ec: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3868ECu;
    {
        const bool branch_taken_0x3868ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3868F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868ECu;
        // 0x3868f0: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868ec) {
            ctx->pc = 0x3869CCu;
            goto label_3869cc;
        }
    }
    ctx->pc = 0x3868F4u;
    // 0x3868f4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3868F4u;
    {
        const bool branch_taken_0x3868f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3868F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868F4u;
        // 0x3868f8: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868f4) {
            ctx->pc = 0x3869E0u;
            goto label_3869e0;
        }
    }
    ctx->pc = 0x3868FCu;
    // 0x3868fc: 0x0  nop
    ctx->pc = 0x3868fcu;
    // NOP
label_386900:
    // 0x386900: 0x4410041  bgez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x386900u;
    {
        const bool branch_taken_0x386900 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x386904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386900u;
        // 0x386904: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386900) {
            ctx->pc = 0x386A08u;
            goto label_386a08;
        }
    }
    ctx->pc = 0x386908u;
    // 0x386908: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x386908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38690c: 0x2444d048  addiu       $a0, $v0, -0x2FB8
    ctx->pc = 0x38690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955080));
    // 0x386910: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x386910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x386914: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386914u;
    {
        const bool branch_taken_0x386914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386914u;
        // 0x386918: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386914) {
            ctx->pc = 0x386928u;
            goto label_386928;
        }
    }
    ctx->pc = 0x38691Cu;
    // 0x38691c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x386920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x386920u;
    {
        const bool branch_taken_0x386920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386920u;
        // 0x386924: 0x2445d008  addiu       $a1, $v0, -0x2FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386920) {
            ctx->pc = 0x386930u;
            goto label_386930;
        }
    }
    ctx->pc = 0x386928u;
label_386928:
    // 0x386928: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x386928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x38692c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x38692cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_386930:
    // 0x386930: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x386930u;
    SET_GPR_U32(ctx, 31, 0x386938u);
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x386930u, 0x386938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386938u;
label_386938:
    // 0x386938: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x386938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38693c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386940: 0xa2620020  sb          $v0, 0x20($s3)
    ctx->pc = 0x386940u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x386944: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x386944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x386948: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x386948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x38694c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386950: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x386950u;
    {
        const bool branch_taken_0x386950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386950u;
        // 0x386954: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386950) {
            ctx->pc = 0x3869A0u;
            goto label_3869a0;
        }
    }
    ctx->pc = 0x386958u;
    // 0x386958: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x386958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x38695c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x38695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x386960: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x386960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x386964: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386964u;
    {
        const bool branch_taken_0x386964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386964u;
        // 0x386968: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386964) {
            ctx->pc = 0x38697Cu;
            goto label_38697c;
        }
    }
    ctx->pc = 0x38696Cu;
    // 0x38696c: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x38696Cu;
    SET_GPR_U32(ctx, 31, 0x386974u);
    ctx->pc = 0x386970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38696Cu;
    // 0x386970: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x38696Cu, 0x386974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386974u;
label_386974:
    // 0x386974: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x386974u;
    {
        const bool branch_taken_0x386974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386974u;
        // 0x386978: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386974) {
            ctx->pc = 0x3869A4u;
            goto label_3869a4;
        }
    }
    ctx->pc = 0x38697Cu;
label_38697c:
    // 0x38697c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x38697cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x386980: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x386980u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x386984: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x386984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x386988: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38698c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38698cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386990: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x386990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386994: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x386994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x386998: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x386998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x38699c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x38699cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3869a0:
    // 0x3869a0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3869a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3869a4:
    // 0x3869a4: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x3869a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3869a8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3869a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3869ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3869acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3869b0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3869B0u;
    {
        const bool branch_taken_0x3869b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3869B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3869B0u;
        // 0x3869b4: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3869b0) {
            ctx->pc = 0x386A00u;
            goto label_386a00;
        }
    }
    ctx->pc = 0x3869B8u;
    // 0x3869b8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3869b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3869bc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3869bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3869c0: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3869c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3869c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3869C4u;
    {
        const bool branch_taken_0x3869c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3869C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3869C4u;
        // 0x3869c8: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3869c4) {
            ctx->pc = 0x3869DCu;
            goto label_3869dc;
        }
    }
    ctx->pc = 0x3869CCu;
label_3869cc:
    // 0x3869cc: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3869CCu;
    SET_GPR_U32(ctx, 31, 0x3869D4u);
    ctx->pc = 0x3869D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3869CCu;
    // 0x3869d0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3869CCu, 0x3869D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3869D4u;
label_3869d4:
    // 0x3869d4: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x3869D4u;
    {
        const bool branch_taken_0x3869d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3869D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3869D4u;
        // 0x3869d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3869d4) {
            ctx->pc = 0x386D18u;
            goto label_386d18;
        }
    }
    ctx->pc = 0x3869DCu;
label_3869dc:
    // 0x3869dc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3869dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_3869e0:
    // 0x3869e0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3869e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3869e4: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x3869e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x3869e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3869e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3869ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3869ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3869f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3869f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3869f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3869f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3869f8: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x3869f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x3869fc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3869fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_386a00:
    // 0x386a00: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x386A00u;
    {
        const bool branch_taken_0x386a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A00u;
        // 0x386a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a00) {
            ctx->pc = 0x386D18u;
            goto label_386d18;
        }
    }
    ctx->pc = 0x386A08u;
label_386a08:
    // 0x386a08: 0x16c00011  bnez        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x386A08u;
    {
        const bool branch_taken_0x386a08 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x386A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A08u;
        // 0x386a0c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a08) {
            ctx->pc = 0x386A50u;
            goto label_386a50;
        }
    }
    ctx->pc = 0x386A10u;
    // 0x386a10: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x386a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x386a14: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x386A14u;
    {
        const bool branch_taken_0x386a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A14u;
        // 0x386a18: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a14) {
            ctx->pc = 0x386C38u;
            goto label_386c38;
        }
    }
    ctx->pc = 0x386A1Cu;
    // 0x386a1c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x386a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x386a20: 0x24a5d068  addiu       $a1, $a1, -0x2F98
    ctx->pc = 0x386a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955112));
    // 0x386a24: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x386A24u;
    SET_GPR_U32(ctx, 31, 0x386A2Cu);
    ctx->pc = 0x386A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386A24u;
    // 0x386a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x386A24u, 0x386A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386A2Cu;
label_386a2c:
    // 0x386a2c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x386A2Cu;
    {
        const bool branch_taken_0x386a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A2Cu;
        // 0x386a30: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a2c) {
            ctx->pc = 0x386C38u;
            goto label_386c38;
        }
    }
    ctx->pc = 0x386A34u;
    // 0x386a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x386a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386a38: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x386A38u;
    SET_GPR_U32(ctx, 31, 0x386A40u);
    ctx->pc = 0x386A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386A38u;
    // 0x386a3c: 0x24a5d000  addiu       $a1, $a1, -0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x386A38u, 0x386A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386A40u;
label_386a40:
    // 0x386a40: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x386A40u;
    {
        const bool branch_taken_0x386a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A40u;
        // 0x386a44: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a40) {
            ctx->pc = 0x386C38u;
            goto label_386c38;
        }
    }
    ctx->pc = 0x386A48u;
    // 0x386a48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x386A48u;
    {
        const bool branch_taken_0x386a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A48u;
        // 0x386a4c: 0x26e4b168  addiu       $a0, $s7, -0x4E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a48) {
            ctx->pc = 0x386A78u;
            goto label_386a78;
        }
    }
    ctx->pc = 0x386A50u;
label_386a50:
    // 0x386a50: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x386a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x386a54: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x386A54u;
    {
        const bool branch_taken_0x386a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A54u;
        // 0x386a58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a54) {
            ctx->pc = 0x386C3Cu;
            goto label_386c3c;
        }
    }
    ctx->pc = 0x386A5Cu;
    // 0x386a5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x386a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386a60: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x386a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x386a64: 0xc0e19ae  jal         func_3866B8
    ctx->pc = 0x386A64u;
    SET_GPR_U32(ctx, 31, 0x386A6Cu);
    ctx->pc = 0x386A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386A64u;
    // 0x386a68: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3866B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3866B8u, 0x386A64u, 0x386A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386A6Cu;
label_386a6c:
    // 0x386a6c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x386A6Cu;
    {
        const bool branch_taken_0x386a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A6Cu;
        // 0x386a70: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a6c) {
            ctx->pc = 0x386C38u;
            goto label_386c38;
        }
    }
    ctx->pc = 0x386A74u;
    // 0x386a74: 0x26e4b168  addiu       $a0, $s7, -0x4E98
    ctx->pc = 0x386a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947176));
label_386a78:
    // 0x386a78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x386a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x386a7c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x386A7Cu;
    {
        const bool branch_taken_0x386a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386a7c) {
            ctx->pc = 0x386A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386A7Cu;
            // 0x386a80: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386A94u;
            goto label_386a94;
        }
    }
    ctx->pc = 0x386A84u;
    // 0x386a84: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x386A84u;
    SET_GPR_U32(ctx, 31, 0x386A8Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x386A84u, 0x386A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386A8Cu;
label_386a8c:
    // 0x386a8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x386A8Cu;
    {
        const bool branch_taken_0x386a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A8Cu;
        // 0x386a90: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a8c) {
            ctx->pc = 0x386AA0u;
            goto label_386aa0;
        }
    }
    ctx->pc = 0x386A94u;
label_386a94:
    // 0x386a94: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x386a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x386a98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x386a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386a9c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x386a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_386aa0:
    // 0x386aa0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x386aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x386aa4: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x386AA4u;
    SET_GPR_U32(ctx, 31, 0x386AACu);
    ctx->pc = 0x386AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386AA4u;
    // 0x386aa8: 0xafa30170  sw          $v1, 0x170($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x386AA4u, 0x386AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386AACu;
label_386aac:
    // 0x386aac: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x386aacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x386ab0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x386ab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386ab4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x386ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x386ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x386ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386abc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x386abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x386ac0: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x386AC0u;
    SET_GPR_U32(ctx, 31, 0x386AC8u);
    ctx->pc = 0x386AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386AC0u;
    // 0x386ac4: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x386AC0u, 0x386AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386AC8u;
label_386ac8:
    // 0x386ac8: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x386ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x386acc: 0x105d0025  beq         $v0, $sp, . + 4 + (0x25 << 2)
    ctx->pc = 0x386ACCu;
    {
        const bool branch_taken_0x386acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x386AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386ACCu;
        // 0x386ad0: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386acc) {
            ctx->pc = 0x386B64u;
            goto label_386b64;
        }
    }
    ctx->pc = 0x386AD4u;
    // 0x386ad4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x386ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386ad8: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x386ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x386adc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x386adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x386ae0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386ae4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x386AE4u;
    {
        const bool branch_taken_0x386ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386AE4u;
        // 0x386ae8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ae4) {
            ctx->pc = 0x386B34u;
            goto label_386b34;
        }
    }
    ctx->pc = 0x386AECu;
    // 0x386aec: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x386aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x386af0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x386af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x386af4: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x386af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x386af8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386AF8u;
    {
        const bool branch_taken_0x386af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386AF8u;
        // 0x386afc: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386af8) {
            ctx->pc = 0x386B10u;
            goto label_386b10;
        }
    }
    ctx->pc = 0x386B00u;
    // 0x386b00: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x386B00u;
    SET_GPR_U32(ctx, 31, 0x386B08u);
    ctx->pc = 0x386B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386B00u;
    // 0x386b04: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x386B00u, 0x386B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386B08u;
label_386b08:
    // 0x386b08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x386B08u;
    {
        const bool branch_taken_0x386b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B08u;
        // 0x386b0c: 0x8fa30170  lw          $v1, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b08) {
            ctx->pc = 0x386B38u;
            goto label_386b38;
        }
    }
    ctx->pc = 0x386B10u;
label_386b10:
    // 0x386b10: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x386b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x386b14: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x386b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x386b18: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x386b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x386b1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386b20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386b24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x386b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386b28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x386b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x386b2c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x386b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x386b30: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x386b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_386b34:
    // 0x386b34: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x386b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_386b38:
    // 0x386b38: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x386b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x386b3c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x386b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x386b40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x386B40u;
    {
        const bool branch_taken_0x386b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386b40) {
            ctx->pc = 0x386B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386B40u;
            // 0x386b44: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386B58u;
            goto label_386b58;
        }
    }
    ctx->pc = 0x386B48u;
    // 0x386b48: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x386B48u;
    SET_GPR_U32(ctx, 31, 0x386B50u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x386B48u, 0x386B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386B50u;
label_386b50:
    // 0x386b50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x386B50u;
    {
        const bool branch_taken_0x386b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B50u;
        // 0x386b54: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b50) {
            ctx->pc = 0x386B60u;
            goto label_386b60;
        }
    }
    ctx->pc = 0x386B58u;
label_386b58:
    // 0x386b58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x386b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386b5c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x386b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_386b60:
    // 0x386b60: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x386b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_386b64:
    // 0x386b64: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x386b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x386b68: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x386b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x386b6c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x386b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x386b70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386b74: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x386B74u;
    {
        const bool branch_taken_0x386b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B74u;
        // 0x386b78: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b74) {
            ctx->pc = 0x386BC4u;
            goto label_386bc4;
        }
    }
    ctx->pc = 0x386B7Cu;
    // 0x386b7c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x386b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x386b80: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x386b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x386b84: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x386b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x386b88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386B88u;
    {
        const bool branch_taken_0x386b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B88u;
        // 0x386b8c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b88) {
            ctx->pc = 0x386BA0u;
            goto label_386ba0;
        }
    }
    ctx->pc = 0x386B90u;
    // 0x386b90: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x386B90u;
    SET_GPR_U32(ctx, 31, 0x386B98u);
    ctx->pc = 0x386B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386B90u;
    // 0x386b94: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x386B90u, 0x386B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386B98u;
label_386b98:
    // 0x386b98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x386B98u;
    {
        const bool branch_taken_0x386b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B98u;
        // 0x386b9c: 0xa3b10004  sb          $s1, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b98) {
            ctx->pc = 0x386BC8u;
            goto label_386bc8;
        }
    }
    ctx->pc = 0x386BA0u;
label_386ba0:
    // 0x386ba0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x386ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x386ba4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x386ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x386ba8: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x386ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x386bac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386bb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386bb4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x386bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386bb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x386bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x386bbc: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x386bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x386bc0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x386bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_386bc4:
    // 0x386bc4: 0xa3b10004  sb          $s1, 0x4($sp)
    ctx->pc = 0x386bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 17));
label_386bc8:
    // 0x386bc8: 0x26710014  addiu       $s1, $s3, 0x14
    ctx->pc = 0x386bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x386bcc: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x386bccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x386bd0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x386bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x386bd4: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x386BD4u;
    {
        const bool branch_taken_0x386bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x386BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BD4u;
        // 0x386bd8: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386bd4) {
            ctx->pc = 0x386C28u;
            goto label_386c28;
        }
    }
    ctx->pc = 0x386BDCu;
    // 0x386bdc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x386BDCu;
    {
        const bool branch_taken_0x386bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BDCu;
        // 0x386be0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386bdc) {
            ctx->pc = 0x386C18u;
            goto label_386c18;
        }
    }
    ctx->pc = 0x386BE4u;
    // 0x386be4: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x386be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x386be8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x386be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x386bec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x386BECu;
    {
        const bool branch_taken_0x386bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386bec) {
            ctx->pc = 0x386BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386BECu;
            // 0x386bf0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386C04u;
            goto label_386c04;
        }
    }
    ctx->pc = 0x386BF4u;
    // 0x386bf4: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x386BF4u;
    SET_GPR_U32(ctx, 31, 0x386BFCu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x386BF4u, 0x386BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386BFCu;
label_386bfc:
    // 0x386bfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x386BFCu;
    {
        const bool branch_taken_0x386bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BFCu;
        // 0x386c00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386bfc) {
            ctx->pc = 0x386C0Cu;
            goto label_386c0c;
        }
    }
    ctx->pc = 0x386C04u;
label_386c04:
    // 0x386c04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x386c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386c08: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x386c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_386c0c:
    // 0x386c0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x386c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x386c10: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x386c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x386c14: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x386c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_386c18:
    // 0x386c18: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x386c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x386c1c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x386c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x386c20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x386C20u;
    {
        const bool branch_taken_0x386c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C20u;
        // 0x386c24: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c20) {
            ctx->pc = 0x386C38u;
            goto label_386c38;
        }
    }
    ctx->pc = 0x386C28u;
label_386c28:
    // 0x386c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x386c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386c2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x386c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386c30: 0xc0eee84  jal         func_3BBA10
    ctx->pc = 0x386C30u;
    SET_GPR_U32(ctx, 31, 0x386C38u);
    ctx->pc = 0x386C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C30u;
    // 0x386c34: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA10u, 0x386C30u, 0x386C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C38u;
label_386c38:
    // 0x386c38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x386c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_386c3c:
    // 0x386c3c: 0xc0ed548  jal         func_3B5520
    ctx->pc = 0x386C3Cu;
    SET_GPR_U32(ctx, 31, 0x386C44u);
    ctx->pc = 0x386C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C3Cu;
    // 0x386c40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5520u, 0x386C3Cu, 0x386C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C44u;
label_386c44:
    // 0x386c44: 0x1440ff2e  bnez        $v0, . + 4 + (-0xD2 << 2)
    ctx->pc = 0x386C44u;
    {
        const bool branch_taken_0x386c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x386c44) {
            ctx->pc = 0x386900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386900;
        }
    }
    ctx->pc = 0x386C4Cu;
    // 0x386c4c: 0xc0ed4ee  jal         func_3B53B8
    ctx->pc = 0x386C4Cu;
    SET_GPR_U32(ctx, 31, 0x386C54u);
    ctx->pc = 0x386C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C4Cu;
    // 0x386c50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B53B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B53B8u, 0x386C4Cu, 0x386C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C54u;
label_386c54:
    // 0x386c54: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x386c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386c58: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x386c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x386c5c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x386c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x386c60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386c64: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x386C64u;
    {
        const bool branch_taken_0x386c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C64u;
        // 0x386c68: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c64) {
            ctx->pc = 0x386CB4u;
            goto label_386cb4;
        }
    }
    ctx->pc = 0x386C6Cu;
    // 0x386c6c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x386c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x386c70: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x386c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x386c74: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x386c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x386c78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386C78u;
    {
        const bool branch_taken_0x386c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C78u;
        // 0x386c7c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c78) {
            ctx->pc = 0x386C90u;
            goto label_386c90;
        }
    }
    ctx->pc = 0x386C80u;
    // 0x386c80: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x386C80u;
    SET_GPR_U32(ctx, 31, 0x386C88u);
    ctx->pc = 0x386C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C80u;
    // 0x386c84: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x386C80u, 0x386C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C88u;
label_386c88:
    // 0x386c88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x386C88u;
    {
        const bool branch_taken_0x386c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C88u;
        // 0x386c8c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c88) {
            ctx->pc = 0x386CB8u;
            goto label_386cb8;
        }
    }
    ctx->pc = 0x386C90u;
label_386c90:
    // 0x386c90: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x386c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x386c94: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x386c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x386c98: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x386c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x386c9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386ca0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386ca4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x386ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386ca8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x386ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x386cac: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x386cacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x386cb0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x386cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_386cb4:
    // 0x386cb4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x386cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_386cb8:
    // 0x386cb8: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x386cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x386cbc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x386cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x386cc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386cc4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x386CC4u;
    {
        const bool branch_taken_0x386cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CC4u;
        // 0x386cc8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386cc4) {
            ctx->pc = 0x386D14u;
            goto label_386d14;
        }
    }
    ctx->pc = 0x386CCCu;
    // 0x386ccc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x386cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x386cd0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x386cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x386cd4: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x386cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x386cd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386CD8u;
    {
        const bool branch_taken_0x386cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CD8u;
        // 0x386cdc: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386cd8) {
            ctx->pc = 0x386CF0u;
            goto label_386cf0;
        }
    }
    ctx->pc = 0x386CE0u;
    // 0x386ce0: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x386CE0u;
    SET_GPR_U32(ctx, 31, 0x386CE8u);
    ctx->pc = 0x386CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386CE0u;
    // 0x386ce4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x386CE0u, 0x386CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386CE8u;
label_386ce8:
    // 0x386ce8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x386CE8u;
    {
        const bool branch_taken_0x386ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CE8u;
        // 0x386cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ce8) {
            ctx->pc = 0x386D18u;
            goto label_386d18;
        }
    }
    ctx->pc = 0x386CF0u;
label_386cf0:
    // 0x386cf0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x386cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x386cf4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x386cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x386cf8: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x386cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x386cfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386d00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386d04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x386d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386d08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x386d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x386d0c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x386d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x386d10: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x386d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_386d14:
    // 0x386d14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x386d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386d18:
    // 0x386d18: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x386d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x386d1c: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x386d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x386d20: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x386d20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x386d24: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x386d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x386d28: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x386d28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x386d2c: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x386d2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x386d30: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x386d30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x386d34: 0x7bb70190  lq          $s7, 0x190($sp)
    ctx->pc = 0x386d34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x386d38: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x386d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x386d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x386D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D3Cu;
        // 0x386d40: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386D44u;
    // 0x386d44: 0x0  nop
    ctx->pc = 0x386d44u;
    // NOP
    ctx->pc = 0x386d48u;
}
