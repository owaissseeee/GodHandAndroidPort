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

// Function: func_003412D8
// Address: 0x3412d8 - 0x341458
void func_003412D8_0x3412d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003412D8_0x3412d8");
#endif

    switch (ctx->pc) {
        case 0x3412d8u: goto label_3412d8;
        case 0x3412dcu: goto label_3412dc;
        case 0x3412e0u: goto label_3412e0;
        case 0x3412e4u: goto label_3412e4;
        case 0x3412e8u: goto label_3412e8;
        case 0x3412ecu: goto label_3412ec;
        case 0x3412f0u: goto label_3412f0;
        case 0x3412f4u: goto label_3412f4;
        case 0x3412f8u: goto label_3412f8;
        case 0x3412fcu: goto label_3412fc;
        case 0x341300u: goto label_341300;
        case 0x341304u: goto label_341304;
        case 0x341308u: goto label_341308;
        case 0x34130cu: goto label_34130c;
        case 0x341310u: goto label_341310;
        case 0x341314u: goto label_341314;
        case 0x341318u: goto label_341318;
        case 0x34131cu: goto label_34131c;
        case 0x341320u: goto label_341320;
        case 0x341324u: goto label_341324;
        case 0x341328u: goto label_341328;
        case 0x34132cu: goto label_34132c;
        case 0x341330u: goto label_341330;
        case 0x341334u: goto label_341334;
        case 0x341338u: goto label_341338;
        case 0x34133cu: goto label_34133c;
        case 0x341340u: goto label_341340;
        case 0x341344u: goto label_341344;
        case 0x341348u: goto label_341348;
        case 0x34134cu: goto label_34134c;
        case 0x341350u: goto label_341350;
        case 0x341354u: goto label_341354;
        case 0x341358u: goto label_341358;
        case 0x34135cu: goto label_34135c;
        case 0x341360u: goto label_341360;
        case 0x341364u: goto label_341364;
        case 0x341368u: goto label_341368;
        case 0x34136cu: goto label_34136c;
        case 0x341370u: goto label_341370;
        case 0x341374u: goto label_341374;
        case 0x341378u: goto label_341378;
        case 0x34137cu: goto label_34137c;
        case 0x341380u: goto label_341380;
        case 0x341384u: goto label_341384;
        case 0x341388u: goto label_341388;
        case 0x34138cu: goto label_34138c;
        case 0x341390u: goto label_341390;
        case 0x341394u: goto label_341394;
        case 0x341398u: goto label_341398;
        case 0x34139cu: goto label_34139c;
        case 0x3413a0u: goto label_3413a0;
        case 0x3413a4u: goto label_3413a4;
        case 0x3413a8u: goto label_3413a8;
        case 0x3413acu: goto label_3413ac;
        case 0x3413b0u: goto label_3413b0;
        case 0x3413b4u: goto label_3413b4;
        case 0x3413b8u: goto label_3413b8;
        case 0x3413bcu: goto label_3413bc;
        case 0x3413c0u: goto label_3413c0;
        case 0x3413c4u: goto label_3413c4;
        case 0x3413c8u: goto label_3413c8;
        case 0x3413ccu: goto label_3413cc;
        case 0x3413d0u: goto label_3413d0;
        case 0x3413d4u: goto label_3413d4;
        case 0x3413d8u: goto label_3413d8;
        case 0x3413dcu: goto label_3413dc;
        case 0x3413e0u: goto label_3413e0;
        case 0x3413e4u: goto label_3413e4;
        case 0x3413e8u: goto label_3413e8;
        case 0x3413ecu: goto label_3413ec;
        case 0x3413f0u: goto label_3413f0;
        case 0x3413f4u: goto label_3413f4;
        case 0x3413f8u: goto label_3413f8;
        case 0x3413fcu: goto label_3413fc;
        case 0x341400u: goto label_341400;
        case 0x341404u: goto label_341404;
        case 0x341408u: goto label_341408;
        case 0x34140cu: goto label_34140c;
        case 0x341410u: goto label_341410;
        case 0x341414u: goto label_341414;
        case 0x341418u: goto label_341418;
        case 0x34141cu: goto label_34141c;
        case 0x341420u: goto label_341420;
        case 0x341424u: goto label_341424;
        case 0x341428u: goto label_341428;
        case 0x34142cu: goto label_34142c;
        case 0x341430u: goto label_341430;
        case 0x341434u: goto label_341434;
        case 0x341438u: goto label_341438;
        case 0x34143cu: goto label_34143c;
        case 0x341440u: goto label_341440;
        case 0x341444u: goto label_341444;
        case 0x341448u: goto label_341448;
        case 0x34144cu: goto label_34144c;
        case 0x341450u: goto label_341450;
        case 0x341454u: goto label_341454;
        default: break;
    }

    ctx->pc = 0x3412d8u;

label_3412d8:
    // 0x3412d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3412d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3412dc:
    // 0x3412dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3412dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3412e0:
    // 0x3412e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3412e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3412e4:
    // 0x3412e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3412e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3412e8:
    // 0x3412e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3412e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3412ec:
    // 0x3412ec: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3412ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3412f0:
    // 0x3412f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3412f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3412f4:
    // 0x3412f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3412f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3412f8:
    // 0x3412f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3412f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3412fc:
    // 0x3412fc: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_341300:
    if (ctx->pc == 0x341300u) {
        ctx->pc = 0x341300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412FCu;
        // 0x341300: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341304u;
        goto label_341304;
    }
    ctx->pc = 0x3412FCu;
    {
        const bool branch_taken_0x3412fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x341300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412FCu;
        // 0x341300: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3412fc) {
            ctx->pc = 0x341418u;
            goto label_341418;
        }
    }
    ctx->pc = 0x341304u;
label_341304:
    // 0x341304: 0xc0cfe9a  jal         func_33FA68
label_341308:
    if (ctx->pc == 0x341308u) {
        ctx->pc = 0x341308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341304u;
        // 0x341308: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34130Cu;
        goto label_34130c;
    }
    ctx->pc = 0x341304u;
    SET_GPR_U32(ctx, 31, 0x34130Cu);
    ctx->pc = 0x341308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341304u;
    // 0x341308: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA68u, 0x341304u, 0x34130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34130Cu;
label_34130c:
    // 0x34130c: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_341310:
    if (ctx->pc == 0x341310u) {
        ctx->pc = 0x341310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34130Cu;
        // 0x341310: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341314u;
        goto label_341314;
    }
    ctx->pc = 0x34130Cu;
    {
        const bool branch_taken_0x34130c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34130c) {
            ctx->pc = 0x341310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34130Cu;
            // 0x341310: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341418u;
            goto label_341418;
        }
    }
    ctx->pc = 0x341314u;
label_341314:
    // 0x341314: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x341314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_341318:
    // 0x341318: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x341318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_34131c:
    // 0x34131c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x34131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_341320:
    // 0x341320: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x341320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_341324:
    // 0x341324: 0x40f809  jalr        $v0
label_341328:
    if (ctx->pc == 0x341328u) {
        ctx->pc = 0x341328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341324u;
        // 0x341328: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34132Cu;
        goto label_34132c;
    }
    ctx->pc = 0x341324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34132Cu);
        ctx->pc = 0x341328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341324u;
        // 0x341328: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341324u, 0x34132Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34132Cu;
label_34132c:
    // 0x34132c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x34132cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_341330:
    // 0x341330: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x341330u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_341334:
    // 0x341334: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x341334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341338:
    // 0x341338: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x341338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_34133c:
    // 0x34133c: 0x894023  subu        $t0, $a0, $t1
    ctx->pc = 0x34133cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_341340:
    // 0x341340: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x341340u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_341344:
    // 0x341344: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x341344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_341348:
    // 0x341348: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x341348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_34134c:
    // 0x34134c: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x34134cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_341350:
    // 0x341350: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x341350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_341354:
    // 0x341354: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x341354u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_341358:
    // 0x341358: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x341358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_34135c:
    // 0x34135c: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x34135cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
label_341360:
    // 0x341360: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x341360u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_341364:
    // 0x341364: 0x14860018  bne         $a0, $a2, . + 4 + (0x18 << 2)
label_341368:
    if (ctx->pc == 0x341368u) {
        ctx->pc = 0x341368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341364u;
        // 0x341368: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34136Cu;
        goto label_34136c;
    }
    ctx->pc = 0x341364u;
    {
        const bool branch_taken_0x341364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x341368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341364u;
        // 0x341368: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341364) {
            ctx->pc = 0x3413C8u;
            goto label_3413c8;
        }
    }
    ctx->pc = 0x34136Cu;
label_34136c:
    // 0x34136c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x34136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_341370:
    // 0x341370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x341370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341374:
    // 0x341374: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x341374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_341378:
    // 0x341378: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x341378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_34137c:
    // 0x34137c: 0x1900001f  blez        $t0, . + 4 + (0x1F << 2)
label_341380:
    if (ctx->pc == 0x341380u) {
        ctx->pc = 0x341380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34137Cu;
        // 0x341380: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341384u;
        goto label_341384;
    }
    ctx->pc = 0x34137Cu;
    {
        const bool branch_taken_0x34137c = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x341380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34137Cu;
        // 0x341380: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34137c) {
            ctx->pc = 0x3413FCu;
            goto label_3413fc;
        }
    }
    ctx->pc = 0x341384u;
label_341384:
    // 0x341384: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x341384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_341388:
    // 0x341388: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x341388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_34138c:
    // 0x34138c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x34138cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_341390:
    // 0x341390: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x341390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_341394:
    // 0x341394: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x341394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_341398:
    // 0x341398: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x341398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_34139c:
    // 0x34139c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34139cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3413a0:
    // 0x3413a0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3413a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_3413a4:
    // 0x3413a4: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x3413a4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3413a8:
    // 0x3413a8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3413a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3413ac:
    // 0x3413ac: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3413acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_3413b0:
    // 0x3413b0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3413b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3413b4:
    // 0x3413b4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_3413b8:
    if (ctx->pc == 0x3413B8u) {
        ctx->pc = 0x3413B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413B4u;
        // 0x3413b8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3413BCu;
        goto label_3413bc;
    }
    ctx->pc = 0x3413B4u;
    {
        const bool branch_taken_0x3413b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3413B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413B4u;
        // 0x3413b8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3413b4) {
            ctx->pc = 0x341388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341388;
        }
    }
    ctx->pc = 0x3413BCu;
label_3413bc:
    // 0x3413bc: 0x1000000f  b           . + 4 + (0xF << 2)
label_3413c0:
    if (ctx->pc == 0x3413C0u) {
        ctx->pc = 0x3413C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413BCu;
        // 0x3413c0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3413C4u;
        goto label_3413c4;
    }
    ctx->pc = 0x3413BCu;
    {
        const bool branch_taken_0x3413bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3413C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413BCu;
        // 0x3413c0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3413bc) {
            ctx->pc = 0x3413FCu;
            goto label_3413fc;
        }
    }
    ctx->pc = 0x3413C4u;
label_3413c4:
    // 0x3413c4: 0x0  nop
    ctx->pc = 0x3413c4u;
    // NOP
label_3413c8:
    // 0x3413c8: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_3413cc:
    if (ctx->pc == 0x3413CCu) {
        ctx->pc = 0x3413CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413C8u;
        // 0x3413cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3413D0u;
        goto label_3413d0;
    }
    ctx->pc = 0x3413C8u;
    {
        const bool branch_taken_0x3413c8 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x3413CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413C8u;
        // 0x3413cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3413c8) {
            ctx->pc = 0x3413FCu;
            goto label_3413fc;
        }
    }
    ctx->pc = 0x3413D0u;
label_3413d0:
    // 0x3413d0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3413d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3413d4:
    // 0x3413d4: 0x0  nop
    ctx->pc = 0x3413d4u;
    // NOP
label_3413d8:
    // 0x3413d8: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x3413d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_3413dc:
    // 0x3413dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3413dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3413e0:
    // 0x3413e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3413e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3413e4:
    // 0x3413e4: 0xe8202a  slt         $a0, $a3, $t0
    ctx->pc = 0x3413e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3413e8:
    // 0x3413e8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3413e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3413ec:
    // 0x3413ec: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3413ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_3413f0:
    // 0x3413f0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_3413f4:
    if (ctx->pc == 0x3413F4u) {
        ctx->pc = 0x3413F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413F0u;
        // 0x3413f4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3413F8u;
        goto label_3413f8;
    }
    ctx->pc = 0x3413F0u;
    {
        const bool branch_taken_0x3413f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3413F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413F0u;
        // 0x3413f4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3413f0) {
            ctx->pc = 0x3413D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3413d8;
        }
    }
    ctx->pc = 0x3413F8u;
label_3413f8:
    // 0x3413f8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3413f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3413fc:
    // 0x3413fc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3413fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_341400:
    // 0x341400: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341404:
    // 0x341404: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x341404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_341408:
    // 0x341408: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x341408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_34140c:
    // 0x34140c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x34140cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_341410:
    // 0x341410: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x341410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_341414:
    // 0x341414: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x341414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_341418:
    // 0x341418: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x341418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34141c:
    // 0x34141c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_341420:
    if (ctx->pc == 0x341420u) {
        ctx->pc = 0x341420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34141Cu;
        // 0x341420: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341424u;
        goto label_341424;
    }
    ctx->pc = 0x34141Cu;
    {
        const bool branch_taken_0x34141c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34141c) {
            ctx->pc = 0x341420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34141Cu;
            // 0x341420: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341444u;
            goto label_341444;
        }
    }
    ctx->pc = 0x341424u;
label_341424:
    // 0x341424: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x341424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_341428:
    // 0x341428: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x341428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_34142c:
    // 0x34142c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x34142cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_341430:
    // 0x341430: 0x60f809  jalr        $v1
label_341434:
    if (ctx->pc == 0x341434u) {
        ctx->pc = 0x341434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341430u;
        // 0x341434: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341438u;
        goto label_341438;
    }
    ctx->pc = 0x341430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x341438u);
        ctx->pc = 0x341434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341430u;
        // 0x341434: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341430u, 0x341438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341438u;
label_341438:
    // 0x341438: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x341438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34143c:
    // 0x34143c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x34143cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_341440:
    // 0x341440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_341444:
    // 0x341444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x341444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_341448:
    // 0x341448: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x341448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34144c:
    // 0x34144c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34144cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_341450:
    // 0x341450: 0x3e00008  jr          $ra
label_341454:
    if (ctx->pc == 0x341454u) {
        ctx->pc = 0x341454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341450u;
        // 0x341454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341458u;
        goto label_fallthrough_0x341450;
    }
    ctx->pc = 0x341450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341450u;
        // 0x341454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x341450:
    ctx->pc = 0x341458u;
}
