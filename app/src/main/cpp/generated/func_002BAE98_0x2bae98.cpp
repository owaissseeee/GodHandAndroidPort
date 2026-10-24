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

// Function: func_002BAE98
// Address: 0x2bae98 - 0x2bafa0
void func_002BAE98_0x2bae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BAE98_0x2bae98");
#endif

    switch (ctx->pc) {
        case 0x2bae98u: goto label_2bae98;
        case 0x2bae9cu: goto label_2bae9c;
        case 0x2baea0u: goto label_2baea0;
        case 0x2baea4u: goto label_2baea4;
        case 0x2baea8u: goto label_2baea8;
        case 0x2baeacu: goto label_2baeac;
        case 0x2baeb0u: goto label_2baeb0;
        case 0x2baeb4u: goto label_2baeb4;
        case 0x2baeb8u: goto label_2baeb8;
        case 0x2baebcu: goto label_2baebc;
        case 0x2baec0u: goto label_2baec0;
        case 0x2baec4u: goto label_2baec4;
        case 0x2baec8u: goto label_2baec8;
        case 0x2baeccu: goto label_2baecc;
        case 0x2baed0u: goto label_2baed0;
        case 0x2baed4u: goto label_2baed4;
        case 0x2baed8u: goto label_2baed8;
        case 0x2baedcu: goto label_2baedc;
        case 0x2baee0u: goto label_2baee0;
        case 0x2baee4u: goto label_2baee4;
        case 0x2baee8u: goto label_2baee8;
        case 0x2baeecu: goto label_2baeec;
        case 0x2baef0u: goto label_2baef0;
        case 0x2baef4u: goto label_2baef4;
        case 0x2baef8u: goto label_2baef8;
        case 0x2baefcu: goto label_2baefc;
        case 0x2baf00u: goto label_2baf00;
        case 0x2baf04u: goto label_2baf04;
        case 0x2baf08u: goto label_2baf08;
        case 0x2baf0cu: goto label_2baf0c;
        case 0x2baf10u: goto label_2baf10;
        case 0x2baf14u: goto label_2baf14;
        case 0x2baf18u: goto label_2baf18;
        case 0x2baf1cu: goto label_2baf1c;
        case 0x2baf20u: goto label_2baf20;
        case 0x2baf24u: goto label_2baf24;
        case 0x2baf28u: goto label_2baf28;
        case 0x2baf2cu: goto label_2baf2c;
        case 0x2baf30u: goto label_2baf30;
        case 0x2baf34u: goto label_2baf34;
        case 0x2baf38u: goto label_2baf38;
        case 0x2baf3cu: goto label_2baf3c;
        case 0x2baf40u: goto label_2baf40;
        case 0x2baf44u: goto label_2baf44;
        case 0x2baf48u: goto label_2baf48;
        case 0x2baf4cu: goto label_2baf4c;
        case 0x2baf50u: goto label_2baf50;
        case 0x2baf54u: goto label_2baf54;
        case 0x2baf58u: goto label_2baf58;
        case 0x2baf5cu: goto label_2baf5c;
        case 0x2baf60u: goto label_2baf60;
        case 0x2baf64u: goto label_2baf64;
        case 0x2baf68u: goto label_2baf68;
        case 0x2baf6cu: goto label_2baf6c;
        case 0x2baf70u: goto label_2baf70;
        case 0x2baf74u: goto label_2baf74;
        case 0x2baf78u: goto label_2baf78;
        case 0x2baf7cu: goto label_2baf7c;
        case 0x2baf80u: goto label_2baf80;
        case 0x2baf84u: goto label_2baf84;
        case 0x2baf88u: goto label_2baf88;
        case 0x2baf8cu: goto label_2baf8c;
        case 0x2baf90u: goto label_2baf90;
        case 0x2baf94u: goto label_2baf94;
        case 0x2baf98u: goto label_2baf98;
        case 0x2baf9cu: goto label_2baf9c;
        default: break;
    }

    ctx->pc = 0x2bae98u;

label_2bae98:
    // 0x2bae98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bae98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bae9c:
    // 0x2bae9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2baea0:
    // 0x2baea0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2baea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2baea4:
    // 0x2baea4: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_2baea8:
    if (ctx->pc == 0x2BAEA8u) {
        ctx->pc = 0x2BAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEA4u;
        // 0x2baea8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEACu;
        goto label_2baeac;
    }
    ctx->pc = 0x2BAEA4u;
    {
        const bool branch_taken_0x2baea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEA4u;
        // 0x2baea8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baea4) {
            ctx->pc = 0x2BAF84u;
            goto label_2baf84;
        }
    }
    ctx->pc = 0x2BAEACu;
label_2baeac:
    // 0x2baeac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2baeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2baeb0:
    // 0x2baeb0: 0x30420201  andi        $v0, $v0, 0x201
    ctx->pc = 0x2baeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)513);
label_2baeb4:
    // 0x2baeb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2baeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2baeb8:
    // 0x2baeb8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2baebc:
    if (ctx->pc == 0x2BAEBCu) {
        ctx->pc = 0x2BAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEB8u;
        // 0x2baebc: 0x9084000c  lbu         $a0, 0xC($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEC0u;
        goto label_2baec0;
    }
    ctx->pc = 0x2BAEB8u;
    {
        const bool branch_taken_0x2baeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2baeb8) {
            ctx->pc = 0x2BAEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAEB8u;
            // 0x2baebc: 0x9084000c  lbu         $a0, 0xC($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAF08u;
            goto label_2baf08;
        }
    }
    ctx->pc = 0x2BAEC0u;
label_2baec0:
    // 0x2baec0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2baec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2baec4:
    // 0x2baec4: 0x5470000d  bnel        $v1, $s0, . + 4 + (0xD << 2)
label_2baec8:
    if (ctx->pc == 0x2BAEC8u) {
        ctx->pc = 0x2BAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEC4u;
        // 0x2baec8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAECCu;
        goto label_2baecc;
    }
    ctx->pc = 0x2BAEC4u;
    {
        const bool branch_taken_0x2baec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2baec4) {
            ctx->pc = 0x2BAEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAEC4u;
            // 0x2baec8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAEFCu;
            goto label_2baefc;
        }
    }
    ctx->pc = 0x2BAECCu;
label_2baecc:
    // 0x2baecc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2baeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2baed0:
    // 0x2baed0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2baed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_2baed4:
    // 0x2baed4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2baed8:
    if (ctx->pc == 0x2BAED8u) {
        ctx->pc = 0x2BAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAED4u;
        // 0x2baed8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEDCu;
        goto label_2baedc;
    }
    ctx->pc = 0x2BAED4u;
    {
        const bool branch_taken_0x2baed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAED4u;
        // 0x2baed8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baed4) {
            ctx->pc = 0x2BAF04u;
            goto label_2baf04;
        }
    }
    ctx->pc = 0x2BAEDCu;
label_2baedc:
    // 0x2baedc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2baedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2baee0:
    // 0x2baee0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2baee4:
    if (ctx->pc == 0x2BAEE4u) {
        ctx->pc = 0x2BAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEE0u;
        // 0x2baee4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEE8u;
        goto label_2baee8;
    }
    ctx->pc = 0x2BAEE0u;
    {
        const bool branch_taken_0x2baee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEE0u;
        // 0x2baee4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baee0) {
            ctx->pc = 0x2BAF04u;
            goto label_2baf04;
        }
    }
    ctx->pc = 0x2BAEE8u;
label_2baee8:
    // 0x2baee8: 0x0  nop
    ctx->pc = 0x2baee8u;
    // NOP
label_2baeec:
    // 0x2baeec: 0x5050fffb  beql        $v0, $s0, . + 4 + (-0x5 << 2)
label_2baef0:
    if (ctx->pc == 0x2BAEF0u) {
        ctx->pc = 0x2BAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEECu;
        // 0x2baef0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEF4u;
        goto label_2baef4;
    }
    ctx->pc = 0x2BAEECu;
    {
        const bool branch_taken_0x2baeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2baeec) {
            ctx->pc = 0x2BAEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAEECu;
            // 0x2baef0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAEDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2baedc;
        }
    }
    ctx->pc = 0x2BAEF4u;
label_2baef4:
    // 0x2baef4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2baef4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baef8:
    // 0x2baef8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2baef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2baefc:
    // 0x2baefc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_2baf00:
    if (ctx->pc == 0x2BAF00u) {
        ctx->pc = 0x2BAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEFCu;
        // 0x2baf00: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF04u;
        goto label_2baf04;
    }
    ctx->pc = 0x2BAEFCu;
    {
        const bool branch_taken_0x2baefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2baefc) {
            ctx->pc = 0x2BAF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAEFCu;
            // 0x2baf00: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2baee8;
        }
    }
    ctx->pc = 0x2BAF04u;
label_2baf04:
    // 0x2baf04: 0x9084000c  lbu         $a0, 0xC($a0)
    ctx->pc = 0x2baf04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_2baf08:
    // 0x2baf08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2baf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2baf0c:
    // 0x2baf0c: 0x50820019  beql        $a0, $v0, . + 4 + (0x19 << 2)
label_2baf10:
    if (ctx->pc == 0x2BAF10u) {
        ctx->pc = 0x2BAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF0Cu;
        // 0x2baf10: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF14u;
        goto label_2baf14;
    }
    ctx->pc = 0x2BAF0Cu;
    {
        const bool branch_taken_0x2baf0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2baf0c) {
            ctx->pc = 0x2BAF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAF0Cu;
            // 0x2baf10: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAF74u;
            goto label_2baf74;
        }
    }
    ctx->pc = 0x2BAF14u;
label_2baf14:
    // 0x2baf14: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2baf14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_2baf18:
    // 0x2baf18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2baf1c:
    if (ctx->pc == 0x2BAF1Cu) {
        ctx->pc = 0x2BAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF18u;
        // 0x2baf1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF20u;
        goto label_2baf20;
    }
    ctx->pc = 0x2BAF18u;
    {
        const bool branch_taken_0x2baf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baf18) {
            ctx->pc = 0x2BAF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAF18u;
            // 0x2baf1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAF30u;
            goto label_2baf30;
        }
    }
    ctx->pc = 0x2BAF20u;
label_2baf20:
    // 0x2baf20: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2baf24:
    if (ctx->pc == 0x2BAF24u) {
        ctx->pc = 0x2BAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF20u;
        // 0x2baf24: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF28u;
        goto label_2baf28;
    }
    ctx->pc = 0x2BAF20u;
    {
        const bool branch_taken_0x2baf20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baf20) {
            ctx->pc = 0x2BAF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAF20u;
            // 0x2baf24: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAF40u;
            goto label_2baf40;
        }
    }
    ctx->pc = 0x2BAF28u;
label_2baf28:
    // 0x2baf28: 0x10000017  b           . + 4 + (0x17 << 2)
label_2baf2c:
    if (ctx->pc == 0x2BAF2Cu) {
        ctx->pc = 0x2BAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF28u;
        // 0x2baf2c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF30u;
        goto label_2baf30;
    }
    ctx->pc = 0x2BAF28u;
    {
        const bool branch_taken_0x2baf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF28u;
        // 0x2baf2c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf28) {
            ctx->pc = 0x2BAF88u;
            goto label_2baf88;
        }
    }
    ctx->pc = 0x2BAF30u;
label_2baf30:
    // 0x2baf30: 0x50820012  beql        $a0, $v0, . + 4 + (0x12 << 2)
label_2baf34:
    if (ctx->pc == 0x2BAF34u) {
        ctx->pc = 0x2BAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF30u;
        // 0x2baf34: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF38u;
        goto label_2baf38;
    }
    ctx->pc = 0x2BAF30u;
    {
        const bool branch_taken_0x2baf30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2baf30) {
            ctx->pc = 0x2BAF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAF30u;
            // 0x2baf34: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAF7Cu;
            goto label_2baf7c;
        }
    }
    ctx->pc = 0x2BAF38u;
label_2baf38:
    // 0x2baf38: 0x10000013  b           . + 4 + (0x13 << 2)
label_2baf3c:
    if (ctx->pc == 0x2BAF3Cu) {
        ctx->pc = 0x2BAF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF38u;
        // 0x2baf3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF40u;
        goto label_2baf40;
    }
    ctx->pc = 0x2BAF38u;
    {
        const bool branch_taken_0x2baf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF38u;
        // 0x2baf3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf38) {
            ctx->pc = 0x2BAF88u;
            goto label_2baf88;
        }
    }
    ctx->pc = 0x2BAF40u;
label_2baf40:
    // 0x2baf40: 0x30420201  andi        $v0, $v0, 0x201
    ctx->pc = 0x2baf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)513);
label_2baf44:
    // 0x2baf44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2baf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2baf48:
    // 0x2baf48: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2baf4c:
    if (ctx->pc == 0x2BAF4Cu) {
        ctx->pc = 0x2BAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF48u;
        // 0x2baf4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF50u;
        goto label_2baf50;
    }
    ctx->pc = 0x2BAF48u;
    {
        const bool branch_taken_0x2baf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2baf48) {
            ctx->pc = 0x2BAF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAF48u;
            // 0x2baf4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAF88u;
            goto label_2baf88;
        }
    }
    ctx->pc = 0x2BAF50u;
label_2baf50:
    // 0x2baf50: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2baf54:
    if (ctx->pc == 0x2BAF54u) {
        ctx->pc = 0x2BAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF50u;
        // 0x2baf54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF58u;
        goto label_2baf58;
    }
    ctx->pc = 0x2BAF50u;
    {
        const bool branch_taken_0x2baf50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF50u;
        // 0x2baf54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf50) {
            ctx->pc = 0x2BAF6Cu;
            goto label_2baf6c;
        }
    }
    ctx->pc = 0x2BAF58u;
label_2baf58:
    // 0x2baf58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2baf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2baf5c:
    // 0x2baf5c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2baf5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2baf60:
    // 0x2baf60: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2baf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2baf64:
    // 0x2baf64: 0x60f809  jalr        $v1
label_2baf68:
    if (ctx->pc == 0x2BAF68u) {
        ctx->pc = 0x2BAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF64u;
        // 0x2baf68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF6Cu;
        goto label_2baf6c;
    }
    ctx->pc = 0x2BAF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BAF6Cu);
        ctx->pc = 0x2BAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF64u;
        // 0x2baf68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAF64u, 0x2BAF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAF6Cu;
label_2baf6c:
    // 0x2baf6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2baf70:
    if (ctx->pc == 0x2BAF70u) {
        ctx->pc = 0x2BAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF6Cu;
        // 0x2baf70: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF74u;
        goto label_2baf74;
    }
    ctx->pc = 0x2BAF6Cu;
    {
        const bool branch_taken_0x2baf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF6Cu;
        // 0x2baf70: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf6c) {
            ctx->pc = 0x2BAF84u;
            goto label_2baf84;
        }
    }
    ctx->pc = 0x2BAF74u;
label_2baf74:
    // 0x2baf74: 0x10000002  b           . + 4 + (0x2 << 2)
label_2baf78:
    if (ctx->pc == 0x2BAF78u) {
        ctx->pc = 0x2BAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF74u;
        // 0x2baf78: 0x34420600  ori         $v0, $v0, 0x600 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF7Cu;
        goto label_2baf7c;
    }
    ctx->pc = 0x2BAF74u;
    {
        const bool branch_taken_0x2baf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF74u;
        // 0x2baf78: 0x34420600  ori         $v0, $v0, 0x600 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf74) {
            ctx->pc = 0x2BAF80u;
            goto label_2baf80;
        }
    }
    ctx->pc = 0x2BAF7Cu;
label_2baf7c:
    // 0x2baf7c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2baf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_2baf80:
    // 0x2baf80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2baf80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2baf84:
    // 0x2baf84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2baf84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2baf88:
    // 0x2baf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2baf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2baf8c:
    // 0x2baf8c: 0x3e00008  jr          $ra
label_2baf90:
    if (ctx->pc == 0x2BAF90u) {
        ctx->pc = 0x2BAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF8Cu;
        // 0x2baf90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF94u;
        goto label_2baf94;
    }
    ctx->pc = 0x2BAF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF8Cu;
        // 0x2baf90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAF94u;
label_2baf94:
    // 0x2baf94: 0x0  nop
    ctx->pc = 0x2baf94u;
    // NOP
label_2baf98:
    // 0x2baf98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2baf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2baf9c:
    // 0x2baf9c: 0x0  nop
    ctx->pc = 0x2baf9cu;
    // NOP
    ctx->pc = 0x2bafa0u;
}
