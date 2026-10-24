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

// Function: func_00380280
// Address: 0x380280 - 0x380638
void func_00380280_0x380280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380280_0x380280");
#endif

    switch (ctx->pc) {
        case 0x3802c4u: goto label_3802c4;
        case 0x3802ecu: goto label_3802ec;
        case 0x380334u: goto label_380334;
        case 0x380368u: goto label_380368;
        case 0x3803e0u: goto label_3803e0;
        case 0x380408u: goto label_380408;
        case 0x380444u: goto label_380444;
        case 0x380464u: goto label_380464;
        case 0x3804a0u: goto label_3804a0;
        case 0x3804d8u: goto label_3804d8;
        case 0x380558u: goto label_380558;
        case 0x380594u: goto label_380594;
        case 0x3805d0u: goto label_3805d0;
        case 0x38060cu: goto label_38060c;
        default: break;
    }

    ctx->pc = 0x380280u;

    // 0x380280: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x380280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x380284: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x380284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x380288: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x380288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x38028c: 0x24e7c368  addiu       $a3, $a3, -0x3C98
    ctx->pc = 0x38028cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951784));
    // 0x380290: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x380290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380294: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x380294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x380298: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x380298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x38029c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x38029cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3802a0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3802a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3802a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3802a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3802a8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3802a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3802ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3802acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3802b0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3802b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3802b4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3802b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3802b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3802b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3802bc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3802BCu;
    SET_GPR_U32(ctx, 31, 0x3802C4u);
    ctx->pc = 0x3802C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3802BCu;
    // 0x3802c0: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3802BCu, 0x3802C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3802C4u;
label_3802c4:
    // 0x3802c4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3802c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3802c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3802c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3802cc: 0x2450c380  addiu       $s0, $v0, -0x3C80
    ctx->pc = 0x3802ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951808));
    // 0x3802d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3802d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3802d4: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3802d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3802d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3802d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3802dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3802DCu;
    {
        const bool branch_taken_0x3802dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3802dc) {
            ctx->pc = 0x3802E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3802DCu;
            // 0x3802e0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3802F4u;
            goto label_3802f4;
        }
    }
    ctx->pc = 0x3802E4u;
    // 0x3802e4: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3802E4u;
    SET_GPR_U32(ctx, 31, 0x3802ECu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3802E4u, 0x3802ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3802ECu;
label_3802ec:
    // 0x3802ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3802ECu;
    {
        const bool branch_taken_0x3802ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3802F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3802ECu;
        // 0x3802f0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3802ec) {
            ctx->pc = 0x3802FCu;
            goto label_3802fc;
        }
    }
    ctx->pc = 0x3802F4u;
label_3802f4:
    // 0x3802f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3802f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3802f8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3802f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3802fc:
    // 0x3802fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3802fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x380300: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x380300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x380304: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380304u;
    {
        const bool branch_taken_0x380304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380304u;
        // 0x380308: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380304) {
            ctx->pc = 0x380318u;
            goto label_380318;
        }
    }
    ctx->pc = 0x38030Cu;
    // 0x38030c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x380310: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x380310u;
    {
        const bool branch_taken_0x380310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380310u;
        // 0x380314: 0x2448c208  addiu       $t0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380310) {
            ctx->pc = 0x380320u;
            goto label_380320;
        }
    }
    ctx->pc = 0x380318u;
label_380318:
    // 0x380318: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x380318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x38031c: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x38031cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_380320:
    // 0x380320: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x380320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x380324: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x380324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x380328: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x380328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38032c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38032Cu;
    SET_GPR_U32(ctx, 31, 0x380334u);
    ctx->pc = 0x380330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38032Cu;
    // 0x380330: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38032Cu, 0x380334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380334u;
label_380334:
    // 0x380334: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x380334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380338: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x380338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x38033c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x38033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x380340: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x380340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x380344: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x380344u;
    {
        const bool branch_taken_0x380344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380344u;
        // 0x380348: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380344) {
            ctx->pc = 0x380394u;
            goto label_380394;
        }
    }
    ctx->pc = 0x38034Cu;
    // 0x38034c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x38034cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x380350: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x380350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x380354: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x380354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x380358: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x380358u;
    {
        const bool branch_taken_0x380358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380358u;
        // 0x38035c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380358) {
            ctx->pc = 0x380370u;
            goto label_380370;
        }
    }
    ctx->pc = 0x380360u;
    // 0x380360: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x380360u;
    SET_GPR_U32(ctx, 31, 0x380368u);
    ctx->pc = 0x380364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380360u;
    // 0x380364: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x380360u, 0x380368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380368u;
label_380368:
    // 0x380368: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x380368u;
    {
        const bool branch_taken_0x380368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380368u;
        // 0x38036c: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380368) {
            ctx->pc = 0x380398u;
            goto label_380398;
        }
    }
    ctx->pc = 0x380370u;
label_380370:
    // 0x380370: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x380370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x380374: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x380374u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x380378: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x380378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x38037c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x380380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x380380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x380384: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x380384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x380388: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x380388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38038c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x38038cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x380390: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x380390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_380394:
    // 0x380394: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x380394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_380398:
    // 0x380398: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x380398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x38039c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x38039cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3803a0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3803a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3803a4: 0x2493000a  addiu       $s3, $a0, 0xA
    ctx->pc = 0x3803a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x3803a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3803a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3803ac: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3803acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3803b0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3803b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3803b4: 0x53182b  sltu        $v1, $v0, $s3
    ctx->pc = 0x3803b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3803b8: 0x43980b  movn        $s3, $v0, $v1
    ctx->pc = 0x3803b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x3803bc: 0x233202b  sltu        $a0, $s1, $s3
    ctx->pc = 0x3803bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3803c0: 0x10800052  beqz        $a0, . + 4 + (0x52 << 2)
    ctx->pc = 0x3803C0u;
    {
        const bool branch_taken_0x3803c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3803C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3803C0u;
        // 0x3803c4: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3803c0) {
            ctx->pc = 0x38050Cu;
            goto label_38050c;
        }
    }
    ctx->pc = 0x3803C8u;
    // 0x3803c8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3803c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x3803cc: 0x3c170046  lui         $s7, 0x46
    ctx->pc = 0x3803ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)70 << 16));
    // 0x3803d0: 0x24564030  addiu       $s6, $v0, 0x4030
    ctx->pc = 0x3803d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x3803d4: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x3803d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
    // 0x3803d8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3803d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3803dc: 0x0  nop
    ctx->pc = 0x3803dcu;
    // NOP
label_3803e0:
    // 0x3803e0: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x3803e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3803e4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3803e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3803e8: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x3803e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3803ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3803ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3803f0: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3803f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3803f4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3803f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3803f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3803F8u;
    {
        const bool branch_taken_0x3803f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3803f8) {
            ctx->pc = 0x3803FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3803F8u;
            // 0x3803fc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380410u;
            goto label_380410;
        }
    }
    ctx->pc = 0x380400u;
    // 0x380400: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x380400u;
    SET_GPR_U32(ctx, 31, 0x380408u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x380400u, 0x380408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380408u;
label_380408:
    // 0x380408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x380408u;
    {
        const bool branch_taken_0x380408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380408u;
        // 0x38040c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380408) {
            ctx->pc = 0x380418u;
            goto label_380418;
        }
    }
    ctx->pc = 0x380410u;
label_380410:
    // 0x380410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x380410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x380414: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x380414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_380418:
    // 0x380418: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x380418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x38041c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x38041cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x380420: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x380420u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380424: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x380424u;
    {
        const bool branch_taken_0x380424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x380428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380424u;
        // 0x380428: 0xa3a20014  sb          $v0, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380424) {
            ctx->pc = 0x38044Cu;
            goto label_38044c;
        }
    }
    ctx->pc = 0x38042Cu;
    // 0x38042c: 0x148400  sll         $s0, $s4, 16
    ctx->pc = 0x38042cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x380430: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x380430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x380434: 0x102c03  sra         $a1, $s0, 16
    ctx->pc = 0x380434u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 16));
    // 0x380438: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x380438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x38043c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38043Cu;
    SET_GPR_U32(ctx, 31, 0x380444u);
    ctx->pc = 0x380440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38043Cu;
    // 0x380440: 0x26e7c390  addiu       $a3, $s7, -0x3C70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38043Cu, 0x380444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380444u;
label_380444:
    // 0x380444: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x380444u;
    {
        const bool branch_taken_0x380444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380444u;
        // 0x380448: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380444) {
            ctx->pc = 0x380468u;
            goto label_380468;
        }
    }
    ctx->pc = 0x38044Cu;
label_38044c:
    // 0x38044c: 0x148400  sll         $s0, $s4, 16
    ctx->pc = 0x38044cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x380450: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x380450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x380454: 0x102c03  sra         $a1, $s0, 16
    ctx->pc = 0x380454u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 16));
    // 0x380458: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x380458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x38045c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38045Cu;
    SET_GPR_U32(ctx, 31, 0x380464u);
    ctx->pc = 0x380460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38045Cu;
    // 0x380460: 0x26a7c398  addiu       $a3, $s5, -0x3C68 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38045Cu, 0x380464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380464u;
label_380464:
    // 0x380464: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x380464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_380468:
    // 0x380468: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x380468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38046c: 0x2447c1c8  addiu       $a3, $v0, -0x3E38
    ctx->pc = 0x38046cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951368));
    // 0x380470: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x380470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x380474: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380474u;
    {
        const bool branch_taken_0x380474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380474u;
        // 0x380478: 0x102c03  sra         $a1, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380474) {
            ctx->pc = 0x380488u;
            goto label_380488;
        }
    }
    ctx->pc = 0x38047Cu;
    // 0x38047c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38047cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x380480: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x380480u;
    {
        const bool branch_taken_0x380480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380480u;
        // 0x380484: 0x2448c208  addiu       $t0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380480) {
            ctx->pc = 0x380494u;
            goto label_380494;
        }
    }
    ctx->pc = 0x380488u;
label_380488:
    // 0x380488: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x380488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38048c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x38048cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x380490: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x380490u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_380494:
    // 0x380494: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x380494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x380498: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x380498u;
    SET_GPR_U32(ctx, 31, 0x3804A0u);
    ctx->pc = 0x38049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380498u;
    // 0x38049c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x380498u, 0x3804A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3804A0u;
label_3804a0:
    // 0x3804a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3804a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3804a4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x3804a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3804a8: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x3804a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x3804ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3804acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3804b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3804b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3804b4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3804B4u;
    {
        const bool branch_taken_0x3804b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3804B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3804B4u;
        // 0x3804b8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3804b4) {
            ctx->pc = 0x3804FCu;
            goto label_3804fc;
        }
    }
    ctx->pc = 0x3804BCu;
    // 0x3804bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3804bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3804c0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3804c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3804c4: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3804c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3804c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3804C8u;
    {
        const bool branch_taken_0x3804c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3804CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3804C8u;
        // 0x3804cc: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3804c8) {
            ctx->pc = 0x3804E0u;
            goto label_3804e0;
        }
    }
    ctx->pc = 0x3804D0u;
    // 0x3804d0: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3804D0u;
    SET_GPR_U32(ctx, 31, 0x3804D8u);
    ctx->pc = 0x3804D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3804D0u;
    // 0x3804d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3804D0u, 0x3804D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3804D8u;
label_3804d8:
    // 0x3804d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3804D8u;
    {
        const bool branch_taken_0x3804d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3804DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3804D8u;
        // 0x3804dc: 0x233102b  sltu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3804d8) {
            ctx->pc = 0x380504u;
            goto label_380504;
        }
    }
    ctx->pc = 0x3804E0u;
label_3804e0:
    // 0x3804e0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3804e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3804e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3804e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3804e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3804e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3804ec: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3804ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3804f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3804f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3804f4: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x3804f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x3804f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3804f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3804fc:
    // 0x3804fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3804fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x380500: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x380500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_380504:
    // 0x380504: 0x5440ffb6  bnel        $v0, $zero, . + 4 + (-0x4A << 2)
    ctx->pc = 0x380504u;
    {
        const bool branch_taken_0x380504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380504) {
            ctx->pc = 0x380508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380504u;
            // 0x380508: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3803E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3803e0;
        }
    }
    ctx->pc = 0x38050Cu;
label_38050c:
    // 0x38050c: 0x92480005  lbu         $t0, 0x5($s2)
    ctx->pc = 0x38050cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x380510: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x380510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x380514: 0x2447c3a0  addiu       $a3, $v0, -0x3C60
    ctx->pc = 0x380514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951840));
    // 0x380518: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x380518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x38051c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x38051cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x380520: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x380520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x380524: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x380524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380528: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x380528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x38052c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38052Cu;
    {
        const bool branch_taken_0x38052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38052Cu;
        // 0x380530: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38052c) {
            ctx->pc = 0x380540u;
            goto label_380540;
        }
    }
    ctx->pc = 0x380534u;
    // 0x380534: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x380534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x380538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x380538u;
    {
        const bool branch_taken_0x380538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380538u;
        // 0x38053c: 0x2449c208  addiu       $t1, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380538) {
            ctx->pc = 0x380548u;
            goto label_380548;
        }
    }
    ctx->pc = 0x380540u;
label_380540:
    // 0x380540: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x380540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x380544: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x380544u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_380548:
    // 0x380548: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x380548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38054c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x38054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x380550: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x380550u;
    SET_GPR_U32(ctx, 31, 0x380558u);
    ctx->pc = 0x380554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380550u;
    // 0x380554: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x380550u, 0x380558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380558u;
label_380558:
    // 0x380558: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x380558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38055c: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x38055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x380560: 0x2447c3b0  addiu       $a3, $v0, -0x3C50
    ctx->pc = 0x380560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951856));
    // 0x380564: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x380564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x380568: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380568u;
    {
        const bool branch_taken_0x380568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380568u;
        // 0x38056c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380568) {
            ctx->pc = 0x38057Cu;
            goto label_38057c;
        }
    }
    ctx->pc = 0x380570u;
    // 0x380570: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x380570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x380574: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x380574u;
    {
        const bool branch_taken_0x380574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380574u;
        // 0x380578: 0x2448c208  addiu       $t0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380574) {
            ctx->pc = 0x380584u;
            goto label_380584;
        }
    }
    ctx->pc = 0x38057Cu;
label_38057c:
    // 0x38057c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x38057cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x380580: 0x8e48003c  lw          $t0, 0x3C($s2)
    ctx->pc = 0x380580u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_380584:
    // 0x380584: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x380584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x380588: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x380588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x38058c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38058Cu;
    SET_GPR_U32(ctx, 31, 0x380594u);
    ctx->pc = 0x380590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38058Cu;
    // 0x380590: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38058Cu, 0x380594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380594u;
label_380594:
    // 0x380594: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x380594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x380598: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x380598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x38059c: 0x2447c3c0  addiu       $a3, $v0, -0x3C40
    ctx->pc = 0x38059cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x3805a0: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3805a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3805a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3805A4u;
    {
        const bool branch_taken_0x3805a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3805A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3805A4u;
        // 0x3805a8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3805a4) {
            ctx->pc = 0x3805B8u;
            goto label_3805b8;
        }
    }
    ctx->pc = 0x3805ACu;
    // 0x3805ac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3805acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3805b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3805B0u;
    {
        const bool branch_taken_0x3805b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3805B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3805B0u;
        // 0x3805b4: 0x2448c208  addiu       $t0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3805b0) {
            ctx->pc = 0x3805C0u;
            goto label_3805c0;
        }
    }
    ctx->pc = 0x3805B8u;
label_3805b8:
    // 0x3805b8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3805b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3805bc: 0x8e480040  lw          $t0, 0x40($s2)
    ctx->pc = 0x3805bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3805c0:
    // 0x3805c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3805c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3805c4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3805c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3805c8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3805C8u;
    SET_GPR_U32(ctx, 31, 0x3805D0u);
    ctx->pc = 0x3805CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3805C8u;
    // 0x3805cc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3805C8u, 0x3805D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3805D0u;
label_3805d0:
    // 0x3805d0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3805d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3805d4: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x3805d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x3805d8: 0x2447c3d0  addiu       $a3, $v0, -0x3C30
    ctx->pc = 0x3805d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951888));
    // 0x3805dc: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3805dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3805e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3805E0u;
    {
        const bool branch_taken_0x3805e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3805E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3805E0u;
        // 0x3805e4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3805e0) {
            ctx->pc = 0x3805F4u;
            goto label_3805f4;
        }
    }
    ctx->pc = 0x3805E8u;
    // 0x3805e8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3805e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3805ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3805ECu;
    {
        const bool branch_taken_0x3805ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3805F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3805ECu;
        // 0x3805f0: 0x2448c208  addiu       $t0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3805ec) {
            ctx->pc = 0x3805FCu;
            goto label_3805fc;
        }
    }
    ctx->pc = 0x3805F4u;
label_3805f4:
    // 0x3805f4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3805f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3805f8: 0x8e480044  lw          $t0, 0x44($s2)
    ctx->pc = 0x3805f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_3805fc:
    // 0x3805fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3805fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x380600: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x380600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x380604: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x380604u;
    SET_GPR_U32(ctx, 31, 0x38060Cu);
    ctx->pc = 0x380608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380604u;
    // 0x380608: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x380604u, 0x38060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38060Cu;
label_38060c:
    // 0x38060c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x38060cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x380610: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x380610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x380614: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x380614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x380618: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x380618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38061c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x38061cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x380620: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x380620u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x380624: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x380624u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x380628: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x380628u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38062c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38062cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380630: 0x3e00008  jr          $ra
    ctx->pc = 0x380630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380630u;
        // 0x380634: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380638u;
}
