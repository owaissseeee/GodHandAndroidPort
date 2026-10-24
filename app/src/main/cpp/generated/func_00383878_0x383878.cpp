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

// Function: func_00383878
// Address: 0x383878 - 0x383a20
void func_00383878_0x383878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383878_0x383878");
#endif

    switch (ctx->pc) {
        case 0x383940u: goto label_383940;
        case 0x383a08u: goto label_383a08;
        default: break;
    }

    ctx->pc = 0x383878u;

    // 0x383878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x383878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38387c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38387cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383880: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x383880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x383884: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x383884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x383888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38388c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x383890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383894: 0x26300370  addiu       $s0, $s1, 0x370
    ctx->pc = 0x383894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x383898: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x383898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x38389c: 0x8ca40038  lw          $a0, 0x38($a1)
    ctx->pc = 0x38389cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x3838a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3838a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3838a4: 0x4810010  bgez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3838A4u;
    {
        const bool branch_taken_0x3838a4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3838A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838A4u;
        // 0x3838a8: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838a4) {
            ctx->pc = 0x3838E8u;
            goto label_3838e8;
        }
    }
    ctx->pc = 0x3838ACu;
    // 0x3838ac: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3838acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3838b0: 0x26230378  addiu       $v1, $s1, 0x378
    ctx->pc = 0x3838b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 888));
    // 0x3838b4: 0x24c4fc40  addiu       $a0, $a2, -0x3C0
    ctx->pc = 0x3838b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966336));
    // 0x3838b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3838b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3838bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3838bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3838c0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x3838c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3838c4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3838c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3838c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3838C8u;
    {
        const bool branch_taken_0x3838c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3838CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838C8u;
        // 0x3838cc: 0x94650000  lhu         $a1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838c8) {
            ctx->pc = 0x3838DCu;
            goto label_3838dc;
        }
    }
    ctx->pc = 0x3838D0u;
    // 0x3838d0: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x3838d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3838d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3838D4u;
    {
        const bool branch_taken_0x3838d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3838D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838D4u;
        // 0x3838d8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838d4) {
            ctx->pc = 0x383928u;
            goto label_383928;
        }
    }
    ctx->pc = 0x3838DCu;
label_3838dc:
    // 0x3838dc: 0x2402fc40  addiu       $v0, $zero, -0x3C0
    ctx->pc = 0x3838dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    // 0x3838e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3838E0u;
    {
        const bool branch_taken_0x3838e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3838E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838E0u;
        // 0x3838e4: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838e0) {
            ctx->pc = 0x383928u;
            goto label_383928;
        }
    }
    ctx->pc = 0x3838E8u;
label_3838e8:
    // 0x3838e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3838e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3838ec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3838ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3838f0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3838F0u;
    {
        const bool branch_taken_0x3838f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3838F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838F0u;
        // 0x3838f4: 0x61823  negu        $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838f0) {
            ctx->pc = 0x383954u;
            goto label_383954;
        }
    }
    ctx->pc = 0x3838F8u;
    // 0x3838f8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3838f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3838fc: 0x26240378  addiu       $a0, $s1, 0x378
    ctx->pc = 0x3838fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 888));
    // 0x383900: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x383900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x383904: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x383904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x383908: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x383908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38390c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x38390cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x383910: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x383910u;
    {
        const bool branch_taken_0x383910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x383914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383910u;
        // 0x383914: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383910) {
            ctx->pc = 0x383924u;
            goto label_383924;
        }
    }
    ctx->pc = 0x383918u;
    // 0x383918: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x383918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x38391c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38391Cu;
    {
        const bool branch_taken_0x38391c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38391Cu;
        // 0x383920: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38391c) {
            ctx->pc = 0x383928u;
            goto label_383928;
        }
    }
    ctx->pc = 0x383924u;
label_383924:
    // 0x383924: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x383924u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_383928:
    // 0x383928: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x383928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38392c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38392cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383930: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x383930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x383934: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x383934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x383938: 0xc0e01f8  jal         func_3807E0
    ctx->pc = 0x383938u;
    SET_GPR_U32(ctx, 31, 0x383940u);
    ctx->pc = 0x38393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383938u;
    // 0x38393c: 0x84450008  lh          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807E0u, 0x383938u, 0x383940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383940u;
label_383940:
    // 0x383940: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x383940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383944: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x383944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x383948: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x383948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x38394c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x38394Cu;
    {
        const bool branch_taken_0x38394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38394Cu;
        // 0x383950: 0xa4620012  sh          $v0, 0x12($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38394c) {
            ctx->pc = 0x3839FCu;
            goto label_3839fc;
        }
    }
    ctx->pc = 0x383954u;
label_383954:
    // 0x383954: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x383954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x383958: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x383958u;
    {
        const bool branch_taken_0x383958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383958u;
        // 0x38395c: 0x26230382  addiu       $v1, $s1, 0x382 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 898));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383958) {
            ctx->pc = 0x383990u;
            goto label_383990;
        }
    }
    ctx->pc = 0x383960u;
    // 0x383960: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x383960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383964: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x383964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x383968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x383968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38396c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x38396cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383970: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x383970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x383974: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x383974u;
    {
        const bool branch_taken_0x383974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383974u;
        // 0x383978: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383974) {
            ctx->pc = 0x383988u;
            goto label_383988;
        }
    }
    ctx->pc = 0x38397Cu;
    // 0x38397c: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x38397cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x383980: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x383980u;
    {
        const bool branch_taken_0x383980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383980u;
        // 0x383984: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383980) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x383988u;
label_383988:
    // 0x383988: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x383988u;
    {
        const bool branch_taken_0x383988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383988u;
        // 0x38398c: 0xa4600000  sh          $zero, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383988) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x383990u;
label_383990:
    // 0x383990: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x383990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x383994: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x383994u;
    {
        const bool branch_taken_0x383994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383994u;
        // 0x383998: 0x26240382  addiu       $a0, $s1, 0x382 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 898));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383994) {
            ctx->pc = 0x383A08u;
            goto label_383a08;
        }
    }
    ctx->pc = 0x38399Cu;
    // 0x38399c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x38399cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3839a0: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x3839a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3839a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3839a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3839a8: 0xe61823  subu        $v1, $a3, $a2
    ctx->pc = 0x3839a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3839ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3839acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3839b0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x3839b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3839b4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3839b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3839b8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3839B8u;
    {
        const bool branch_taken_0x3839b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3839BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839B8u;
        // 0x3839bc: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3839b8) {
            ctx->pc = 0x3839CCu;
            goto label_3839cc;
        }
    }
    ctx->pc = 0x3839C0u;
    // 0x3839c0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x3839c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3839c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3839C4u;
    {
        const bool branch_taken_0x3839c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3839C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839C4u;
        // 0x3839c8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3839c4) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x3839CCu;
label_3839cc:
    // 0x3839cc: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x3839ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
label_3839d0:
    // 0x3839d0: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x3839d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3839d4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3839d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x3839d8: 0x24a52060  addiu       $a1, $a1, 0x2060
    ctx->pc = 0x3839d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8288));
    // 0x3839dc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3839dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3839e0: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x3839e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3839e4: 0x84620012  lh          $v0, 0x12($v1)
    ctx->pc = 0x3839e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x3839e8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3839e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3839ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3839ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3839f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3839f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3839f4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3839f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3839f8: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x3839f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
label_3839fc:
    // 0x3839fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3839fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383a00: 0xc0e0e88  jal         func_383A20
    ctx->pc = 0x383A00u;
    SET_GPR_U32(ctx, 31, 0x383A08u);
    ctx->pc = 0x383A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383A00u;
    // 0x383a04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383A20u, 0x383A00u, 0x383A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383A08u;
label_383a08:
    // 0x383a08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x383a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383a0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x383a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383a14: 0x3e00008  jr          $ra
    ctx->pc = 0x383A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A14u;
        // 0x383a18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383A1Cu;
    // 0x383a1c: 0x0  nop
    ctx->pc = 0x383a1cu;
    // NOP
    ctx->pc = 0x383a20u;
}
