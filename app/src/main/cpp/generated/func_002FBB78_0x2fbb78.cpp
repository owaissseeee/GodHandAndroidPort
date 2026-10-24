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

// Function: func_002FBB78
// Address: 0x2fbb78 - 0x2fbcc8
void func_002FBB78_0x2fbb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FBB78_0x2fbb78");
#endif

    switch (ctx->pc) {
        case 0x2fbb78u: goto label_2fbb78;
        case 0x2fbb7cu: goto label_2fbb7c;
        case 0x2fbb80u: goto label_2fbb80;
        case 0x2fbb84u: goto label_2fbb84;
        case 0x2fbb88u: goto label_2fbb88;
        case 0x2fbb8cu: goto label_2fbb8c;
        case 0x2fbb90u: goto label_2fbb90;
        case 0x2fbb94u: goto label_2fbb94;
        case 0x2fbb98u: goto label_2fbb98;
        case 0x2fbb9cu: goto label_2fbb9c;
        case 0x2fbba0u: goto label_2fbba0;
        case 0x2fbba4u: goto label_2fbba4;
        case 0x2fbba8u: goto label_2fbba8;
        case 0x2fbbacu: goto label_2fbbac;
        case 0x2fbbb0u: goto label_2fbbb0;
        case 0x2fbbb4u: goto label_2fbbb4;
        case 0x2fbbb8u: goto label_2fbbb8;
        case 0x2fbbbcu: goto label_2fbbbc;
        case 0x2fbbc0u: goto label_2fbbc0;
        case 0x2fbbc4u: goto label_2fbbc4;
        case 0x2fbbc8u: goto label_2fbbc8;
        case 0x2fbbccu: goto label_2fbbcc;
        case 0x2fbbd0u: goto label_2fbbd0;
        case 0x2fbbd4u: goto label_2fbbd4;
        case 0x2fbbd8u: goto label_2fbbd8;
        case 0x2fbbdcu: goto label_2fbbdc;
        case 0x2fbbe0u: goto label_2fbbe0;
        case 0x2fbbe4u: goto label_2fbbe4;
        case 0x2fbbe8u: goto label_2fbbe8;
        case 0x2fbbecu: goto label_2fbbec;
        case 0x2fbbf0u: goto label_2fbbf0;
        case 0x2fbbf4u: goto label_2fbbf4;
        case 0x2fbbf8u: goto label_2fbbf8;
        case 0x2fbbfcu: goto label_2fbbfc;
        case 0x2fbc00u: goto label_2fbc00;
        case 0x2fbc04u: goto label_2fbc04;
        case 0x2fbc08u: goto label_2fbc08;
        case 0x2fbc0cu: goto label_2fbc0c;
        case 0x2fbc10u: goto label_2fbc10;
        case 0x2fbc14u: goto label_2fbc14;
        case 0x2fbc18u: goto label_2fbc18;
        case 0x2fbc1cu: goto label_2fbc1c;
        case 0x2fbc20u: goto label_2fbc20;
        case 0x2fbc24u: goto label_2fbc24;
        case 0x2fbc28u: goto label_2fbc28;
        case 0x2fbc2cu: goto label_2fbc2c;
        case 0x2fbc30u: goto label_2fbc30;
        case 0x2fbc34u: goto label_2fbc34;
        case 0x2fbc38u: goto label_2fbc38;
        case 0x2fbc3cu: goto label_2fbc3c;
        case 0x2fbc40u: goto label_2fbc40;
        case 0x2fbc44u: goto label_2fbc44;
        case 0x2fbc48u: goto label_2fbc48;
        case 0x2fbc4cu: goto label_2fbc4c;
        case 0x2fbc50u: goto label_2fbc50;
        case 0x2fbc54u: goto label_2fbc54;
        case 0x2fbc58u: goto label_2fbc58;
        case 0x2fbc5cu: goto label_2fbc5c;
        case 0x2fbc60u: goto label_2fbc60;
        case 0x2fbc64u: goto label_2fbc64;
        case 0x2fbc68u: goto label_2fbc68;
        case 0x2fbc6cu: goto label_2fbc6c;
        case 0x2fbc70u: goto label_2fbc70;
        case 0x2fbc74u: goto label_2fbc74;
        case 0x2fbc78u: goto label_2fbc78;
        case 0x2fbc7cu: goto label_2fbc7c;
        case 0x2fbc80u: goto label_2fbc80;
        case 0x2fbc84u: goto label_2fbc84;
        case 0x2fbc88u: goto label_2fbc88;
        case 0x2fbc8cu: goto label_2fbc8c;
        case 0x2fbc90u: goto label_2fbc90;
        case 0x2fbc94u: goto label_2fbc94;
        case 0x2fbc98u: goto label_2fbc98;
        case 0x2fbc9cu: goto label_2fbc9c;
        case 0x2fbca0u: goto label_2fbca0;
        case 0x2fbca4u: goto label_2fbca4;
        case 0x2fbca8u: goto label_2fbca8;
        case 0x2fbcacu: goto label_2fbcac;
        case 0x2fbcb0u: goto label_2fbcb0;
        case 0x2fbcb4u: goto label_2fbcb4;
        case 0x2fbcb8u: goto label_2fbcb8;
        case 0x2fbcbcu: goto label_2fbcbc;
        case 0x2fbcc0u: goto label_2fbcc0;
        case 0x2fbcc4u: goto label_2fbcc4;
        default: break;
    }

    ctx->pc = 0x2fbb78u;

label_2fbb78:
    // 0x2fbb78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2fbb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2fbb7c:
    // 0x2fbb7c: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
label_2fbb80:
    // 0x2fbb80: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2fbb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2fbb84:
    // 0x2fbb84: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2fbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_2fbb88:
    // 0x2fbb88: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2fbb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2fbb8c:
    // 0x2fbb8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fbb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbb90:
    // 0x2fbb90: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2fbb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2fbb94:
    // 0x2fbb94: 0x2471b7c0  addiu       $s1, $v1, -0x4840
    ctx->pc = 0x2fbb94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948800));
label_2fbb98:
    // 0x2fbb98: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2fbb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2fbb9c:
    // 0x2fbb9c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2fbb9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2fbba0:
    // 0x2fbba0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2fbba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2fbba4:
    // 0x2fbba4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2fbba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fbba8:
    // 0x2fbba8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2fbba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2fbbac:
    // 0x2fbbac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2fbbacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbbb0:
    // 0x2fbbb0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2fbbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2fbbb4:
    // 0x2fbbb4: 0x30d500ff  andi        $s5, $a2, 0xFF
    ctx->pc = 0x2fbbb4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2fbbb8:
    // 0x2fbbb8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2fbbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2fbbbc:
    // 0x2fbbbc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2fbbbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fbbc0:
    // 0x2fbbc0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2fbbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2fbbc4:
    // 0x2fbbc4: 0x3c178000  lui         $s7, 0x8000
    ctx->pc = 0x2fbbc4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32768 << 16));
label_2fbbc8:
    // 0x2fbbc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fbbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fbbcc:
    // 0x2fbbcc: 0x245eb8c0  addiu       $fp, $v0, -0x4740
    ctx->pc = 0x2fbbccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
label_2fbbd0:
    // 0x2fbbd0: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x2fbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_2fbbd4:
    // 0x2fbbd4: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x2fbbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_2fbbd8:
    // 0x2fbbd8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2fbbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fbbdc:
    // 0x2fbbdc: 0x972006  srlv        $a0, $s7, $a0
    ctx->pc = 0x2fbbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 23), GPR_U32(ctx, 4) & 0x1F));
label_2fbbe0:
    // 0x2fbbe0: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
label_2fbbe4:
    // 0x2fbbe4: 0x2442b7c0  addiu       $v0, $v0, -0x4840
    ctx->pc = 0x2fbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
label_2fbbe8:
    // 0x2fbbe8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2fbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2fbbec:
    // 0x2fbbec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fbbf0:
    // 0x2fbbf0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fbbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2fbbf4:
    // 0x2fbbf4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2fbbf8:
    if (ctx->pc == 0x2FBBF8u) {
        ctx->pc = 0x2FBBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBF4u;
        // 0x2fbbf8: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBBFCu;
        goto label_2fbbfc;
    }
    ctx->pc = 0x2FBBF4u;
    {
        const bool branch_taken_0x2fbbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBF4u;
        // 0x2fbbf8: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbf4) {
            ctx->pc = 0x2FBC80u;
            goto label_2fbc80;
        }
    }
    ctx->pc = 0x2FBBFCu;
label_2fbbfc:
    // 0x2fbbfc: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x2fbbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
label_2fbc00:
    // 0x2fbc00: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2fbc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2fbc04:
    // 0x2fbc04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fbc08:
    // 0x2fbc08: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fbc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2fbc0c:
    // 0x2fbc0c: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_2fbc10:
    if (ctx->pc == 0x2FBC10u) {
        ctx->pc = 0x2FBC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC0Cu;
        // 0x2fbc10: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC14u;
        goto label_2fbc14;
    }
    ctx->pc = 0x2FBC0Cu;
    {
        const bool branch_taken_0x2fbc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbc0c) {
            ctx->pc = 0x2FBC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBC0Cu;
            // 0x2fbc10: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC84u;
            goto label_2fbc84;
        }
    }
    ctx->pc = 0x2FBC14u;
label_2fbc14:
    // 0x2fbc14: 0xbe1821  addu        $v1, $a1, $fp
    ctx->pc = 0x2fbc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_2fbc18:
    // 0x2fbc18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fbc1c:
    // 0x2fbc1c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fbc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2fbc20:
    // 0x2fbc20: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2fbc24:
    if (ctx->pc == 0x2FBC24u) {
        ctx->pc = 0x2FBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC20u;
        // 0x2fbc24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC28u;
        goto label_2fbc28;
    }
    ctx->pc = 0x2FBC20u;
    {
        const bool branch_taken_0x2fbc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbc20) {
            ctx->pc = 0x2FBC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBC20u;
            // 0x2fbc24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC84u;
            goto label_2fbc84;
        }
    }
    ctx->pc = 0x2FBC28u;
label_2fbc28:
    // 0x2fbc28: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_2fbc2c:
    if (ctx->pc == 0x2FBC2Cu) {
        ctx->pc = 0x2FBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC28u;
        // 0x2fbc2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC30u;
        goto label_2fbc30;
    }
    ctx->pc = 0x2FBC28u;
    {
        const bool branch_taken_0x2fbc28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC28u;
        // 0x2fbc2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc28) {
            ctx->pc = 0x2FBC48u;
            goto label_2fbc48;
        }
    }
    ctx->pc = 0x2FBC30u;
label_2fbc30:
    // 0x2fbc30: 0x8622023a  lh          $v0, 0x23A($s1)
    ctx->pc = 0x2fbc30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 570)));
label_2fbc34:
    // 0x2fbc34: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
label_2fbc38:
    if (ctx->pc == 0x2FBC38u) {
        ctx->pc = 0x2FBC3Cu;
        goto label_2fbc3c;
    }
    ctx->pc = 0x2FBC34u;
    {
        const bool branch_taken_0x2fbc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2fbc34) {
            ctx->pc = 0x2FBC48u;
            goto label_2fbc48;
        }
    }
    ctx->pc = 0x2FBC3Cu;
label_2fbc3c:
    // 0x2fbc3c: 0x9622023c  lhu         $v0, 0x23C($s1)
    ctx->pc = 0x2fbc3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
label_2fbc40:
    // 0x2fbc40: 0x5053000a  beql        $v0, $s3, . + 4 + (0xA << 2)
label_2fbc44:
    if (ctx->pc == 0x2FBC44u) {
        ctx->pc = 0x2FBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC40u;
        // 0x2fbc44: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC48u;
        goto label_2fbc48;
    }
    ctx->pc = 0x2FBC40u;
    {
        const bool branch_taken_0x2fbc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2fbc40) {
            ctx->pc = 0x2FBC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBC40u;
            // 0x2fbc44: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC6Cu;
            goto label_2fbc6c;
        }
    }
    ctx->pc = 0x2FBC48u;
label_2fbc48:
    // 0x2fbc48: 0x5656000e  bnel        $s2, $s6, . + 4 + (0xE << 2)
label_2fbc4c:
    if (ctx->pc == 0x2FBC4Cu) {
        ctx->pc = 0x2FBC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC48u;
        // 0x2fbc4c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC50u;
        goto label_2fbc50;
    }
    ctx->pc = 0x2FBC48u;
    {
        const bool branch_taken_0x2fbc48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        if (branch_taken_0x2fbc48) {
            ctx->pc = 0x2FBC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBC48u;
            // 0x2fbc4c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC84u;
            goto label_2fbc84;
        }
    }
    ctx->pc = 0x2FBC50u;
label_2fbc50:
    // 0x2fbc50: 0x84c2023a  lh          $v0, 0x23A($a2)
    ctx->pc = 0x2fbc50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 570)));
label_2fbc54:
    // 0x2fbc54: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
label_2fbc58:
    if (ctx->pc == 0x2FBC58u) {
        ctx->pc = 0x2FBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC54u;
        // 0x2fbc58: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC5Cu;
        goto label_2fbc5c;
    }
    ctx->pc = 0x2FBC54u;
    {
        const bool branch_taken_0x2fbc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2fbc54) {
            ctx->pc = 0x2FBC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBC54u;
            // 0x2fbc58: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC6Cu;
            goto label_2fbc6c;
        }
    }
    ctx->pc = 0x2FBC5Cu;
label_2fbc5c:
    // 0x2fbc5c: 0x94c2023c  lhu         $v0, 0x23C($a2)
    ctx->pc = 0x2fbc5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 572)));
label_2fbc60:
    // 0x2fbc60: 0x50530008  beql        $v0, $s3, . + 4 + (0x8 << 2)
label_2fbc64:
    if (ctx->pc == 0x2FBC64u) {
        ctx->pc = 0x2FBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC60u;
        // 0x2fbc64: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC68u;
        goto label_2fbc68;
    }
    ctx->pc = 0x2FBC60u;
    {
        const bool branch_taken_0x2fbc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2fbc60) {
            ctx->pc = 0x2FBC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBC60u;
            // 0x2fbc64: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC84u;
            goto label_2fbc84;
        }
    }
    ctx->pc = 0x2FBC68u;
label_2fbc68:
    // 0x2fbc68: 0x8cc200f0  lw          $v0, 0xF0($a2)
    ctx->pc = 0x2fbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_2fbc6c:
    // 0x2fbc6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2fbc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2fbc70:
    // 0x2fbc70: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2fbc70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2fbc74:
    // 0x2fbc74: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2fbc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2fbc78:
    // 0x2fbc78: 0x60f809  jalr        $v1
label_2fbc7c:
    if (ctx->pc == 0x2FBC7Cu) {
        ctx->pc = 0x2FBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC78u;
        // 0x2fbc7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC80u;
        goto label_2fbc80;
    }
    ctx->pc = 0x2FBC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FBC80u);
        ctx->pc = 0x2FBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC78u;
        // 0x2fbc7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBC78u, 0x2FBC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FBC80u;
label_2fbc80:
    // 0x2fbc80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fbc80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fbc84:
    // 0x2fbc84: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x2fbc84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
label_2fbc88:
    // 0x2fbc88: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_2fbc8c:
    if (ctx->pc == 0x2FBC8Cu) {
        ctx->pc = 0x2FBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC88u;
        // 0x2fbc8c: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC90u;
        goto label_2fbc90;
    }
    ctx->pc = 0x2FBC88u;
    {
        const bool branch_taken_0x2fbc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC88u;
        // 0x2fbc8c: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc88) {
            ctx->pc = 0x2FBBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbbd0;
        }
    }
    ctx->pc = 0x2FBC90u;
label_2fbc90:
    // 0x2fbc90: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2fbc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2fbc94:
    // 0x2fbc94: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2fbc94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2fbc98:
    // 0x2fbc98: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2fbc98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2fbc9c:
    // 0x2fbc9c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2fbc9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fbca0:
    // 0x2fbca0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2fbca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2fbca4:
    // 0x2fbca4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2fbca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fbca8:
    // 0x2fbca8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2fbca8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fbcac:
    // 0x2fbcac: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2fbcacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbcb0:
    // 0x2fbcb0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2fbcb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbcb4:
    // 0x2fbcb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fbcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbcb8:
    // 0x2fbcb8: 0x3e00008  jr          $ra
label_2fbcbc:
    if (ctx->pc == 0x2FBCBCu) {
        ctx->pc = 0x2FBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCB8u;
        // 0x2fbcbc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBCC0u;
        goto label_2fbcc0;
    }
    ctx->pc = 0x2FBCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCB8u;
        // 0x2fbcbc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBCC0u;
label_2fbcc0:
    // 0x2fbcc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2fbcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2fbcc4:
    // 0x2fbcc4: 0x0  nop
    ctx->pc = 0x2fbcc4u;
    // NOP
    ctx->pc = 0x2fbcc8u;
}
