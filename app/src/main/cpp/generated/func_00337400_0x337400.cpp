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

// Function: func_00337400
// Address: 0x337400 - 0x337728
void func_00337400_0x337400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337400_0x337400");
#endif

    switch (ctx->pc) {
        case 0x337440u: goto label_337440;
        case 0x337630u: goto label_337630;
        default: break;
    }

    ctx->pc = 0x337400u;

    // 0x337400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337404: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x337404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x337408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33740c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33740cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337410: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x337410u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x337414: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33741c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x33741cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337420: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x337420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x337424: 0x2452f768  addiu       $s2, $v0, -0x898
    ctx->pc = 0x337424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965096));
    // 0x337428: 0x24672b68  addiu       $a3, $v1, 0x2B68
    ctx->pc = 0x337428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 11112));
    // 0x33742c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33742cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337430: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x337430u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337434: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x337434u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337438: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x337438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33743c: 0x0  nop
    ctx->pc = 0x33743cu;
    // NOP
label_337440:
    // 0x337440: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x337440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x337444: 0x545000af  bnel        $v0, $s0, . + 4 + (0xAF << 2)
    ctx->pc = 0x337444u;
    {
        const bool branch_taken_0x337444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x337444) {
            ctx->pc = 0x337448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337444u;
            // 0x337448: 0x27180001  addiu       $t8, $t8, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337704u;
            goto label_337704;
        }
    }
    ctx->pc = 0x33744Cu;
    // 0x33744c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x33744cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x337450: 0x514800b0  beql        $t2, $t0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x337450u;
    {
        const bool branch_taken_0x337450 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x337450) {
            ctx->pc = 0x337454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337450u;
            // 0x337454: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337714u;
            goto label_337714;
        }
    }
    ctx->pc = 0x337458u;
    // 0x337458: 0x80e3005b  lb          $v1, 0x5B($a3)
    ctx->pc = 0x337458u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x33745c: 0x80e2005a  lb          $v0, 0x5A($a3)
    ctx->pc = 0x33745cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 90)));
    // 0x337460: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x337460u;
    {
        const bool branch_taken_0x337460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x337464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337460u;
        // 0x337464: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337460) {
            ctx->pc = 0x33748Cu;
            goto label_33748c;
        }
    }
    ctx->pc = 0x337468u;
    // 0x337468: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x337468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x33746c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x33746cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x337470: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x337470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x337474: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x337474u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x337478: 0x80e2005b  lb          $v0, 0x5B($a3)
    ctx->pc = 0x337478u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x33747c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x33747cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x337480: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x337480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x337484: 0x90e2005b  lbu         $v0, 0x5B($a3)
    ctx->pc = 0x337484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x337488: 0xa0e2005a  sb          $v0, 0x5A($a3)
    ctx->pc = 0x337488u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 90), (uint8_t)GPR_U32(ctx, 2));
label_33748c:
    // 0x33748c: 0x114800a0  beq         $t2, $t0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x33748Cu;
    {
        const bool branch_taken_0x33748c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x337490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33748Cu;
        // 0x337490: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33748c) {
            ctx->pc = 0x337710u;
            goto label_337710;
        }
    }
    ctx->pc = 0x337494u;
    // 0x337494: 0x94e30050  lhu         $v1, 0x50($a3)
    ctx->pc = 0x337494u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x337498: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x337498u;
    {
        const bool branch_taken_0x337498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x337498) {
            ctx->pc = 0x3374C4u;
            goto label_3374c4;
        }
    }
    ctx->pc = 0x3374A0u;
    // 0x3374a0: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x3374a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3374a4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3374a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3374a8: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x3374a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x3374ac: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x3374acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x3374b0: 0x80e30050  lb          $v1, 0x50($a3)
    ctx->pc = 0x3374b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3374b4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3374b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x3374b8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3374b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3374bc: 0x90e20050  lbu         $v0, 0x50($a3)
    ctx->pc = 0x3374bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3374c0: 0xa0e20051  sb          $v0, 0x51($a3)
    ctx->pc = 0x3374c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 81), (uint8_t)GPR_U32(ctx, 2));
label_3374c4:
    // 0x3374c4: 0x51480093  beql        $t2, $t0, . + 4 + (0x93 << 2)
    ctx->pc = 0x3374C4u;
    {
        const bool branch_taken_0x3374c4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x3374c4) {
            ctx->pc = 0x3374C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3374C4u;
            // 0x3374c8: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337714u;
            goto label_337714;
        }
    }
    ctx->pc = 0x3374CCu;
    // 0x3374cc: 0x80e30054  lb          $v1, 0x54($a3)
    ctx->pc = 0x3374ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x3374d0: 0x80e20055  lb          $v0, 0x55($a3)
    ctx->pc = 0x3374d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 85)));
    // 0x3374d4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3374D4u;
    {
        const bool branch_taken_0x3374d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3374D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374D4u;
        // 0x3374d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374d4) {
            ctx->pc = 0x337500u;
            goto label_337500;
        }
    }
    ctx->pc = 0x3374DCu;
    // 0x3374dc: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x3374dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3374e0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3374e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3374e4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3374e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3374e8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3374e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x3374ec: 0x80e20054  lb          $v0, 0x54($a3)
    ctx->pc = 0x3374ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x3374f0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3374f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3374f4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3374f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3374f8: 0x90e20054  lbu         $v0, 0x54($a3)
    ctx->pc = 0x3374f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x3374fc: 0xa0e20055  sb          $v0, 0x55($a3)
    ctx->pc = 0x3374fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 85), (uint8_t)GPR_U32(ctx, 2));
label_337500:
    // 0x337500: 0x51480084  beql        $t2, $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x337500u;
    {
        const bool branch_taken_0x337500 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x337500) {
            ctx->pc = 0x337504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337500u;
            // 0x337504: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337714u;
            goto label_337714;
        }
    }
    ctx->pc = 0x337508u;
    // 0x337508: 0x80e30056  lb          $v1, 0x56($a3)
    ctx->pc = 0x337508u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x33750c: 0x80e20057  lb          $v0, 0x57($a3)
    ctx->pc = 0x33750cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 87)));
    // 0x337510: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x337510u;
    {
        const bool branch_taken_0x337510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x337514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337510u;
        // 0x337514: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337510) {
            ctx->pc = 0x33753Cu;
            goto label_33753c;
        }
    }
    ctx->pc = 0x337518u;
    // 0x337518: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x337518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x33751c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x33751cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x337520: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x337520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x337524: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x337524u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x337528: 0x80e20056  lb          $v0, 0x56($a3)
    ctx->pc = 0x337528u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x33752c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x33752cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x337530: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x337530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x337534: 0x90e20056  lbu         $v0, 0x56($a3)
    ctx->pc = 0x337534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x337538: 0xa0e20057  sb          $v0, 0x57($a3)
    ctx->pc = 0x337538u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 87), (uint8_t)GPR_U32(ctx, 2));
label_33753c:
    // 0x33753c: 0x51480075  beql        $t2, $t0, . + 4 + (0x75 << 2)
    ctx->pc = 0x33753Cu;
    {
        const bool branch_taken_0x33753c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x33753c) {
            ctx->pc = 0x337540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33753Cu;
            // 0x337540: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337714u;
            goto label_337714;
        }
    }
    ctx->pc = 0x337544u;
    // 0x337544: 0x80e30052  lb          $v1, 0x52($a3)
    ctx->pc = 0x337544u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x337548: 0x80e20053  lb          $v0, 0x53($a3)
    ctx->pc = 0x337548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 83)));
    // 0x33754c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33754Cu;
    {
        const bool branch_taken_0x33754c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x337550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33754Cu;
        // 0x337550: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33754c) {
            ctx->pc = 0x337578u;
            goto label_337578;
        }
    }
    ctx->pc = 0x337554u;
    // 0x337554: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x337554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x337558: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x337558u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33755c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x33755cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x337560: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x337560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x337564: 0x80e20052  lb          $v0, 0x52($a3)
    ctx->pc = 0x337564u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x337568: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x337568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x33756c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x33756cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x337570: 0x90e20052  lbu         $v0, 0x52($a3)
    ctx->pc = 0x337570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x337574: 0xa0e20053  sb          $v0, 0x53($a3)
    ctx->pc = 0x337574u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 83), (uint8_t)GPR_U32(ctx, 2));
label_337578:
    // 0x337578: 0x51480066  beql        $t2, $t0, . + 4 + (0x66 << 2)
    ctx->pc = 0x337578u;
    {
        const bool branch_taken_0x337578 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x337578) {
            ctx->pc = 0x33757Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337578u;
            // 0x33757c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337714u;
            goto label_337714;
        }
    }
    ctx->pc = 0x337580u;
    // 0x337580: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x337580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x337584: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x337584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x337588: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x337588u;
    {
        const bool branch_taken_0x337588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337588u;
        // 0x33758c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337588) {
            ctx->pc = 0x3375B0u;
            goto label_3375b0;
        }
    }
    ctx->pc = 0x337590u;
    // 0x337590: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x337590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x337594: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x337594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x337598: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x337598u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x33759c: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x33759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x3375a0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3375a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3375a4: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x3375a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
    // 0x3375a8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x3375a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x3375ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3375acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3375b0:
    // 0x3375b0: 0x51480058  beql        $t2, $t0, . + 4 + (0x58 << 2)
    ctx->pc = 0x3375B0u;
    {
        const bool branch_taken_0x3375b0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x3375b0) {
            ctx->pc = 0x3375B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3375B0u;
            // 0x3375b4: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337714u;
            goto label_337714;
        }
    }
    ctx->pc = 0x3375B8u;
    // 0x3375b8: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x3375b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x3375bc: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x3375bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x3375c0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3375C0u;
    {
        const bool branch_taken_0x3375c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3375C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3375C0u;
        // 0x3375c4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3375c0) {
            ctx->pc = 0x3375F8u;
            goto label_3375f8;
        }
    }
    ctx->pc = 0x3375C8u;
    // 0x3375c8: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x3375c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3375cc: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x3375ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3375d0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3375d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3375d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3375d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3375d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3375d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3375dc: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x3375dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x3375e0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x3375e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x3375e4: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x3375e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3375e8: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x3375e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x3375ec: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x3375ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x3375f0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3375f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3375f4: 0xace2003c  sw          $v0, 0x3C($a3)
    ctx->pc = 0x3375f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 2));
label_3375f8:
    // 0x3375f8: 0x11480045  beq         $t2, $t0, . + 4 + (0x45 << 2)
    ctx->pc = 0x3375F8u;
    {
        const bool branch_taken_0x3375f8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x3375FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3375F8u;
        // 0x3375fc: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3375f8) {
            ctx->pc = 0x337710u;
            goto label_337710;
        }
    }
    ctx->pc = 0x337600u;
    // 0x337600: 0x51420044  beql        $t2, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x337600u;
    {
        const bool branch_taken_0x337600 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x337600) {
            ctx->pc = 0x337604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337600u;
            // 0x337604: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337714u;
            goto label_337714;
        }
    }
    ctx->pc = 0x337608u;
    // 0x337608: 0x80e20052  lb          $v0, 0x52($a3)
    ctx->pc = 0x337608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x33760c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x33760cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337610: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x337610u;
    {
        const bool branch_taken_0x337610 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x337614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337610u;
        // 0x337614: 0x90e90052  lbu         $t1, 0x52($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337610) {
            ctx->pc = 0x33768Cu;
            goto label_33768c;
        }
    }
    ctx->pc = 0x337618u;
    // 0x337618: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x337618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x33761c: 0x24ed0008  addiu       $t5, $a3, 0x8
    ctx->pc = 0x33761cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x337620: 0x4f2021  addu        $a0, $v0, $t7
    ctx->pc = 0x337620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x337624: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x337624u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x337628: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x337628u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33762c: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x33762cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_337630:
    // 0x337630: 0x1ab4021  addu        $t0, $t5, $t3
    ctx->pc = 0x337630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x337634: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x337634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337638: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x337638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33763c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33763Cu;
    {
        const bool branch_taken_0x33763c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x337640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33763Cu;
        // 0x337640: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33763c) {
            ctx->pc = 0x337674u;
            goto label_337674;
        }
    }
    ctx->pc = 0x337644u;
    // 0x337644: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x337644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x337648: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x337648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x33764c: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x33764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x337650: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x337650u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x337654: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x337654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337658: 0xa48e0000  sh          $t6, 0x0($a0)
    ctx->pc = 0x337658u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x33765c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x33765cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x337660: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x337660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x337664: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x337664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x337668: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x337668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33766c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x33766cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x337670: 0x90e90052  lbu         $t1, 0x52($a3)
    ctx->pc = 0x337670u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
label_337674:
    // 0x337674: 0x91600  sll         $v0, $t1, 24
    ctx->pc = 0x337674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x337678: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x337678u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x33767c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x33767cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x337680: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x337680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x337684: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x337684u;
    {
        const bool branch_taken_0x337684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337684u;
        // 0x337688: 0xeb2821  addu        $a1, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337684) {
            ctx->pc = 0x337630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337630;
        }
    }
    ctx->pc = 0x33768Cu;
label_33768c:
    // 0x33768c: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x33768cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x337690: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x337690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x337694: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x337694u;
    {
        const bool branch_taken_0x337694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x337698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337694u;
        // 0x337698: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337694) {
            ctx->pc = 0x3376BCu;
            goto label_3376bc;
        }
    }
    ctx->pc = 0x33769Cu;
    // 0x33769c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x33769cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x3376a0: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x3376a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3376a4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3376a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3376a8: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x3376a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x3376ac: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3376acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3376b0: 0xace30060  sw          $v1, 0x60($a3)
    ctx->pc = 0x3376b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 3));
    // 0x3376b4: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x3376b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x3376b8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3376b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3376bc:
    // 0x3376bc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3376bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3376c0: 0x51440014  beql        $t2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3376C0u;
    {
        const bool branch_taken_0x3376c0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x3376c0) {
            ctx->pc = 0x3376C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3376C0u;
            // 0x3376c4: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337714u;
            goto label_337714;
        }
    }
    ctx->pc = 0x3376C8u;
    // 0x3376c8: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x3376c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3376cc: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3376CCu;
    {
        const bool branch_taken_0x3376cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3376cc) {
            ctx->pc = 0x3376F8u;
            goto label_3376f8;
        }
    }
    ctx->pc = 0x3376D4u;
    // 0x3376d4: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x3376d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3376d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3376d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3376dc: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x3376dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x3376e0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x3376e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x3376e4: 0x80e30050  lb          $v1, 0x50($a3)
    ctx->pc = 0x3376e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3376e8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3376e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x3376ec: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3376ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3376f0: 0x90e20050  lbu         $v0, 0x50($a3)
    ctx->pc = 0x3376f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3376f4: 0xa0e20051  sb          $v0, 0x51($a3)
    ctx->pc = 0x3376f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 81), (uint8_t)GPR_U32(ctx, 2));
label_3376f8:
    // 0x3376f8: 0x51440006  beql        $t2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3376F8u;
    {
        const bool branch_taken_0x3376f8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x3376f8) {
            ctx->pc = 0x3376FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3376F8u;
            // 0x3376fc: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337714u;
            goto label_337714;
        }
    }
    ctx->pc = 0x337700u;
    // 0x337700: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x337700u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
label_337704:
    // 0x337704: 0x2b020010  slti        $v0, $t8, 0x10
    ctx->pc = 0x337704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x337708: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x337708u;
    {
        const bool branch_taken_0x337708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337708u;
        // 0x33770c: 0x24e70064  addiu       $a3, $a3, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337708) {
            ctx->pc = 0x337440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337440;
        }
    }
    ctx->pc = 0x337710u;
label_337710:
    // 0x337710: 0xae2a0000  sw          $t2, 0x0($s1)
    ctx->pc = 0x337710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
label_337714:
    // 0x337714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33771c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33771cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337720: 0x3e00008  jr          $ra
    ctx->pc = 0x337720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337720u;
        // 0x337724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337728u;
}
