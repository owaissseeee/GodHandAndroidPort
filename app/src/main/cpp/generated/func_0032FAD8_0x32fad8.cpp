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

// Function: func_0032FAD8
// Address: 0x32fad8 - 0x32fc38
void func_0032FAD8_0x32fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032FAD8_0x32fad8");
#endif

    switch (ctx->pc) {
        case 0x32fad8u: goto label_32fad8;
        case 0x32fadcu: goto label_32fadc;
        case 0x32fae0u: goto label_32fae0;
        case 0x32fae4u: goto label_32fae4;
        case 0x32fae8u: goto label_32fae8;
        case 0x32faecu: goto label_32faec;
        case 0x32faf0u: goto label_32faf0;
        case 0x32faf4u: goto label_32faf4;
        case 0x32faf8u: goto label_32faf8;
        case 0x32fafcu: goto label_32fafc;
        case 0x32fb00u: goto label_32fb00;
        case 0x32fb04u: goto label_32fb04;
        case 0x32fb08u: goto label_32fb08;
        case 0x32fb0cu: goto label_32fb0c;
        case 0x32fb10u: goto label_32fb10;
        case 0x32fb14u: goto label_32fb14;
        case 0x32fb18u: goto label_32fb18;
        case 0x32fb1cu: goto label_32fb1c;
        case 0x32fb20u: goto label_32fb20;
        case 0x32fb24u: goto label_32fb24;
        case 0x32fb28u: goto label_32fb28;
        case 0x32fb2cu: goto label_32fb2c;
        case 0x32fb30u: goto label_32fb30;
        case 0x32fb34u: goto label_32fb34;
        case 0x32fb38u: goto label_32fb38;
        case 0x32fb3cu: goto label_32fb3c;
        case 0x32fb40u: goto label_32fb40;
        case 0x32fb44u: goto label_32fb44;
        case 0x32fb48u: goto label_32fb48;
        case 0x32fb4cu: goto label_32fb4c;
        case 0x32fb50u: goto label_32fb50;
        case 0x32fb54u: goto label_32fb54;
        case 0x32fb58u: goto label_32fb58;
        case 0x32fb5cu: goto label_32fb5c;
        case 0x32fb60u: goto label_32fb60;
        case 0x32fb64u: goto label_32fb64;
        case 0x32fb68u: goto label_32fb68;
        case 0x32fb6cu: goto label_32fb6c;
        case 0x32fb70u: goto label_32fb70;
        case 0x32fb74u: goto label_32fb74;
        case 0x32fb78u: goto label_32fb78;
        case 0x32fb7cu: goto label_32fb7c;
        case 0x32fb80u: goto label_32fb80;
        case 0x32fb84u: goto label_32fb84;
        case 0x32fb88u: goto label_32fb88;
        case 0x32fb8cu: goto label_32fb8c;
        case 0x32fb90u: goto label_32fb90;
        case 0x32fb94u: goto label_32fb94;
        case 0x32fb98u: goto label_32fb98;
        case 0x32fb9cu: goto label_32fb9c;
        case 0x32fba0u: goto label_32fba0;
        case 0x32fba4u: goto label_32fba4;
        case 0x32fba8u: goto label_32fba8;
        case 0x32fbacu: goto label_32fbac;
        case 0x32fbb0u: goto label_32fbb0;
        case 0x32fbb4u: goto label_32fbb4;
        case 0x32fbb8u: goto label_32fbb8;
        case 0x32fbbcu: goto label_32fbbc;
        case 0x32fbc0u: goto label_32fbc0;
        case 0x32fbc4u: goto label_32fbc4;
        case 0x32fbc8u: goto label_32fbc8;
        case 0x32fbccu: goto label_32fbcc;
        case 0x32fbd0u: goto label_32fbd0;
        case 0x32fbd4u: goto label_32fbd4;
        case 0x32fbd8u: goto label_32fbd8;
        case 0x32fbdcu: goto label_32fbdc;
        case 0x32fbe0u: goto label_32fbe0;
        case 0x32fbe4u: goto label_32fbe4;
        case 0x32fbe8u: goto label_32fbe8;
        case 0x32fbecu: goto label_32fbec;
        case 0x32fbf0u: goto label_32fbf0;
        case 0x32fbf4u: goto label_32fbf4;
        case 0x32fbf8u: goto label_32fbf8;
        case 0x32fbfcu: goto label_32fbfc;
        case 0x32fc00u: goto label_32fc00;
        case 0x32fc04u: goto label_32fc04;
        case 0x32fc08u: goto label_32fc08;
        case 0x32fc0cu: goto label_32fc0c;
        case 0x32fc10u: goto label_32fc10;
        case 0x32fc14u: goto label_32fc14;
        case 0x32fc18u: goto label_32fc18;
        case 0x32fc1cu: goto label_32fc1c;
        case 0x32fc20u: goto label_32fc20;
        case 0x32fc24u: goto label_32fc24;
        case 0x32fc28u: goto label_32fc28;
        case 0x32fc2cu: goto label_32fc2c;
        case 0x32fc30u: goto label_32fc30;
        case 0x32fc34u: goto label_32fc34;
        default: break;
    }

    ctx->pc = 0x32fad8u;

label_32fad8:
    // 0x32fad8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32fadc:
    // 0x32fadc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32fadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fae0:
    // 0x32fae0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x32fae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_32fae4:
    // 0x32fae4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x32fae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32fae8:
    // 0x32fae8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x32fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_32faec:
    // 0x32faec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32faecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32faf0:
    // 0x32faf0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x32faf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_32faf4:
    // 0x32faf4: 0x24061800  addiu       $a2, $zero, 0x1800
    ctx->pc = 0x32faf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
label_32faf8:
    // 0x32faf8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x32faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_32fafc:
    // 0x32fafc: 0x265000a0  addiu       $s0, $s2, 0xA0
    ctx->pc = 0x32fafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_32fb00:
    // 0x32fb00: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32fb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32fb04:
    // 0x32fb04: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x32fb04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_32fb08:
    // 0x32fb08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fb0c:
    // 0x32fb0c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x32fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_32fb10:
    // 0x32fb10: 0x60f809  jalr        $v1
label_32fb14:
    if (ctx->pc == 0x32FB14u) {
        ctx->pc = 0x32FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB10u;
        // 0x32fb14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB18u;
        goto label_32fb18;
    }
    ctx->pc = 0x32FB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32FB18u);
        ctx->pc = 0x32FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB10u;
        // 0x32fb14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FB10u, 0x32FB18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FB18u;
label_32fb18:
    // 0x32fb18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32fb18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32fb1c:
    // 0x32fb1c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x32fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32fb20:
    // 0x32fb20: 0xc0cbd60  jal         func_32F580
label_32fb24:
    if (ctx->pc == 0x32FB24u) {
        ctx->pc = 0x32FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB20u;
        // 0x32fb24: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB28u;
        goto label_32fb28;
    }
    ctx->pc = 0x32FB20u;
    SET_GPR_U32(ctx, 31, 0x32FB28u);
    ctx->pc = 0x32FB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB20u;
    // 0x32fb24: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F580u, 0x32FB20u, 0x32FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB28u;
label_32fb28:
    // 0x32fb28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fb2c:
    // 0x32fb2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32fb2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32fb30:
    // 0x32fb30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32fb34:
    // 0x32fb34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fb38:
    // 0x32fb38: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
label_32fb3c:
    if (ctx->pc == 0x32FB3Cu) {
        ctx->pc = 0x32FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB38u;
        // 0x32fb3c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB40u;
        goto label_32fb40;
    }
    ctx->pc = 0x32FB38u;
    {
        const bool branch_taken_0x32fb38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x32FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB38u;
        // 0x32fb3c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb38) {
            ctx->pc = 0x32FB58u;
            goto label_32fb58;
        }
    }
    ctx->pc = 0x32FB40u;
label_32fb40:
    // 0x32fb40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fb44:
    // 0x32fb44: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x32fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_32fb48:
    // 0x32fb48: 0x60f809  jalr        $v1
label_32fb4c:
    if (ctx->pc == 0x32FB4Cu) {
        ctx->pc = 0x32FB50u;
        goto label_32fb50;
    }
    ctx->pc = 0x32FB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32FB50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FB48u, 0x32FB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FB50u;
label_32fb50:
    // 0x32fb50: 0x10000033  b           . + 4 + (0x33 << 2)
label_32fb54:
    if (ctx->pc == 0x32FB54u) {
        ctx->pc = 0x32FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB50u;
        // 0x32fb54: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB58u;
        goto label_32fb58;
    }
    ctx->pc = 0x32FB50u;
    {
        const bool branch_taken_0x32fb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB50u;
        // 0x32fb54: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb50) {
            ctx->pc = 0x32FC20u;
            goto label_32fc20;
        }
    }
    ctx->pc = 0x32FB58u;
label_32fb58:
    // 0x32fb58: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_32fb5c:
    if (ctx->pc == 0x32FB5Cu) {
        ctx->pc = 0x32FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB58u;
        // 0x32fb5c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB60u;
        goto label_32fb60;
    }
    ctx->pc = 0x32FB58u;
    {
        const bool branch_taken_0x32fb58 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB58u;
        // 0x32fb5c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb58) {
            ctx->pc = 0x32FB70u;
            goto label_32fb70;
        }
    }
    ctx->pc = 0x32FB60u;
label_32fb60:
    // 0x32fb60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fb64:
    // 0x32fb64: 0x10000016  b           . + 4 + (0x16 << 2)
label_32fb68:
    if (ctx->pc == 0x32FB68u) {
        ctx->pc = 0x32FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB64u;
        // 0x32fb68: 0xae421958  sw          $v0, 0x1958($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB6Cu;
        goto label_32fb6c;
    }
    ctx->pc = 0x32FB64u;
    {
        const bool branch_taken_0x32fb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB64u;
        // 0x32fb68: 0xae421958  sw          $v0, 0x1958($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb64) {
            ctx->pc = 0x32FBC0u;
            goto label_32fbc0;
        }
    }
    ctx->pc = 0x32FB6Cu;
label_32fb6c:
    // 0x32fb6c: 0x0  nop
    ctx->pc = 0x32fb6cu;
    // NOP
label_32fb70:
    // 0x32fb70: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
label_32fb74:
    if (ctx->pc == 0x32FB74u) {
        ctx->pc = 0x32FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB70u;
        // 0x32fb74: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB78u;
        goto label_32fb78;
    }
    ctx->pc = 0x32FB70u;
    {
        const bool branch_taken_0x32fb70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x32FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB70u;
        // 0x32fb74: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb70) {
            ctx->pc = 0x32FBA8u;
            goto label_32fba8;
        }
    }
    ctx->pc = 0x32FB78u;
label_32fb78:
    // 0x32fb78: 0xc0cff2c  jal         func_33FCB0
label_32fb7c:
    if (ctx->pc == 0x32FB7Cu) {
        ctx->pc = 0x32FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB78u;
        // 0x32fb7c: 0x24843078  addiu       $a0, $a0, 0x3078 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB80u;
        goto label_32fb80;
    }
    ctx->pc = 0x32FB78u;
    SET_GPR_U32(ctx, 31, 0x32FB80u);
    ctx->pc = 0x32FB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB78u;
    // 0x32fb7c: 0x24843078  addiu       $a0, $a0, 0x3078 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32FB78u, 0x32FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB80u;
label_32fb80:
    // 0x32fb80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fb84:
    // 0x32fb84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fb88:
    // 0x32fb88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32fb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fb8c:
    // 0x32fb8c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x32fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_32fb90:
    // 0x32fb90: 0x60f809  jalr        $v1
label_32fb94:
    if (ctx->pc == 0x32FB94u) {
        ctx->pc = 0x32FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB90u;
        // 0x32fb94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB98u;
        goto label_32fb98;
    }
    ctx->pc = 0x32FB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32FB98u);
        ctx->pc = 0x32FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB90u;
        // 0x32fb94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FB90u, 0x32FB98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FB98u;
label_32fb98:
    // 0x32fb98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32fb9c:
    // 0x32fb9c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_32fba0:
    if (ctx->pc == 0x32FBA0u) {
        ctx->pc = 0x32FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB9Cu;
        // 0x32fba0: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FBA4u;
        goto label_32fba4;
    }
    ctx->pc = 0x32FB9Cu;
    {
        const bool branch_taken_0x32fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB9Cu;
        // 0x32fba0: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb9c) {
            ctx->pc = 0x32FC1Cu;
            goto label_32fc1c;
        }
    }
    ctx->pc = 0x32FBA4u;
label_32fba4:
    // 0x32fba4: 0x0  nop
    ctx->pc = 0x32fba4u;
    // NOP
label_32fba8:
    // 0x32fba8: 0x8e42195c  lw          $v0, 0x195C($s2)
    ctx->pc = 0x32fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6492)));
label_32fbac:
    // 0x32fbac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32fbb0:
    if (ctx->pc == 0x32FBB0u) {
        ctx->pc = 0x32FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBACu;
        // 0x32fbb0: 0xae401958  sw          $zero, 0x1958($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FBB4u;
        goto label_32fbb4;
    }
    ctx->pc = 0x32FBACu;
    {
        const bool branch_taken_0x32fbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBACu;
        // 0x32fbb0: 0xae401958  sw          $zero, 0x1958($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fbac) {
            ctx->pc = 0x32FBC0u;
            goto label_32fbc0;
        }
    }
    ctx->pc = 0x32FBB4u;
label_32fbb4:
    // 0x32fbb4: 0x8e441960  lw          $a0, 0x1960($s2)
    ctx->pc = 0x32fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6496)));
label_32fbb8:
    // 0x32fbb8: 0x40f809  jalr        $v0
label_32fbbc:
    if (ctx->pc == 0x32FBBCu) {
        ctx->pc = 0x32FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBB8u;
        // 0x32fbbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FBC0u;
        goto label_32fbc0;
    }
    ctx->pc = 0x32FBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FBC0u);
        ctx->pc = 0x32FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBB8u;
        // 0x32fbbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FBB8u, 0x32FBC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FBC0u;
label_32fbc0:
    // 0x32fbc0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x32fbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32fbc4:
    // 0x32fbc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32fbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32fbc8:
    // 0x32fbc8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32fbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32fbcc:
    // 0x32fbcc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x32fbccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32fbd0:
    // 0x32fbd0: 0xc0ceb28  jal         func_33ACA0
label_32fbd4:
    if (ctx->pc == 0x32FBD4u) {
        ctx->pc = 0x32FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBD0u;
        // 0x32fbd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FBD8u;
        goto label_32fbd8;
    }
    ctx->pc = 0x32FBD0u;
    SET_GPR_U32(ctx, 31, 0x32FBD8u);
    ctx->pc = 0x32FBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FBD0u;
    // 0x32fbd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x32FBD0u, 0x32FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FBD8u;
label_32fbd8:
    // 0x32fbd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fbdc:
    // 0x32fbdc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32fbdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32fbe0:
    // 0x32fbe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fbe4:
    // 0x32fbe4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32fbe8:
    // 0x32fbe8: 0x40f809  jalr        $v0
label_32fbec:
    if (ctx->pc == 0x32FBECu) {
        ctx->pc = 0x32FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBE8u;
        // 0x32fbec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FBF0u;
        goto label_32fbf0;
    }
    ctx->pc = 0x32FBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FBF0u);
        ctx->pc = 0x32FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBE8u;
        // 0x32fbec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FBE8u, 0x32FBF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FBF0u;
label_32fbf0:
    // 0x32fbf0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x32fbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fbf4:
    // 0x32fbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fbf8:
    // 0x32fbf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32fbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32fbfc:
    // 0x32fbfc: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x32fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_32fc00:
    // 0x32fc00: 0x60f809  jalr        $v1
label_32fc04:
    if (ctx->pc == 0x32FC04u) {
        ctx->pc = 0x32FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC00u;
        // 0x32fc04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FC08u;
        goto label_32fc08;
    }
    ctx->pc = 0x32FC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32FC08u);
        ctx->pc = 0x32FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC00u;
        // 0x32fc04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FC00u, 0x32FC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FC08u;
label_32fc08:
    // 0x32fc08: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x32fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_32fc0c:
    // 0x32fc0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32fc10:
    // 0x32fc10: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x32fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_32fc14:
    // 0x32fc14: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x32fc14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
label_32fc18:
    // 0x32fc18: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x32fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_32fc1c:
    // 0x32fc1c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x32fc1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32fc20:
    // 0x32fc20: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x32fc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32fc24:
    // 0x32fc24: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x32fc24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32fc28:
    // 0x32fc28: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x32fc28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32fc2c:
    // 0x32fc2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32fc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32fc30:
    // 0x32fc30: 0x3e00008  jr          $ra
label_32fc34:
    if (ctx->pc == 0x32FC34u) {
        ctx->pc = 0x32FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC30u;
        // 0x32fc34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FC38u;
        goto label_fallthrough_0x32fc30;
    }
    ctx->pc = 0x32FC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC30u;
        // 0x32fc34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32fc30:
    ctx->pc = 0x32FC38u;
}
