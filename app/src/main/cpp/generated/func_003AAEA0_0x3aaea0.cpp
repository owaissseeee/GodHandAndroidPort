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

// Function: func_003AAEA0
// Address: 0x3aaea0 - 0x3ab050
void func_003AAEA0_0x3aaea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AAEA0_0x3aaea0");
#endif

    switch (ctx->pc) {
        case 0x3aaf30u: goto label_3aaf30;
        case 0x3aafc0u: goto label_3aafc0;
        case 0x3ab028u: goto label_3ab028;
        default: break;
    }

    ctx->pc = 0x3aaea0u;

    // 0x3aaea0: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x3aaea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3aaea4: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3aaea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3aaea8: 0x24430019  addiu       $v1, $v0, 0x19
    ctx->pc = 0x3aaea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x3aaeac: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3aaeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x3aaeb0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x3aaeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3aaeb4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3aaeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3aaeb8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3aaeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3aaebc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3aaebcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaec0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3aaec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3aaec4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3aaec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3aaec8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3aaec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3aaecc: 0x2450000a  addiu       $s0, $v0, 0xA
    ctx->pc = 0x3aaeccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x3aaed0: 0x3a3e823  subu        $sp, $sp, $v1
    ctx->pc = 0x3aaed0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3aaed4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3aaed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaed8: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x3aaed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x3aaedc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3aaedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaee0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3aaee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaee4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AAEE4u;
    {
        const bool branch_taken_0x3aaee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEE4u;
        // 0x3aaee8: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaee4) {
            ctx->pc = 0x3AAEFCu;
            goto label_3aaefc;
        }
    }
    ctx->pc = 0x3AAEECu;
    // 0x3aaeec: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3AAEECu;
    {
        const bool branch_taken_0x3aaeec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEECu;
        // 0x3aaef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaeec) {
            ctx->pc = 0x3AB030u;
            goto label_3ab030;
        }
    }
    ctx->pc = 0x3AAEF4u;
    // 0x3aaef4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AAEF4u;
    {
        const bool branch_taken_0x3aaef4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEF4u;
        // 0x3aaef8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaef4) {
            ctx->pc = 0x3AAF04u;
            goto label_3aaf04;
        }
    }
    ctx->pc = 0x3AAEFCu;
label_3aaefc:
    // 0x3aaefc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3AAEFCu;
    {
        const bool branch_taken_0x3aaefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEFCu;
        // 0x3aaf00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaefc) {
            ctx->pc = 0x3AB030u;
            goto label_3ab030;
        }
    }
    ctx->pc = 0x3AAF04u;
label_3aaf04:
    // 0x3aaf04: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x3aaf04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x3aaf08: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x3aaf08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3aaf0c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3AAF0Cu;
    {
        const bool branch_taken_0x3aaf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF0Cu;
        // 0x3aaf10: 0xafc60004  sw          $a2, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf0c) {
            ctx->pc = 0x3AAF8Cu;
            goto label_3aaf8c;
        }
    }
    ctx->pc = 0x3AAF14u;
    // 0x3aaf14: 0x240d0045  addiu       $t5, $zero, 0x45
    ctx->pc = 0x3aaf14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x3aaf18: 0x240c002e  addiu       $t4, $zero, 0x2E
    ctx->pc = 0x3aaf18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x3aaf1c: 0x240b0065  addiu       $t3, $zero, 0x65
    ctx->pc = 0x3aaf1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x3aaf20: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3aaf20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aaf24: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3aaf24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aaf28: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x3aaf28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3aaf2c: 0x0  nop
    ctx->pc = 0x3aaf2cu;
    // NOP
label_3aaf30:
    // 0x3aaf30: 0x106d000f  beq         $v1, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x3AAF30u;
    {
        const bool branch_taken_0x3aaf30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x3AAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF30u;
        // 0x3aaf34: 0x28620046  slti        $v0, $v1, 0x46 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf30) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAF38u;
    // 0x3aaf38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AAF38u;
    {
        const bool branch_taken_0x3aaf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aaf38) {
            ctx->pc = 0x3AAF50u;
            goto label_3aaf50;
        }
    }
    ctx->pc = 0x3AAF40u;
    // 0x3aaf40: 0x106c0007  beq         $v1, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AAF40u;
    {
        const bool branch_taken_0x3aaf40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x3AAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF40u;
        // 0x3aaf44: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf40) {
            ctx->pc = 0x3AAF60u;
            goto label_3aaf60;
        }
    }
    ctx->pc = 0x3AAF48u;
    // 0x3aaf48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3AAF48u;
    {
        const bool branch_taken_0x3aaf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF48u;
        // 0x3aaf4c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf48) {
            ctx->pc = 0x3AAF78u;
            goto label_3aaf78;
        }
    }
    ctx->pc = 0x3AAF50u;
label_3aaf50:
    // 0x3aaf50: 0x506b0008  beql        $v1, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAF50u;
    {
        const bool branch_taken_0x3aaf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x3aaf50) {
            ctx->pc = 0x3AAF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAF50u;
            // 0x3aaf54: 0xafc90000  sw          $t1, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAF74u;
            goto label_3aaf74;
        }
    }
    ctx->pc = 0x3AAF58u;
    // 0x3aaf58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AAF58u;
    {
        const bool branch_taken_0x3aaf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF58u;
        // 0x3aaf5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf58) {
            ctx->pc = 0x3AAF78u;
            goto label_3aaf78;
        }
    }
    ctx->pc = 0x3AAF60u;
label_3aaf60:
    // 0x3aaf60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAF60u;
    {
        const bool branch_taken_0x3aaf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF60u;
        // 0x3aaf64: 0xafc40004  sw          $a0, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf60) {
            ctx->pc = 0x3AAF74u;
            goto label_3aaf74;
        }
    }
    ctx->pc = 0x3AAF68u;
    // 0x3aaf68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AAF68u;
    {
        const bool branch_taken_0x3aaf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF68u;
        // 0x3aaf6c: 0xafca0000  sw          $t2, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf68) {
            ctx->pc = 0x3AAF74u;
            goto label_3aaf74;
        }
    }
    ctx->pc = 0x3AAF70u;
label_3aaf70:
    // 0x3aaf70: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x3aaf70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
label_3aaf74:
    // 0x3aaf74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3aaf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3aaf78:
    // 0x3aaf78: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x3aaf78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3aaf7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AAF7Cu;
    {
        const bool branch_taken_0x3aaf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF7Cu;
        // 0x3aaf80: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf7c) {
            ctx->pc = 0x3AAF8Cu;
            goto label_3aaf8c;
        }
    }
    ctx->pc = 0x3AAF84u;
    // 0x3aaf84: 0x5449ffea  bnel        $v0, $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3AAF84u;
    {
        const bool branch_taken_0x3aaf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3aaf84) {
            ctx->pc = 0x3AAF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAF84u;
            // 0x3aaf88: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aaf30;
        }
    }
    ctx->pc = 0x3AAF8Cu;
label_3aaf8c:
    // 0x3aaf8c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3aaf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3aaf90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aaf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aaf94: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AAF94u;
    {
        const bool branch_taken_0x3aaf94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF94u;
        // 0x3aaf98: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf94) {
            ctx->pc = 0x3AAFA4u;
            goto label_3aafa4;
        }
    }
    ctx->pc = 0x3AAF9Cu;
    // 0x3aaf9c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3AAF9Cu;
    {
        const bool branch_taken_0x3aaf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF9Cu;
        // 0x3aafa0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf9c) {
            ctx->pc = 0x3AB030u;
            goto label_3ab030;
        }
    }
    ctx->pc = 0x3AAFA4u;
label_3aafa4:
    // 0x3aafa4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3aafa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3aafa8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AAFA8u;
    {
        const bool branch_taken_0x3aafa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFA8u;
        // 0x3aafac: 0x8fc90004  lw          $t1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aafa8) {
            ctx->pc = 0x3AB00Cu;
            goto label_3ab00c;
        }
    }
    ctx->pc = 0x3AAFB0u;
    // 0x3aafb0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3aafb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aafb4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3aafb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aafb8: 0x240a002c  addiu       $t2, $zero, 0x2C
    ctx->pc = 0x3aafb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3aafbc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3aafbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3aafc0:
    // 0x3aafc0: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x3aafc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3aafc4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3aafc4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aafc8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3AAFC8u;
    {
        const bool branch_taken_0x3aafc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFC8u;
        // 0x3aafcc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aafc8) {
            ctx->pc = 0x3AAFFCu;
            goto label_3aaffc;
        }
    }
    ctx->pc = 0x3AAFD0u;
    // 0x3aafd0: 0x106001a  div         $zero, $t0, $a2
    ctx->pc = 0x3aafd0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3aafd4: 0x50cb0001  beql        $a2, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AAFD4u;
    {
        const bool branch_taken_0x3aafd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x3aafd4) {
            ctx->pc = 0x3AAFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAFD4u;
            // 0x3aafd8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAFDCu;
            goto label_3aafdc;
        }
    }
    ctx->pc = 0x3AAFDCu;
label_3aafdc:
    // 0x3aafdc: 0x1010  mfhi        $v0
    ctx->pc = 0x3aafdcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3aafe0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AAFE0u;
    {
        const bool branch_taken_0x3aafe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aafe0) {
            ctx->pc = 0x3AAFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAFE0u;
            // 0x3aafe4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAFFCu;
            goto label_3aaffc;
        }
    }
    ctx->pc = 0x3AAFE8u;
    // 0x3aafe8: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAFE8u;
    {
        const bool branch_taken_0x3aafe8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFE8u;
        // 0x3aafec: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aafe8) {
            ctx->pc = 0x3AAFFCu;
            goto label_3aaffc;
        }
    }
    ctx->pc = 0x3AAFF0u;
    // 0x3aaff0: 0xa0ea0000  sb          $t2, 0x0($a3)
    ctx->pc = 0x3aaff0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x3aaff4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3aaff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3aaff8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3aaff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3aaffc:
    // 0x3aaffc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3aaffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ab000: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3ab000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3ab004: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3AB004u;
    {
        const bool branch_taken_0x3ab004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab004) {
            ctx->pc = 0x3AB008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB004u;
            // 0x3ab008: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aafc0;
        }
    }
    ctx->pc = 0x3AB00Cu;
label_3ab00c:
    // 0x3ab00c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ab00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ab010: 0x2610fff6  addiu       $s0, $s0, -0xA
    ctx->pc = 0x3ab010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
    // 0x3ab014: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3ab014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab01c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ab01cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab020: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AB020u;
    SET_GPR_U32(ctx, 31, 0x3AB028u);
    ctx->pc = 0x3AB024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB020u;
    // 0x3ab024: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AB020u, 0x3AB028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB028u;
label_3ab028:
    // 0x3ab028: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3ab028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x3ab02c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ab02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab030:
    // 0x3ab030: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3ab030u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab034: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3ab034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ab038: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3ab038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ab03c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3ab03cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ab040: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3ab040u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ab044: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ab044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ab048: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB048u;
        // 0x3ab04c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB050u;
}
