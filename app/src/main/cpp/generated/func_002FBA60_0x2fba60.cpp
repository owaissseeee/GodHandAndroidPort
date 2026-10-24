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

// Function: func_002FBA60
// Address: 0x2fba60 - 0x2fbb78
void func_002FBA60_0x2fba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FBA60_0x2fba60");
#endif

    switch (ctx->pc) {
        case 0x2fba60u: goto label_2fba60;
        case 0x2fba64u: goto label_2fba64;
        case 0x2fba68u: goto label_2fba68;
        case 0x2fba6cu: goto label_2fba6c;
        case 0x2fba70u: goto label_2fba70;
        case 0x2fba74u: goto label_2fba74;
        case 0x2fba78u: goto label_2fba78;
        case 0x2fba7cu: goto label_2fba7c;
        case 0x2fba80u: goto label_2fba80;
        case 0x2fba84u: goto label_2fba84;
        case 0x2fba88u: goto label_2fba88;
        case 0x2fba8cu: goto label_2fba8c;
        case 0x2fba90u: goto label_2fba90;
        case 0x2fba94u: goto label_2fba94;
        case 0x2fba98u: goto label_2fba98;
        case 0x2fba9cu: goto label_2fba9c;
        case 0x2fbaa0u: goto label_2fbaa0;
        case 0x2fbaa4u: goto label_2fbaa4;
        case 0x2fbaa8u: goto label_2fbaa8;
        case 0x2fbaacu: goto label_2fbaac;
        case 0x2fbab0u: goto label_2fbab0;
        case 0x2fbab4u: goto label_2fbab4;
        case 0x2fbab8u: goto label_2fbab8;
        case 0x2fbabcu: goto label_2fbabc;
        case 0x2fbac0u: goto label_2fbac0;
        case 0x2fbac4u: goto label_2fbac4;
        case 0x2fbac8u: goto label_2fbac8;
        case 0x2fbaccu: goto label_2fbacc;
        case 0x2fbad0u: goto label_2fbad0;
        case 0x2fbad4u: goto label_2fbad4;
        case 0x2fbad8u: goto label_2fbad8;
        case 0x2fbadcu: goto label_2fbadc;
        case 0x2fbae0u: goto label_2fbae0;
        case 0x2fbae4u: goto label_2fbae4;
        case 0x2fbae8u: goto label_2fbae8;
        case 0x2fbaecu: goto label_2fbaec;
        case 0x2fbaf0u: goto label_2fbaf0;
        case 0x2fbaf4u: goto label_2fbaf4;
        case 0x2fbaf8u: goto label_2fbaf8;
        case 0x2fbafcu: goto label_2fbafc;
        case 0x2fbb00u: goto label_2fbb00;
        case 0x2fbb04u: goto label_2fbb04;
        case 0x2fbb08u: goto label_2fbb08;
        case 0x2fbb0cu: goto label_2fbb0c;
        case 0x2fbb10u: goto label_2fbb10;
        case 0x2fbb14u: goto label_2fbb14;
        case 0x2fbb18u: goto label_2fbb18;
        case 0x2fbb1cu: goto label_2fbb1c;
        case 0x2fbb20u: goto label_2fbb20;
        case 0x2fbb24u: goto label_2fbb24;
        case 0x2fbb28u: goto label_2fbb28;
        case 0x2fbb2cu: goto label_2fbb2c;
        case 0x2fbb30u: goto label_2fbb30;
        case 0x2fbb34u: goto label_2fbb34;
        case 0x2fbb38u: goto label_2fbb38;
        case 0x2fbb3cu: goto label_2fbb3c;
        case 0x2fbb40u: goto label_2fbb40;
        case 0x2fbb44u: goto label_2fbb44;
        case 0x2fbb48u: goto label_2fbb48;
        case 0x2fbb4cu: goto label_2fbb4c;
        case 0x2fbb50u: goto label_2fbb50;
        case 0x2fbb54u: goto label_2fbb54;
        case 0x2fbb58u: goto label_2fbb58;
        case 0x2fbb5cu: goto label_2fbb5c;
        case 0x2fbb60u: goto label_2fbb60;
        case 0x2fbb64u: goto label_2fbb64;
        case 0x2fbb68u: goto label_2fbb68;
        case 0x2fbb6cu: goto label_2fbb6c;
        case 0x2fbb70u: goto label_2fbb70;
        case 0x2fbb74u: goto label_2fbb74;
        default: break;
    }

    ctx->pc = 0x2fba60u;

label_2fba60:
    // 0x2fba60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2fba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2fba64:
    // 0x2fba64: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fba64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
label_2fba68:
    // 0x2fba68: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2fba68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
label_2fba6c:
    // 0x2fba6c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2fba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2fba70:
    // 0x2fba70: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2fba70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2fba74:
    // 0x2fba74: 0x2477b840  addiu       $s7, $v1, -0x47C0
    ctx->pc = 0x2fba74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
label_2fba78:
    // 0x2fba78: 0x245eb7c0  addiu       $fp, $v0, -0x4840
    ctx->pc = 0x2fba78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
label_2fba7c:
    // 0x2fba7c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2fba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2fba80:
    // 0x2fba80: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2fba80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2fba84:
    // 0x2fba84: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fba84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
label_2fba88:
    // 0x2fba88: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2fba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2fba8c:
    // 0x2fba8c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2fba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_2fba90:
    // 0x2fba90: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2fba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2fba94:
    // 0x2fba94: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x2fba94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2fba98:
    // 0x2fba98: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2fba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2fba9c:
    // 0x2fba9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2fba9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fbaa0:
    // 0x2fbaa0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2fbaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2fbaa4:
    // 0x2fbaa4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2fbaa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbaa8:
    // 0x2fbaa8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2fbaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2fbaac:
    // 0x2fbaac: 0x2470b7c0  addiu       $s0, $v1, -0x4840
    ctx->pc = 0x2fbaacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948800));
label_2fbab0:
    // 0x2fbab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fbab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fbab4:
    // 0x2fbab4: 0x2456b8c0  addiu       $s6, $v0, -0x4740
    ctx->pc = 0x2fbab4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
label_2fbab8:
    // 0x2fbab8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fbab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbabc:
    // 0x2fbabc: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x2fbabcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_2fbac0:
    // 0x2fbac0: 0x111142  srl         $v0, $s1, 5
    ctx->pc = 0x2fbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
label_2fbac4:
    // 0x2fbac4: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x2fbac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
label_2fbac8:
    // 0x2fbac8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2fbac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fbacc:
    // 0x2fbacc: 0x952006  srlv        $a0, $s5, $a0
    ctx->pc = 0x2fbaccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), GPR_U32(ctx, 4) & 0x1F));
label_2fbad0:
    // 0x2fbad0: 0xbe1821  addu        $v1, $a1, $fp
    ctx->pc = 0x2fbad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_2fbad4:
    // 0x2fbad4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fbad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fbad8:
    // 0x2fbad8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fbad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2fbadc:
    // 0x2fbadc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2fbae0:
    if (ctx->pc == 0x2FBAE0u) {
        ctx->pc = 0x2FBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBADCu;
        // 0x2fbae0: 0xb71821  addu        $v1, $a1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBAE4u;
        goto label_2fbae4;
    }
    ctx->pc = 0x2FBADCu;
    {
        const bool branch_taken_0x2fbadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBADCu;
        // 0x2fbae0: 0xb71821  addu        $v1, $a1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbadc) {
            ctx->pc = 0x2FBB38u;
            goto label_2fbb38;
        }
    }
    ctx->pc = 0x2FBAE4u;
label_2fbae4:
    // 0x2fbae4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fbae8:
    // 0x2fbae8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fbae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2fbaec:
    // 0x2fbaec: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2fbaf0:
    if (ctx->pc == 0x2FBAF0u) {
        ctx->pc = 0x2FBAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAECu;
        // 0x2fbaf0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBAF4u;
        goto label_2fbaf4;
    }
    ctx->pc = 0x2FBAECu;
    {
        const bool branch_taken_0x2fbaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbaec) {
            ctx->pc = 0x2FBAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBAECu;
            // 0x2fbaf0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBB3Cu;
            goto label_2fbb3c;
        }
    }
    ctx->pc = 0x2FBAF4u;
label_2fbaf4:
    // 0x2fbaf4: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x2fbaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_2fbaf8:
    // 0x2fbaf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fbafc:
    // 0x2fbafc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fbafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2fbb00:
    // 0x2fbb00: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2fbb04:
    if (ctx->pc == 0x2FBB04u) {
        ctx->pc = 0x2FBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB00u;
        // 0x2fbb04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBB08u;
        goto label_2fbb08;
    }
    ctx->pc = 0x2FBB00u;
    {
        const bool branch_taken_0x2fbb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbb00) {
            ctx->pc = 0x2FBB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBB00u;
            // 0x2fbb04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBB3Cu;
            goto label_2fbb3c;
        }
    }
    ctx->pc = 0x2FBB08u;
label_2fbb08:
    // 0x2fbb08: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2fbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2fbb0c:
    // 0x2fbb0c: 0x5453000b  bnel        $v0, $s3, . + 4 + (0xB << 2)
label_2fbb10:
    if (ctx->pc == 0x2FBB10u) {
        ctx->pc = 0x2FBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB0Cu;
        // 0x2fbb10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBB14u;
        goto label_2fbb14;
    }
    ctx->pc = 0x2FBB0Cu;
    {
        const bool branch_taken_0x2fbb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2fbb0c) {
            ctx->pc = 0x2FBB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBB0Cu;
            // 0x2fbb10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBB3Cu;
            goto label_2fbb3c;
        }
    }
    ctx->pc = 0x2FBB14u;
label_2fbb14:
    // 0x2fbb14: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2fbb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2fbb18:
    // 0x2fbb18: 0x54540008  bnel        $v0, $s4, . + 4 + (0x8 << 2)
label_2fbb1c:
    if (ctx->pc == 0x2FBB1Cu) {
        ctx->pc = 0x2FBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB18u;
        // 0x2fbb1c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBB20u;
        goto label_2fbb20;
    }
    ctx->pc = 0x2FBB18u;
    {
        const bool branch_taken_0x2fbb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2fbb18) {
            ctx->pc = 0x2FBB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBB18u;
            // 0x2fbb1c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBB3Cu;
            goto label_2fbb3c;
        }
    }
    ctx->pc = 0x2FBB20u;
label_2fbb20:
    // 0x2fbb20: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2fbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2fbb24:
    // 0x2fbb24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fbb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fbb28:
    // 0x2fbb28: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2fbb28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2fbb2c:
    // 0x2fbb2c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2fbb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2fbb30:
    // 0x2fbb30: 0x60f809  jalr        $v1
label_2fbb34:
    if (ctx->pc == 0x2FBB34u) {
        ctx->pc = 0x2FBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB30u;
        // 0x2fbb34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBB38u;
        goto label_2fbb38;
    }
    ctx->pc = 0x2FBB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FBB38u);
        ctx->pc = 0x2FBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB30u;
        // 0x2fbb34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBB30u, 0x2FBB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FBB38u;
label_2fbb38:
    // 0x2fbb38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fbb38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2fbb3c:
    // 0x2fbb3c: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x2fbb3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
label_2fbb40:
    // 0x2fbb40: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_2fbb44:
    if (ctx->pc == 0x2FBB44u) {
        ctx->pc = 0x2FBB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB40u;
        // 0x2fbb44: 0x26100400  addiu       $s0, $s0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBB48u;
        goto label_2fbb48;
    }
    ctx->pc = 0x2FBB40u;
    {
        const bool branch_taken_0x2fbb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB40u;
        // 0x2fbb44: 0x26100400  addiu       $s0, $s0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb40) {
            ctx->pc = 0x2FBAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbac0;
        }
    }
    ctx->pc = 0x2FBB48u;
label_2fbb48:
    // 0x2fbb48: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2fbb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2fbb4c:
    // 0x2fbb4c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2fbb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2fbb50:
    // 0x2fbb50: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2fbb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2fbb54:
    // 0x2fbb54: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2fbb54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fbb58:
    // 0x2fbb58: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2fbb58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2fbb5c:
    // 0x2fbb5c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2fbb5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fbb60:
    // 0x2fbb60: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2fbb60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fbb64:
    // 0x2fbb64: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2fbb64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbb68:
    // 0x2fbb68: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2fbb68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbb6c:
    // 0x2fbb6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fbb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbb70:
    // 0x2fbb70: 0x3e00008  jr          $ra
label_2fbb74:
    if (ctx->pc == 0x2FBB74u) {
        ctx->pc = 0x2FBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB70u;
        // 0x2fbb74: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBB78u;
        goto label_fallthrough_0x2fbb70;
    }
    ctx->pc = 0x2FBB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB70u;
        // 0x2fbb74: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fbb70:
    ctx->pc = 0x2FBB78u;
}
