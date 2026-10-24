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

// Function: func_0032CC90
// Address: 0x32cc90 - 0x32ce98
void func_0032CC90_0x32cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032CC90_0x32cc90");
#endif

    switch (ctx->pc) {
        case 0x32cc90u: goto label_32cc90;
        case 0x32cc94u: goto label_32cc94;
        case 0x32cc98u: goto label_32cc98;
        case 0x32cc9cu: goto label_32cc9c;
        case 0x32cca0u: goto label_32cca0;
        case 0x32cca4u: goto label_32cca4;
        case 0x32cca8u: goto label_32cca8;
        case 0x32ccacu: goto label_32ccac;
        case 0x32ccb0u: goto label_32ccb0;
        case 0x32ccb4u: goto label_32ccb4;
        case 0x32ccb8u: goto label_32ccb8;
        case 0x32ccbcu: goto label_32ccbc;
        case 0x32ccc0u: goto label_32ccc0;
        case 0x32ccc4u: goto label_32ccc4;
        case 0x32ccc8u: goto label_32ccc8;
        case 0x32ccccu: goto label_32cccc;
        case 0x32ccd0u: goto label_32ccd0;
        case 0x32ccd4u: goto label_32ccd4;
        case 0x32ccd8u: goto label_32ccd8;
        case 0x32ccdcu: goto label_32ccdc;
        case 0x32cce0u: goto label_32cce0;
        case 0x32cce4u: goto label_32cce4;
        case 0x32cce8u: goto label_32cce8;
        case 0x32ccecu: goto label_32ccec;
        case 0x32ccf0u: goto label_32ccf0;
        case 0x32ccf4u: goto label_32ccf4;
        case 0x32ccf8u: goto label_32ccf8;
        case 0x32ccfcu: goto label_32ccfc;
        case 0x32cd00u: goto label_32cd00;
        case 0x32cd04u: goto label_32cd04;
        case 0x32cd08u: goto label_32cd08;
        case 0x32cd0cu: goto label_32cd0c;
        case 0x32cd10u: goto label_32cd10;
        case 0x32cd14u: goto label_32cd14;
        case 0x32cd18u: goto label_32cd18;
        case 0x32cd1cu: goto label_32cd1c;
        case 0x32cd20u: goto label_32cd20;
        case 0x32cd24u: goto label_32cd24;
        case 0x32cd28u: goto label_32cd28;
        case 0x32cd2cu: goto label_32cd2c;
        case 0x32cd30u: goto label_32cd30;
        case 0x32cd34u: goto label_32cd34;
        case 0x32cd38u: goto label_32cd38;
        case 0x32cd3cu: goto label_32cd3c;
        case 0x32cd40u: goto label_32cd40;
        case 0x32cd44u: goto label_32cd44;
        case 0x32cd48u: goto label_32cd48;
        case 0x32cd4cu: goto label_32cd4c;
        case 0x32cd50u: goto label_32cd50;
        case 0x32cd54u: goto label_32cd54;
        case 0x32cd58u: goto label_32cd58;
        case 0x32cd5cu: goto label_32cd5c;
        case 0x32cd60u: goto label_32cd60;
        case 0x32cd64u: goto label_32cd64;
        case 0x32cd68u: goto label_32cd68;
        case 0x32cd6cu: goto label_32cd6c;
        case 0x32cd70u: goto label_32cd70;
        case 0x32cd74u: goto label_32cd74;
        case 0x32cd78u: goto label_32cd78;
        case 0x32cd7cu: goto label_32cd7c;
        case 0x32cd80u: goto label_32cd80;
        case 0x32cd84u: goto label_32cd84;
        case 0x32cd88u: goto label_32cd88;
        case 0x32cd8cu: goto label_32cd8c;
        case 0x32cd90u: goto label_32cd90;
        case 0x32cd94u: goto label_32cd94;
        case 0x32cd98u: goto label_32cd98;
        case 0x32cd9cu: goto label_32cd9c;
        case 0x32cda0u: goto label_32cda0;
        case 0x32cda4u: goto label_32cda4;
        case 0x32cda8u: goto label_32cda8;
        case 0x32cdacu: goto label_32cdac;
        case 0x32cdb0u: goto label_32cdb0;
        case 0x32cdb4u: goto label_32cdb4;
        case 0x32cdb8u: goto label_32cdb8;
        case 0x32cdbcu: goto label_32cdbc;
        case 0x32cdc0u: goto label_32cdc0;
        case 0x32cdc4u: goto label_32cdc4;
        case 0x32cdc8u: goto label_32cdc8;
        case 0x32cdccu: goto label_32cdcc;
        case 0x32cdd0u: goto label_32cdd0;
        case 0x32cdd4u: goto label_32cdd4;
        case 0x32cdd8u: goto label_32cdd8;
        case 0x32cddcu: goto label_32cddc;
        case 0x32cde0u: goto label_32cde0;
        case 0x32cde4u: goto label_32cde4;
        case 0x32cde8u: goto label_32cde8;
        case 0x32cdecu: goto label_32cdec;
        case 0x32cdf0u: goto label_32cdf0;
        case 0x32cdf4u: goto label_32cdf4;
        case 0x32cdf8u: goto label_32cdf8;
        case 0x32cdfcu: goto label_32cdfc;
        case 0x32ce00u: goto label_32ce00;
        case 0x32ce04u: goto label_32ce04;
        case 0x32ce08u: goto label_32ce08;
        case 0x32ce0cu: goto label_32ce0c;
        case 0x32ce10u: goto label_32ce10;
        case 0x32ce14u: goto label_32ce14;
        case 0x32ce18u: goto label_32ce18;
        case 0x32ce1cu: goto label_32ce1c;
        case 0x32ce20u: goto label_32ce20;
        case 0x32ce24u: goto label_32ce24;
        case 0x32ce28u: goto label_32ce28;
        case 0x32ce2cu: goto label_32ce2c;
        case 0x32ce30u: goto label_32ce30;
        case 0x32ce34u: goto label_32ce34;
        case 0x32ce38u: goto label_32ce38;
        case 0x32ce3cu: goto label_32ce3c;
        case 0x32ce40u: goto label_32ce40;
        case 0x32ce44u: goto label_32ce44;
        case 0x32ce48u: goto label_32ce48;
        case 0x32ce4cu: goto label_32ce4c;
        case 0x32ce50u: goto label_32ce50;
        case 0x32ce54u: goto label_32ce54;
        case 0x32ce58u: goto label_32ce58;
        case 0x32ce5cu: goto label_32ce5c;
        case 0x32ce60u: goto label_32ce60;
        case 0x32ce64u: goto label_32ce64;
        case 0x32ce68u: goto label_32ce68;
        case 0x32ce6cu: goto label_32ce6c;
        case 0x32ce70u: goto label_32ce70;
        case 0x32ce74u: goto label_32ce74;
        case 0x32ce78u: goto label_32ce78;
        case 0x32ce7cu: goto label_32ce7c;
        case 0x32ce80u: goto label_32ce80;
        case 0x32ce84u: goto label_32ce84;
        case 0x32ce88u: goto label_32ce88;
        case 0x32ce8cu: goto label_32ce8c;
        case 0x32ce90u: goto label_32ce90;
        case 0x32ce94u: goto label_32ce94;
        default: break;
    }

    ctx->pc = 0x32cc90u;

label_32cc90:
    // 0x32cc90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_32cc94:
    // 0x32cc94: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x32cc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_32cc98:
    // 0x32cc98: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x32cc98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32cc9c:
    // 0x32cc9c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x32cc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_32cca0:
    // 0x32cca0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x32cca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_32cca4:
    // 0x32cca4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x32cca4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32cca8:
    // 0x32cca8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x32cca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_32ccac:
    // 0x32ccac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x32ccacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_32ccb0:
    // 0x32ccb0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x32ccb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_32ccb4:
    // 0x32ccb4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x32ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_32ccb8:
    // 0x32ccb8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x32ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_32ccbc:
    // 0x32ccbc: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x32ccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_32ccc0:
    // 0x32ccc0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x32ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_32ccc4:
    // 0x32ccc4: 0xc0c98d6  jal         func_326358
label_32ccc8:
    if (ctx->pc == 0x32CCC8u) {
        ctx->pc = 0x32CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CCC4u;
        // 0x32ccc8: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CCCCu;
        goto label_32cccc;
    }
    ctx->pc = 0x32CCC4u;
    SET_GPR_U32(ctx, 31, 0x32CCCCu);
    ctx->pc = 0x32CCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CCC4u;
    // 0x32ccc8: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326358u, 0x32CCC4u, 0x32CCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCCCu;
label_32cccc:
    // 0x32cccc: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
label_32ccd0:
    // 0x32ccd0: 0xac621468  sw          $v0, 0x1468($v1)
    ctx->pc = 0x32ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5224), GPR_U32(ctx, 2));
label_32ccd4:
    // 0x32ccd4: 0xc0c9de8  jal         func_3277A0
label_32ccd8:
    if (ctx->pc == 0x32CCD8u) {
        ctx->pc = 0x32CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CCD4u;
        // 0x32ccd8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CCDCu;
        goto label_32ccdc;
    }
    ctx->pc = 0x32CCD4u;
    SET_GPR_U32(ctx, 31, 0x32CCDCu);
    ctx->pc = 0x32CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CCD4u;
    // 0x32ccd8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277A0u, 0x32CCD4u, 0x32CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCDCu;
label_32ccdc:
    // 0x32ccdc: 0xc0cf99e  jal         func_33E678
label_32cce0:
    if (ctx->pc == 0x32CCE0u) {
        ctx->pc = 0x32CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CCDCu;
        // 0x32cce0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CCE4u;
        goto label_32cce4;
    }
    ctx->pc = 0x32CCDCu;
    SET_GPR_U32(ctx, 31, 0x32CCE4u);
    ctx->pc = 0x32CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CCDCu;
    // 0x32cce0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x32CCDCu, 0x32CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCE4u;
label_32cce4:
    // 0x32cce4: 0x1ae00014  blez        $s7, . + 4 + (0x14 << 2)
label_32cce8:
    if (ctx->pc == 0x32CCE8u) {
        ctx->pc = 0x32CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CCE4u;
        // 0x32cce8: 0x8ed50048  lw          $s5, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CCECu;
        goto label_32ccec;
    }
    ctx->pc = 0x32CCE4u;
    {
        const bool branch_taken_0x32cce4 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x32CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CCE4u;
        // 0x32cce8: 0x8ed50048  lw          $s5, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cce4) {
            ctx->pc = 0x32CD38u;
            goto label_32cd38;
        }
    }
    ctx->pc = 0x32CCECu;
label_32ccec:
    // 0x32ccec: 0x26d10018  addiu       $s1, $s6, 0x18
    ctx->pc = 0x32ccecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_32ccf0:
    // 0x32ccf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ccf4:
    // 0x32ccf4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32ccf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_32ccf8:
    // 0x32ccf8: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x32ccf8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_32ccfc:
    // 0x32ccfc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32ccfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_32cd00:
    // 0x32cd00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32cd04:
    // 0x32cd04: 0x153040  sll         $a2, $s5, 1
    ctx->pc = 0x32cd04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_32cd08:
    // 0x32cd08: 0x3b03821  addu        $a3, $sp, $s0
    ctx->pc = 0x32cd08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_32cd0c:
    // 0x32cd0c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x32cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_32cd10:
    // 0x32cd10: 0x40f809  jalr        $v0
label_32cd14:
    if (ctx->pc == 0x32CD14u) {
        ctx->pc = 0x32CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD10u;
        // 0x32cd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CD18u;
        goto label_32cd18;
    }
    ctx->pc = 0x32CD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32CD18u);
        ctx->pc = 0x32CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD10u;
        // 0x32cd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CD10u, 0x32CD18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32CD18u;
label_32cd18:
    // 0x32cd18: 0x297202a  slt         $a0, $s4, $s7
    ctx->pc = 0x32cd18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_32cd1c:
    // 0x32cd1c: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x32cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_32cd20:
    // 0x32cd20: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x32cd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_32cd24:
    // 0x32cd24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32cd28:
    // 0x32cd28: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x32cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_32cd2c:
    // 0x32cd2c: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x32cd2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_32cd30:
    // 0x32cd30: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
label_32cd34:
    if (ctx->pc == 0x32CD34u) {
        ctx->pc = 0x32CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD30u;
        // 0x32cd34: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CD38u;
        goto label_32cd38;
    }
    ctx->pc = 0x32CD30u;
    {
        const bool branch_taken_0x32cd30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD30u;
        // 0x32cd34: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd30) {
            ctx->pc = 0x32CCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ccf0;
        }
    }
    ctx->pc = 0x32CD38u;
label_32cd38:
    // 0x32cd38: 0x1ae00024  blez        $s7, . + 4 + (0x24 << 2)
label_32cd3c:
    if (ctx->pc == 0x32CD3Cu) {
        ctx->pc = 0x32CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD38u;
        // 0x32cd3c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CD40u;
        goto label_32cd40;
    }
    ctx->pc = 0x32CD38u;
    {
        const bool branch_taken_0x32cd38 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x32CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD38u;
        // 0x32cd3c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd38) {
            ctx->pc = 0x32CDCCu;
            goto label_32cdcc;
        }
    }
    ctx->pc = 0x32CD40u;
label_32cd40:
    // 0x32cd40: 0x15f040  sll         $fp, $s5, 1
    ctx->pc = 0x32cd40u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_32cd44:
    // 0x32cd44: 0x26d30018  addiu       $s3, $s6, 0x18
    ctx->pc = 0x32cd44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_32cd48:
    // 0x32cd48: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x32cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32cd4c:
    // 0x32cd4c: 0x0  nop
    ctx->pc = 0x32cd4cu;
    // NOP
label_32cd50:
    // 0x32cd50: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x32cd50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_32cd54:
    // 0x32cd54: 0x3b08821  addu        $s1, $sp, $s0
    ctx->pc = 0x32cd54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_32cd58:
    // 0x32cd58: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x32cd58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_32cd5c:
    // 0x32cd5c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x32cd5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32cd60:
    // 0x32cd60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32cd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32cd64:
    // 0x32cd64: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x32cd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32cd68:
    // 0x32cd68: 0xc0ceb28  jal         func_33ACA0
label_32cd6c:
    if (ctx->pc == 0x32CD6Cu) {
        ctx->pc = 0x32CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD68u;
        // 0x32cd6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CD70u;
        goto label_32cd70;
    }
    ctx->pc = 0x32CD68u;
    SET_GPR_U32(ctx, 31, 0x32CD70u);
    ctx->pc = 0x32CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CD68u;
    // 0x32cd6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x32CD68u, 0x32CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CD70u;
label_32cd70:
    // 0x32cd70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32cd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32cd74:
    // 0x32cd74: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x32cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_32cd78:
    // 0x32cd78: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32cd7c:
    // 0x32cd7c: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x32cd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_32cd80:
    // 0x32cd80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32cd80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_32cd84:
    // 0x32cd84: 0xc0e94bc  jal         func_3A52F0
label_32cd88:
    if (ctx->pc == 0x32CD88u) {
        ctx->pc = 0x32CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD84u;
        // 0x32cd88: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CD8Cu;
        goto label_32cd8c;
    }
    ctx->pc = 0x32CD84u;
    SET_GPR_U32(ctx, 31, 0x32CD8Cu);
    ctx->pc = 0x32CD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CD84u;
    // 0x32cd88: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32CD84u, 0x32CD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CD8Cu;
label_32cd8c:
    // 0x32cd8c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x32cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_32cd90:
    // 0x32cd90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32cd90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32cd94:
    // 0x32cd94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32cd98:
    // 0x32cd98: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32cd9c:
    // 0x32cd9c: 0x40f809  jalr        $v0
label_32cda0:
    if (ctx->pc == 0x32CDA0u) {
        ctx->pc = 0x32CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD9Cu;
        // 0x32cda0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CDA4u;
        goto label_32cda4;
    }
    ctx->pc = 0x32CD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32CDA4u);
        ctx->pc = 0x32CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD9Cu;
        // 0x32cda0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CD9Cu, 0x32CDA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32CDA4u;
label_32cda4:
    // 0x32cda4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x32cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_32cda8:
    // 0x32cda8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32cda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32cdac:
    // 0x32cdac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32cdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32cdb0:
    // 0x32cdb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32cdb4:
    // 0x32cdb4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32cdb8:
    // 0x32cdb8: 0x40f809  jalr        $v0
label_32cdbc:
    if (ctx->pc == 0x32CDBCu) {
        ctx->pc = 0x32CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CDB8u;
        // 0x32cdbc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CDC0u;
        goto label_32cdc0;
    }
    ctx->pc = 0x32CDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32CDC0u);
        ctx->pc = 0x32CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CDB8u;
        // 0x32cdbc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CDB8u, 0x32CDC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32CDC0u;
label_32cdc0:
    // 0x32cdc0: 0x297182a  slt         $v1, $s4, $s7
    ctx->pc = 0x32cdc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_32cdc4:
    // 0x32cdc4: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_32cdc8:
    if (ctx->pc == 0x32CDC8u) {
        ctx->pc = 0x32CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CDC4u;
        // 0x32cdc8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CDCCu;
        goto label_32cdcc;
    }
    ctx->pc = 0x32CDC4u;
    {
        const bool branch_taken_0x32cdc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CDC4u;
        // 0x32cdc8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cdc4) {
            ctx->pc = 0x32CD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32cd50;
        }
    }
    ctx->pc = 0x32CDCCu;
label_32cdcc:
    // 0x32cdcc: 0x8ec200a8  lw          $v0, 0xA8($s6)
    ctx->pc = 0x32cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_32cdd0:
    // 0x32cdd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32cdd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32cdd4:
    // 0x32cdd4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x32cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_32cdd8:
    // 0x32cdd8: 0xc0cf9a4  jal         func_33E690
label_32cddc:
    if (ctx->pc == 0x32CDDCu) {
        ctx->pc = 0x32CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CDD8u;
        // 0x32cddc: 0xaec200a8  sw          $v0, 0xA8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CDE0u;
        goto label_32cde0;
    }
    ctx->pc = 0x32CDD8u;
    SET_GPR_U32(ctx, 31, 0x32CDE0u);
    ctx->pc = 0x32CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDD8u;
    // 0x32cddc: 0xaec200a8  sw          $v0, 0xA8($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x32CDD8u, 0x32CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CDE0u;
label_32cde0:
    // 0x32cde0: 0x1ae0000e  blez        $s7, . + 4 + (0xE << 2)
label_32cde4:
    if (ctx->pc == 0x32CDE4u) {
        ctx->pc = 0x32CDE8u;
        goto label_32cde8;
    }
    ctx->pc = 0x32CDE0u;
    {
        const bool branch_taken_0x32cde0 = (GPR_S64(ctx, 23) <= 0);
        if (branch_taken_0x32cde0) {
            ctx->pc = 0x32CE1Cu;
            goto label_32ce1c;
        }
    }
    ctx->pc = 0x32CDE8u;
label_32cde8:
    // 0x32cde8: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x32cde8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_32cdec:
    // 0x32cdec: 0x26d00018  addiu       $s0, $s6, 0x18
    ctx->pc = 0x32cdecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_32cdf0:
    // 0x32cdf0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32cdf4:
    // 0x32cdf4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x32cdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_32cdf8:
    // 0x32cdf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32cdfc:
    // 0x32cdfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32ce00:
    // 0x32ce00: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x32ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_32ce04:
    // 0x32ce04: 0x40f809  jalr        $v0
label_32ce08:
    if (ctx->pc == 0x32CE08u) {
        ctx->pc = 0x32CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE04u;
        // 0x32ce08: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CE0Cu;
        goto label_32ce0c;
    }
    ctx->pc = 0x32CE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32CE0Cu);
        ctx->pc = 0x32CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE04u;
        // 0x32ce08: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CE04u, 0x32CE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32CE0Cu;
label_32ce0c:
    // 0x32ce0c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x32ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32ce10:
    // 0x32ce10: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x32ce10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_32ce14:
    // 0x32ce14: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
label_32ce18:
    if (ctx->pc == 0x32CE18u) {
        ctx->pc = 0x32CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE14u;
        // 0x32ce18: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CE1Cu;
        goto label_32ce1c;
    }
    ctx->pc = 0x32CE14u;
    {
        const bool branch_taken_0x32ce14 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE14u;
        // 0x32ce18: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ce14) {
            ctx->pc = 0x32CDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32cdf0;
        }
    }
    ctx->pc = 0x32CE1Cu;
label_32ce1c:
    // 0x32ce1c: 0xc0c98d6  jal         func_326358
label_32ce20:
    if (ctx->pc == 0x32CE20u) {
        ctx->pc = 0x32CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE1Cu;
        // 0x32ce20: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CE24u;
        goto label_32ce24;
    }
    ctx->pc = 0x32CE1Cu;
    SET_GPR_U32(ctx, 31, 0x32CE24u);
    ctx->pc = 0x32CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CE1Cu;
    // 0x32ce20: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326358u, 0x32CE1Cu, 0x32CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE24u;
label_32ce24:
    // 0x32ce24: 0x8ec300a8  lw          $v1, 0xA8($s6)
    ctx->pc = 0x32ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_32ce28:
    // 0x32ce28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x32ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_32ce2c:
    // 0x32ce2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32ce30:
    // 0x32ce30: 0x5c40000d  bgtzl       $v0, . + 4 + (0xD << 2)
label_32ce34:
    if (ctx->pc == 0x32CE34u) {
        ctx->pc = 0x32CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE30u;
        // 0x32ce34: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CE38u;
        goto label_32ce38;
    }
    ctx->pc = 0x32CE30u;
    {
        const bool branch_taken_0x32ce30 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x32ce30) {
            ctx->pc = 0x32CE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CE30u;
            // 0x32ce34: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CE68u;
            goto label_32ce68;
        }
    }
    ctx->pc = 0x32CE38u;
label_32ce38:
    // 0x32ce38: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x32ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_32ce3c:
    // 0x32ce3c: 0xc0c98c8  jal         func_326320
label_32ce40:
    if (ctx->pc == 0x32CE40u) {
        ctx->pc = 0x32CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE3Cu;
        // 0x32ce40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CE44u;
        goto label_32ce44;
    }
    ctx->pc = 0x32CE3Cu;
    SET_GPR_U32(ctx, 31, 0x32CE44u);
    ctx->pc = 0x32CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CE3Cu;
    // 0x32ce40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326320u, 0x32CE3Cu, 0x32CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE44u;
label_32ce44:
    // 0x32ce44: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x32ce44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_32ce48:
    // 0x32ce48: 0xc0c98ce  jal         func_326338
label_32ce4c:
    if (ctx->pc == 0x32CE4Cu) {
        ctx->pc = 0x32CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE48u;
        // 0x32ce4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CE50u;
        goto label_32ce50;
    }
    ctx->pc = 0x32CE48u;
    SET_GPR_U32(ctx, 31, 0x32CE50u);
    ctx->pc = 0x32CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CE48u;
    // 0x32ce4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326338u, 0x32CE48u, 0x32CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE50u;
label_32ce50:
    // 0x32ce50: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x32ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_32ce54:
    // 0x32ce54: 0xc0ce0de  jal         func_338378
label_32ce58:
    if (ctx->pc == 0x32CE58u) {
        ctx->pc = 0x32CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE54u;
        // 0x32ce58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CE5Cu;
        goto label_32ce5c;
    }
    ctx->pc = 0x32CE54u;
    SET_GPR_U32(ctx, 31, 0x32CE5Cu);
    ctx->pc = 0x32CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CE54u;
    // 0x32ce58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338378u, 0x32CE54u, 0x32CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE5Cu;
label_32ce5c:
    // 0x32ce5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32ce60:
    // 0x32ce60: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x32ce60u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
label_32ce64:
    // 0x32ce64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x32ce64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32ce68:
    // 0x32ce68: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x32ce68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32ce6c:
    // 0x32ce6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x32ce6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32ce70:
    // 0x32ce70: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x32ce70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32ce74:
    // 0x32ce74: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x32ce74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32ce78:
    // 0x32ce78: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x32ce78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_32ce7c:
    // 0x32ce7c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x32ce7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32ce80:
    // 0x32ce80: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x32ce80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_32ce84:
    // 0x32ce84: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x32ce84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_32ce88:
    // 0x32ce88: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x32ce88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_32ce8c:
    // 0x32ce8c: 0x3e00008  jr          $ra
label_32ce90:
    if (ctx->pc == 0x32CE90u) {
        ctx->pc = 0x32CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE8Cu;
        // 0x32ce90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CE94u;
        goto label_32ce94;
    }
    ctx->pc = 0x32CE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE8Cu;
        // 0x32ce90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CE94u;
label_32ce94:
    // 0x32ce94: 0x0  nop
    ctx->pc = 0x32ce94u;
    // NOP
    ctx->pc = 0x32ce98u;
}
