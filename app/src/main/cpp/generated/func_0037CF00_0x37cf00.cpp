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

// Function: func_0037CF00
// Address: 0x37cf00 - 0x37d060
void func_0037CF00_0x37cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037CF00_0x37cf00");
#endif

    switch (ctx->pc) {
        case 0x37cf38u: goto label_37cf38;
        case 0x37cf88u: goto label_37cf88;
        case 0x37cff8u: goto label_37cff8;
        case 0x37d03cu: goto label_37d03c;
        default: break;
    }

    ctx->pc = 0x37cf00u;

    // 0x37cf00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37cf04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37cf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37cf08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cf0c: 0x80850007  lb          $a1, 0x7($a0)
    ctx->pc = 0x37cf0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x37cf10: 0x4a00012  bltz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x37CF10u;
    {
        const bool branch_taken_0x37cf10 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x37CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF10u;
        // 0x37cf14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf10) {
            ctx->pc = 0x37CF5Cu;
            goto label_37cf5c;
        }
    }
    ctx->pc = 0x37CF18u;
    // 0x37cf18: 0x80830006  lb          $v1, 0x6($a0)
    ctx->pc = 0x37cf18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x37cf1c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37cf20: 0x2442c8c0  addiu       $v0, $v0, -0x3740
    ctx->pc = 0x37cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x37cf24: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x37cf24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf28: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x37cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x37cf2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37cf30: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x37cf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf34: 0x0  nop
    ctx->pc = 0x37cf34u;
    // NOP
label_37cf38:
    // 0x37cf38: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x37cf38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37cf3c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x37CF3Cu;
    {
        const bool branch_taken_0x37cf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF3Cu;
        // 0x37cf40: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf3c) {
            ctx->pc = 0x37D044u;
            goto label_37d044;
        }
    }
    ctx->pc = 0x37CF44u;
    // 0x37cf44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x37cf44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x37cf48: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x37cf48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x37cf4c: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x37cf4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x37cf50: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x37CF50u;
    {
        const bool branch_taken_0x37cf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF50u;
        // 0x37cf54: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf50) {
            ctx->pc = 0x37CF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37cf38;
        }
    }
    ctx->pc = 0x37CF58u;
    // 0x37cf58: 0x80850007  lb          $a1, 0x7($a0)
    ctx->pc = 0x37cf58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
label_37cf5c:
    // 0x37cf5c: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x37cf5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x37cf60: 0x90890007  lbu         $t1, 0x7($a0)
    ctx->pc = 0x37cf60u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x37cf64: 0x4a0000e  bltz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x37CF64u;
    {
        const bool branch_taken_0x37cf64 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x37CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF64u;
        // 0x37cf68: 0x90860008  lbu         $a2, 0x8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf64) {
            ctx->pc = 0x37CFA0u;
            goto label_37cfa0;
        }
    }
    ctx->pc = 0x37CF6Cu;
    // 0x37cf6c: 0x80830006  lb          $v1, 0x6($a0)
    ctx->pc = 0x37cf6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x37cf70: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37cf74: 0x2442c8c0  addiu       $v0, $v0, -0x3740
    ctx->pc = 0x37cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x37cf78: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x37cf78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x37cf7c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x37cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x37cf80: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x37cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x37cf84: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x37cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37cf88:
    // 0x37cf88: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x37cf88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37cf8c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x37cf8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x37cf90: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x37cf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x37cf94: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x37cf94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37cf98: 0x14e0fffb  bnez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37CF98u;
    {
        const bool branch_taken_0x37cf98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x37CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF98u;
        // 0x37cf9c: 0x62400a  movz        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf98) {
            ctx->pc = 0x37CF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37cf88;
        }
    }
    ctx->pc = 0x37CFA0u;
label_37cfa0:
    // 0x37cfa0: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x37cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x37cfa4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x37cfa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x37cfa8: 0x48182a  slt         $v1, $v0, $t0
    ctx->pc = 0x37cfa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x37cfac: 0x54600028  bnel        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x37CFACu;
    {
        const bool branch_taken_0x37cfac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37cfac) {
            ctx->pc = 0x37CFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CFACu;
            // 0x37cfb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D050u;
            goto label_37d050;
        }
    }
    ctx->pc = 0x37CFB4u;
    // 0x37cfb4: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37CFB4u;
    {
        const bool branch_taken_0x37cfb4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x37CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFB4u;
        // 0x37cfb8: 0x91600  sll         $v0, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cfb4) {
            ctx->pc = 0x37CFCCu;
            goto label_37cfcc;
        }
    }
    ctx->pc = 0x37CFBCu;
    // 0x37cfbc: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x37cfbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x37cfc0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x37cfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x37cfc4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x37CFC4u;
    {
        const bool branch_taken_0x37cfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFC4u;
        // 0x37cfc8: 0x91600  sll         $v0, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cfc4) {
            ctx->pc = 0x37D04Cu;
            goto label_37d04c;
        }
    }
    ctx->pc = 0x37CFCCu;
label_37cfcc:
    // 0x37cfcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37cfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cfd0: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x37cfd0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    // 0x37cfd4: 0x4a00014  bltz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x37CFD4u;
    {
        const bool branch_taken_0x37cfd4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x37CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFD4u;
        // 0x37cfd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cfd4) {
            ctx->pc = 0x37D028u;
            goto label_37d028;
        }
    }
    ctx->pc = 0x37CFDCu;
    // 0x37cfdc: 0x80830006  lb          $v1, 0x6($a0)
    ctx->pc = 0x37cfdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x37cfe0: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37cfe4: 0x2442c8c0  addiu       $v0, $v0, -0x3740
    ctx->pc = 0x37cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x37cfe8: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x37cfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x37cfec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x37cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x37cff0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37cff4: 0x0  nop
    ctx->pc = 0x37cff4u;
    // NOP
label_37cff8:
    // 0x37cff8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x37cff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cffc: 0x80a2001e  lb          $v0, 0x1E($a1)
    ctx->pc = 0x37cffcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x37d000: 0x14480007  bne         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37D000u;
    {
        const bool branch_taken_0x37d000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x37D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D000u;
        // 0x37d004: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d000) {
            ctx->pc = 0x37D020u;
            goto label_37d020;
        }
    }
    ctx->pc = 0x37D008u;
    // 0x37d008: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x37d008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x37d00c: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x37d00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x37d010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37D010u;
    {
        const bool branch_taken_0x37d010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d010) {
            ctx->pc = 0x37D020u;
            goto label_37d020;
        }
    }
    ctx->pc = 0x37D018u;
    // 0x37d018: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37d018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d01c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x37d01cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37d020:
    // 0x37d020: 0x14e0fff5  bnez        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x37D020u;
    {
        const bool branch_taken_0x37d020 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D020u;
        // 0x37d024: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d020) {
            ctx->pc = 0x37CFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37cff8;
        }
    }
    ctx->pc = 0x37D028u;
label_37d028:
    // 0x37d028: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37D028u;
    {
        const bool branch_taken_0x37d028 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D028u;
        // 0x37d02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d028) {
            ctx->pc = 0x37D050u;
            goto label_37d050;
        }
    }
    ctx->pc = 0x37D030u;
    // 0x37d030: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x37d030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37d034: 0xc0df62e  jal         func_37D8B8
    ctx->pc = 0x37D034u;
    SET_GPR_U32(ctx, 31, 0x37D03Cu);
    ctx->pc = 0x37D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D034u;
    // 0x37d038: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8B8u, 0x37D034u, 0x37D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D03Cu;
label_37d03c:
    // 0x37d03c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37D03Cu;
    {
        const bool branch_taken_0x37d03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D03Cu;
        // 0x37d040: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d03c) {
            ctx->pc = 0x37D050u;
            goto label_37d050;
        }
    }
    ctx->pc = 0x37D044u;
label_37d044:
    // 0x37d044: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37D044u;
    {
        const bool branch_taken_0x37d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D044u;
        // 0x37d048: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d044) {
            ctx->pc = 0x37D050u;
            goto label_37d050;
        }
    }
    ctx->pc = 0x37D04Cu;
label_37d04c:
    // 0x37d04c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d050:
    // 0x37d050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37d050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d058: 0x3e00008  jr          $ra
    ctx->pc = 0x37D058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D058u;
        // 0x37d05c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D060u;
}
