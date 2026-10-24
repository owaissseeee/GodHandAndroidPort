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

// Function: func_001DBFB8
// Address: 0x1dbfb8 - 0x1dc1a8
void func_001DBFB8_0x1dbfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DBFB8_0x1dbfb8");
#endif

    switch (ctx->pc) {
        case 0x1dc040u: goto label_1dc040;
        case 0x1dc068u: goto label_1dc068;
        case 0x1dc0c8u: goto label_1dc0c8;
        case 0x1dc0e8u: goto label_1dc0e8;
        default: break;
    }

    ctx->pc = 0x1dbfb8u;

    // 0x1dbfb8: 0x8c823004  lw          $v0, 0x3004($a0)
    ctx->pc = 0x1dbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12292)));
    // 0x1dbfbc: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x1dbfbcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbfc0: 0xe0782d  daddu       $t7, $a3, $zero
    ctx->pc = 0x1dbfc0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbfc4: 0x8c8d3008  lw          $t5, 0x3008($a0)
    ctx->pc = 0x1dbfc4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12296)));
    // 0x1dbfc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dbfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbfcc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbfccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbfd0: 0x8c87300c  lw          $a3, 0x300C($a0)
    ctx->pc = 0x1dbfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12300)));
    // 0x1dbfd4: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x1dbfd4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbfd8: 0x8c620604  lw          $v0, 0x604($v1)
    ctx->pc = 0x1dbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1dbfdc: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1dbfdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbfe0: 0x8c863010  lw          $a2, 0x3010($a0)
    ctx->pc = 0x1dbfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12304)));
    // 0x1dbfe4: 0x27ae0010  addiu       $t6, $sp, 0x10
    ctx->pc = 0x1dbfe4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dbfe8: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1dbfe8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dbfec: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x1dbfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1dbff0: 0x8c853014  lw          $a1, 0x3014($a0)
    ctx->pc = 0x1dbff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12308)));
    // 0x1dbff4: 0x8c620604  lw          $v0, 0x604($v1)
    ctx->pc = 0x1dbff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1dbff8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dbff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbffc: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x1dbffcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc000: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1dc000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dc004: 0x8c620604  lw          $v0, 0x604($v1)
    ctx->pc = 0x1dc004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1dc008: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x1dc008u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc00c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1dc00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dc010: 0x8c620604  lw          $v0, 0x604($v1)
    ctx->pc = 0x1dc010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1dc014: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x1dc014u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc018: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dc018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dc01c: 0x8c620604  lw          $v0, 0x604($v1)
    ctx->pc = 0x1dc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1dc020: 0xa7ac0018  sh          $t4, 0x18($sp)
    ctx->pc = 0x1dc020u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 12));
    // 0x1dc024: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x1dc024u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc028: 0xa7ac0010  sh          $t4, 0x10($sp)
    ctx->pc = 0x1dc028u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 12));
    // 0x1dc02c: 0xa7ac0012  sh          $t4, 0x12($sp)
    ctx->pc = 0x1dc02cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 12));
    // 0x1dc030: 0xa7ac0014  sh          $t4, 0x14($sp)
    ctx->pc = 0x1dc030u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 12));
    // 0x1dc034: 0xa7ac0016  sh          $t4, 0x16($sp)
    ctx->pc = 0x1dc034u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 12));
    // 0x1dc038: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1dc038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1dc03c: 0x0  nop
    ctx->pc = 0x1dc03cu;
    // NOP
label_1dc040:
    // 0x1dc040: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1dc040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dc044: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DC044u;
    {
        const bool branch_taken_0x1dc044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC044u;
        // 0x1dc048: 0xa0682d  daddu       $t5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc044) {
            ctx->pc = 0x1DC0A8u;
            goto label_1dc0a8;
        }
    }
    ctx->pc = 0x1DC04Cu;
    // 0x1dc04c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1dc04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1dc050: 0xd1840  sll         $v1, $t5, 1
    ctx->pc = 0x1dc050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1dc054: 0x1c23021  addu        $a2, $t6, $v0
    ctx->pc = 0x1dc054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1dc058: 0x3a26021  addu        $t4, $sp, $v0
    ctx->pc = 0x1dc058u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1dc05c: 0x1c32021  addu        $a0, $t6, $v1
    ctx->pc = 0x1dc05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x1dc060: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1dc060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1dc064: 0x0  nop
    ctx->pc = 0x1dc064u;
    // NOP
label_1dc068:
    // 0x1dc068: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x1dc068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1dc06c: 0x1067000b  beq         $v1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1DC06Cu;
    {
        const bool branch_taken_0x1dc06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1DC070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC06Cu;
        // 0x1dc070: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc06c) {
            ctx->pc = 0x1DC09Cu;
            goto label_1dc09c;
        }
    }
    ctx->pc = 0x1DC074u;
    // 0x1dc074: 0x9482fff0  lhu         $v0, -0x10($a0)
    ctx->pc = 0x1dc074u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x1dc078: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC078u;
    {
        const bool branch_taken_0x1dc078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc078) {
            ctx->pc = 0x1DC09Cu;
            goto label_1dc09c;
        }
    }
    ctx->pc = 0x1DC080u;
    // 0x1dc080: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1dc080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dc084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dc084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dc088: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1dc088u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc08c: 0xa487fff0  sh          $a3, -0x10($a0)
    ctx->pc = 0x1dc08cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967280), (uint16_t)GPR_U32(ctx, 7));
    // 0x1dc090: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1dc090u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc094: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dc094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1dc098: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1dc098u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_1dc09c:
    // 0x1dc09c: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1dc09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dc0a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1DC0A0u;
    {
        const bool branch_taken_0x1dc0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0A0u;
        // 0x1dc0a4: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0a0) {
            ctx->pc = 0x1DC068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc068;
        }
    }
    ctx->pc = 0x1DC0A8u;
label_1dc0a8:
    // 0x1dc0a8: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1dc0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc0ac: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1dc0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dc0b0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1DC0B0u;
    {
        const bool branch_taken_0x1dc0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0B0u;
        // 0x1dc0b4: 0x24850001  addiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0b0) {
            ctx->pc = 0x1DC040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc040;
        }
    }
    ctx->pc = 0x1DC0B8u;
    // 0x1dc0b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dc0b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc0bc: 0x27ad0010  addiu       $t5, $sp, 0x10
    ctx->pc = 0x1dc0bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dc0c0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1dc0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dc0c4: 0x0  nop
    ctx->pc = 0x1dc0c4u;
    // NOP
label_1dc0c8:
    // 0x1dc0c8: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1dc0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dc0cc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DC0CCu;
    {
        const bool branch_taken_0x1dc0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0CCu;
        // 0x1dc0d0: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0cc) {
            ctx->pc = 0x1DC134u;
            goto label_1dc134;
        }
    }
    ctx->pc = 0x1DC0D4u;
    // 0x1dc0d4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc0d8: 0xc1840  sll         $v1, $t4, 1
    ctx->pc = 0x1dc0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1dc0dc: 0x1a23821  addu        $a3, $t5, $v0
    ctx->pc = 0x1dc0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1dc0e0: 0x3a23021  addu        $a2, $sp, $v0
    ctx->pc = 0x1dc0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1dc0e4: 0x1a32021  addu        $a0, $t5, $v1
    ctx->pc = 0x1dc0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_1dc0e8:
    // 0x1dc0e8: 0x9483fff0  lhu         $v1, -0x10($a0)
    ctx->pc = 0x1dc0e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x1dc0ec: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1dc0ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dc0f0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1dc0f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dc0f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DC0F4u;
    {
        const bool branch_taken_0x1dc0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0F4u;
        // 0x1dc0f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0f4) {
            ctx->pc = 0x1DC128u;
            goto label_1dc128;
        }
    }
    ctx->pc = 0x1DC0FCu;
    // 0x1dc0fc: 0xa7a30020  sh          $v1, 0x20($sp)
    ctx->pc = 0x1dc0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dc100: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1dc100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dc104: 0xa482fff0  sh          $v0, -0x10($a0)
    ctx->pc = 0x1dc104u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967280), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc108: 0x97a30020  lhu         $v1, 0x20($sp)
    ctx->pc = 0x1dc108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc10c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1dc10cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dc110: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1dc110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc114: 0xa7a20022  sh          $v0, 0x22($sp)
    ctx->pc = 0x1dc114u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc118: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1dc118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dc11c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1dc11cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dc120: 0x97a20022  lhu         $v0, 0x22($sp)
    ctx->pc = 0x1dc120u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x1dc124: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x1dc124u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_1dc128:
    // 0x1dc128: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1dc128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dc12c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DC12Cu;
    {
        const bool branch_taken_0x1dc12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC12Cu;
        // 0x1dc130: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc12c) {
            ctx->pc = 0x1DC0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc0e8;
        }
    }
    ctx->pc = 0x1DC134u;
label_1dc134:
    // 0x1dc134: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x1dc134u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc138: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1dc138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dc13c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1DC13Cu;
    {
        const bool branch_taken_0x1dc13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC13Cu;
        // 0x1dc140: 0x24650001  addiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc13c) {
            ctx->pc = 0x1DC0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc0c8;
        }
    }
    ctx->pc = 0x1DC144u;
    // 0x1dc144: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x1dc144u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc148: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x1dc148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1dc14c: 0xa7020000  sh          $v0, 0x0($t8)
    ctx->pc = 0x1dc14cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc150: 0x97a40004  lhu         $a0, 0x4($sp)
    ctx->pc = 0x1dc150u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dc154: 0xa5e30000  sh          $v1, 0x0($t7)
    ctx->pc = 0x1dc154u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dc158: 0xa5240000  sh          $a0, 0x0($t1)
    ctx->pc = 0x1dc158u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1dc15c: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x1dc15cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x1dc160: 0x97a50008  lhu         $a1, 0x8($sp)
    ctx->pc = 0x1dc160u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc164: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x1dc164u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc168: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1dc168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dc16c: 0x97a40010  lhu         $a0, 0x10($sp)
    ctx->pc = 0x1dc16cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc170: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x1dc170u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1dc174: 0x97a30012  lhu         $v1, 0x12($sp)
    ctx->pc = 0x1dc174u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x1dc178: 0xa7240000  sh          $a0, 0x0($t9)
    ctx->pc = 0x1dc178u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1dc17c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x1dc17cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dc180: 0x97a20014  lhu         $v0, 0x14($sp)
    ctx->pc = 0x1dc180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1dc184: 0x97a40016  lhu         $a0, 0x16($sp)
    ctx->pc = 0x1dc184u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x1dc188: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x1dc188u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc18c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1dc18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc190: 0x97a50018  lhu         $a1, 0x18($sp)
    ctx->pc = 0x1dc190u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dc194: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x1dc194u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1dc198: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1dc198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc19c: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x1dc19cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1dc1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1A0u;
        // 0x1dc1a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC1A8u;
}
