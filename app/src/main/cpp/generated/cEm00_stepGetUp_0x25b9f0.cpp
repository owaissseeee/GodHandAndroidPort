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

// Function: cEm00_stepGetUp
// Address: 0x25b9f0 - 0x25bcc0
void cEm00_stepGetUp_0x25b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepGetUp_0x25b9f0");
#endif

    switch (ctx->pc) {
        case 0x25b9f0u: goto label_25b9f0;
        case 0x25b9f4u: goto label_25b9f4;
        case 0x25b9f8u: goto label_25b9f8;
        case 0x25b9fcu: goto label_25b9fc;
        case 0x25ba00u: goto label_25ba00;
        case 0x25ba04u: goto label_25ba04;
        case 0x25ba08u: goto label_25ba08;
        case 0x25ba0cu: goto label_25ba0c;
        case 0x25ba10u: goto label_25ba10;
        case 0x25ba14u: goto label_25ba14;
        case 0x25ba18u: goto label_25ba18;
        case 0x25ba1cu: goto label_25ba1c;
        case 0x25ba20u: goto label_25ba20;
        case 0x25ba24u: goto label_25ba24;
        case 0x25ba28u: goto label_25ba28;
        case 0x25ba2cu: goto label_25ba2c;
        case 0x25ba30u: goto label_25ba30;
        case 0x25ba34u: goto label_25ba34;
        case 0x25ba38u: goto label_25ba38;
        case 0x25ba3cu: goto label_25ba3c;
        case 0x25ba40u: goto label_25ba40;
        case 0x25ba44u: goto label_25ba44;
        case 0x25ba48u: goto label_25ba48;
        case 0x25ba4cu: goto label_25ba4c;
        case 0x25ba50u: goto label_25ba50;
        case 0x25ba54u: goto label_25ba54;
        case 0x25ba58u: goto label_25ba58;
        case 0x25ba5cu: goto label_25ba5c;
        case 0x25ba60u: goto label_25ba60;
        case 0x25ba64u: goto label_25ba64;
        case 0x25ba68u: goto label_25ba68;
        case 0x25ba6cu: goto label_25ba6c;
        case 0x25ba70u: goto label_25ba70;
        case 0x25ba74u: goto label_25ba74;
        case 0x25ba78u: goto label_25ba78;
        case 0x25ba7cu: goto label_25ba7c;
        case 0x25ba80u: goto label_25ba80;
        case 0x25ba84u: goto label_25ba84;
        case 0x25ba88u: goto label_25ba88;
        case 0x25ba8cu: goto label_25ba8c;
        case 0x25ba90u: goto label_25ba90;
        case 0x25ba94u: goto label_25ba94;
        case 0x25ba98u: goto label_25ba98;
        case 0x25ba9cu: goto label_25ba9c;
        case 0x25baa0u: goto label_25baa0;
        case 0x25baa4u: goto label_25baa4;
        case 0x25baa8u: goto label_25baa8;
        case 0x25baacu: goto label_25baac;
        case 0x25bab0u: goto label_25bab0;
        case 0x25bab4u: goto label_25bab4;
        case 0x25bab8u: goto label_25bab8;
        case 0x25babcu: goto label_25babc;
        case 0x25bac0u: goto label_25bac0;
        case 0x25bac4u: goto label_25bac4;
        case 0x25bac8u: goto label_25bac8;
        case 0x25baccu: goto label_25bacc;
        case 0x25bad0u: goto label_25bad0;
        case 0x25bad4u: goto label_25bad4;
        case 0x25bad8u: goto label_25bad8;
        case 0x25badcu: goto label_25badc;
        case 0x25bae0u: goto label_25bae0;
        case 0x25bae4u: goto label_25bae4;
        case 0x25bae8u: goto label_25bae8;
        case 0x25baecu: goto label_25baec;
        case 0x25baf0u: goto label_25baf0;
        case 0x25baf4u: goto label_25baf4;
        case 0x25baf8u: goto label_25baf8;
        case 0x25bafcu: goto label_25bafc;
        case 0x25bb00u: goto label_25bb00;
        case 0x25bb04u: goto label_25bb04;
        case 0x25bb08u: goto label_25bb08;
        case 0x25bb0cu: goto label_25bb0c;
        case 0x25bb10u: goto label_25bb10;
        case 0x25bb14u: goto label_25bb14;
        case 0x25bb18u: goto label_25bb18;
        case 0x25bb1cu: goto label_25bb1c;
        case 0x25bb20u: goto label_25bb20;
        case 0x25bb24u: goto label_25bb24;
        case 0x25bb28u: goto label_25bb28;
        case 0x25bb2cu: goto label_25bb2c;
        case 0x25bb30u: goto label_25bb30;
        case 0x25bb34u: goto label_25bb34;
        case 0x25bb38u: goto label_25bb38;
        case 0x25bb3cu: goto label_25bb3c;
        case 0x25bb40u: goto label_25bb40;
        case 0x25bb44u: goto label_25bb44;
        case 0x25bb48u: goto label_25bb48;
        case 0x25bb4cu: goto label_25bb4c;
        case 0x25bb50u: goto label_25bb50;
        case 0x25bb54u: goto label_25bb54;
        case 0x25bb58u: goto label_25bb58;
        case 0x25bb5cu: goto label_25bb5c;
        case 0x25bb60u: goto label_25bb60;
        case 0x25bb64u: goto label_25bb64;
        case 0x25bb68u: goto label_25bb68;
        case 0x25bb6cu: goto label_25bb6c;
        case 0x25bb70u: goto label_25bb70;
        case 0x25bb74u: goto label_25bb74;
        case 0x25bb78u: goto label_25bb78;
        case 0x25bb7cu: goto label_25bb7c;
        case 0x25bb80u: goto label_25bb80;
        case 0x25bb84u: goto label_25bb84;
        case 0x25bb88u: goto label_25bb88;
        case 0x25bb8cu: goto label_25bb8c;
        case 0x25bb90u: goto label_25bb90;
        case 0x25bb94u: goto label_25bb94;
        case 0x25bb98u: goto label_25bb98;
        case 0x25bb9cu: goto label_25bb9c;
        case 0x25bba0u: goto label_25bba0;
        case 0x25bba4u: goto label_25bba4;
        case 0x25bba8u: goto label_25bba8;
        case 0x25bbacu: goto label_25bbac;
        case 0x25bbb0u: goto label_25bbb0;
        case 0x25bbb4u: goto label_25bbb4;
        case 0x25bbb8u: goto label_25bbb8;
        case 0x25bbbcu: goto label_25bbbc;
        case 0x25bbc0u: goto label_25bbc0;
        case 0x25bbc4u: goto label_25bbc4;
        case 0x25bbc8u: goto label_25bbc8;
        case 0x25bbccu: goto label_25bbcc;
        case 0x25bbd0u: goto label_25bbd0;
        case 0x25bbd4u: goto label_25bbd4;
        case 0x25bbd8u: goto label_25bbd8;
        case 0x25bbdcu: goto label_25bbdc;
        case 0x25bbe0u: goto label_25bbe0;
        case 0x25bbe4u: goto label_25bbe4;
        case 0x25bbe8u: goto label_25bbe8;
        case 0x25bbecu: goto label_25bbec;
        case 0x25bbf0u: goto label_25bbf0;
        case 0x25bbf4u: goto label_25bbf4;
        case 0x25bbf8u: goto label_25bbf8;
        case 0x25bbfcu: goto label_25bbfc;
        case 0x25bc00u: goto label_25bc00;
        case 0x25bc04u: goto label_25bc04;
        case 0x25bc08u: goto label_25bc08;
        case 0x25bc0cu: goto label_25bc0c;
        case 0x25bc10u: goto label_25bc10;
        case 0x25bc14u: goto label_25bc14;
        case 0x25bc18u: goto label_25bc18;
        case 0x25bc1cu: goto label_25bc1c;
        case 0x25bc20u: goto label_25bc20;
        case 0x25bc24u: goto label_25bc24;
        case 0x25bc28u: goto label_25bc28;
        case 0x25bc2cu: goto label_25bc2c;
        case 0x25bc30u: goto label_25bc30;
        case 0x25bc34u: goto label_25bc34;
        case 0x25bc38u: goto label_25bc38;
        case 0x25bc3cu: goto label_25bc3c;
        case 0x25bc40u: goto label_25bc40;
        case 0x25bc44u: goto label_25bc44;
        case 0x25bc48u: goto label_25bc48;
        case 0x25bc4cu: goto label_25bc4c;
        case 0x25bc50u: goto label_25bc50;
        case 0x25bc54u: goto label_25bc54;
        case 0x25bc58u: goto label_25bc58;
        case 0x25bc5cu: goto label_25bc5c;
        case 0x25bc60u: goto label_25bc60;
        case 0x25bc64u: goto label_25bc64;
        case 0x25bc68u: goto label_25bc68;
        case 0x25bc6cu: goto label_25bc6c;
        case 0x25bc70u: goto label_25bc70;
        case 0x25bc74u: goto label_25bc74;
        case 0x25bc78u: goto label_25bc78;
        case 0x25bc7cu: goto label_25bc7c;
        case 0x25bc80u: goto label_25bc80;
        case 0x25bc84u: goto label_25bc84;
        case 0x25bc88u: goto label_25bc88;
        case 0x25bc8cu: goto label_25bc8c;
        case 0x25bc90u: goto label_25bc90;
        case 0x25bc94u: goto label_25bc94;
        case 0x25bc98u: goto label_25bc98;
        case 0x25bc9cu: goto label_25bc9c;
        case 0x25bca0u: goto label_25bca0;
        case 0x25bca4u: goto label_25bca4;
        case 0x25bca8u: goto label_25bca8;
        case 0x25bcacu: goto label_25bcac;
        case 0x25bcb0u: goto label_25bcb0;
        case 0x25bcb4u: goto label_25bcb4;
        case 0x25bcb8u: goto label_25bcb8;
        case 0x25bcbcu: goto label_25bcbc;
        default: break;
    }

    ctx->pc = 0x25b9f0u;

label_25b9f0:
    // 0x25b9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25b9f4:
    // 0x25b9f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25b9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_25b9f8:
    // 0x25b9f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25b9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25b9fc:
    // 0x25b9fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25ba00:
    // 0x25ba00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25ba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_25ba04:
    // 0x25ba04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25ba08:
    // 0x25ba08: 0xc0b6dac  jal         func_2DB6B0
label_25ba0c:
    if (ctx->pc == 0x25BA0Cu) {
        ctx->pc = 0x25BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA08u;
        // 0x25ba0c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA10u;
        goto label_25ba10;
    }
    ctx->pc = 0x25BA08u;
    SET_GPR_U32(ctx, 31, 0x25BA10u);
    ctx->pc = 0x25BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA08u;
    // 0x25ba0c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25BA08u, 0x25BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA10u;
label_25ba10:
    // 0x25ba10: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25ba10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25ba14:
    // 0x25ba14: 0x10710039  beq         $v1, $s1, . + 4 + (0x39 << 2)
label_25ba18:
    if (ctx->pc == 0x25BA18u) {
        ctx->pc = 0x25BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA14u;
        // 0x25ba18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA1Cu;
        goto label_25ba1c;
    }
    ctx->pc = 0x25BA14u;
    {
        const bool branch_taken_0x25ba14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x25BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA14u;
        // 0x25ba18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba14) {
            ctx->pc = 0x25BAFCu;
            goto label_25bafc;
        }
    }
    ctx->pc = 0x25BA1Cu;
label_25ba1c:
    // 0x25ba1c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x25ba1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_25ba20:
    // 0x25ba20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25ba24:
    if (ctx->pc == 0x25BA24u) {
        ctx->pc = 0x25BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA20u;
        // 0x25ba24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA28u;
        goto label_25ba28;
    }
    ctx->pc = 0x25BA20u;
    {
        const bool branch_taken_0x25ba20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA20u;
        // 0x25ba24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba20) {
            ctx->pc = 0x25BA38u;
            goto label_25ba38;
        }
    }
    ctx->pc = 0x25BA28u;
label_25ba28:
    // 0x25ba28: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_25ba2c:
    if (ctx->pc == 0x25BA2Cu) {
        ctx->pc = 0x25BA30u;
        goto label_25ba30;
    }
    ctx->pc = 0x25BA28u;
    {
        const bool branch_taken_0x25ba28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ba28) {
            ctx->pc = 0x25BA50u;
            goto label_25ba50;
        }
    }
    ctx->pc = 0x25BA30u;
label_25ba30:
    // 0x25ba30: 0x10000089  b           . + 4 + (0x89 << 2)
label_25ba34:
    if (ctx->pc == 0x25BA34u) {
        ctx->pc = 0x25BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA30u;
        // 0x25ba34: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA38u;
        goto label_25ba38;
    }
    ctx->pc = 0x25BA30u;
    {
        const bool branch_taken_0x25ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA30u;
        // 0x25ba34: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba30) {
            ctx->pc = 0x25BC58u;
            goto label_25bc58;
        }
    }
    ctx->pc = 0x25BA38u;
label_25ba38:
    // 0x25ba38: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
label_25ba3c:
    if (ctx->pc == 0x25BA3Cu) {
        ctx->pc = 0x25BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA38u;
        // 0x25ba3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA40u;
        goto label_25ba40;
    }
    ctx->pc = 0x25BA38u;
    {
        const bool branch_taken_0x25ba38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA38u;
        // 0x25ba3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba38) {
            ctx->pc = 0x25BBA4u;
            goto label_25bba4;
        }
    }
    ctx->pc = 0x25BA40u;
label_25ba40:
    // 0x25ba40: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
label_25ba44:
    if (ctx->pc == 0x25BA44u) {
        ctx->pc = 0x25BA48u;
        goto label_25ba48;
    }
    ctx->pc = 0x25BA40u;
    {
        const bool branch_taken_0x25ba40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ba40) {
            ctx->pc = 0x25BC30u;
            goto label_25bc30;
        }
    }
    ctx->pc = 0x25BA48u;
label_25ba48:
    // 0x25ba48: 0x10000083  b           . + 4 + (0x83 << 2)
label_25ba4c:
    if (ctx->pc == 0x25BA4Cu) {
        ctx->pc = 0x25BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA48u;
        // 0x25ba4c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA50u;
        goto label_25ba50;
    }
    ctx->pc = 0x25BA48u;
    {
        const bool branch_taken_0x25ba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA48u;
        // 0x25ba4c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba48) {
            ctx->pc = 0x25BC58u;
            goto label_25bc58;
        }
    }
    ctx->pc = 0x25BA50u;
label_25ba50:
    // 0x25ba50: 0xc09d91a  jal         func_276468
label_25ba54:
    if (ctx->pc == 0x25BA54u) {
        ctx->pc = 0x25BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA50u;
        // 0x25ba54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA58u;
        goto label_25ba58;
    }
    ctx->pc = 0x25BA50u;
    SET_GPR_U32(ctx, 31, 0x25BA58u);
    ctx->pc = 0x25BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA50u;
    // 0x25ba54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25BA50u, 0x25BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA58u;
label_25ba58:
    // 0x25ba58: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x25ba58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25ba5c:
    // 0x25ba5c: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x25ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_25ba60:
    // 0x25ba60: 0x8e0716d0  lw          $a3, 0x16D0($s0)
    ctx->pc = 0x25ba60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25ba64:
    // 0x25ba64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x25ba64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_25ba68:
    // 0x25ba68: 0x8c853e34  lw          $a1, 0x3E34($a0)
    ctx->pc = 0x25ba68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15924)));
label_25ba6c:
    // 0x25ba6c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x25ba6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25ba70:
    // 0x25ba70: 0x8c863e38  lw          $a2, 0x3E38($a0)
    ctx->pc = 0x25ba70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15928)));
label_25ba74:
    // 0x25ba74: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x25ba74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_25ba78:
    // 0x25ba78: 0xae0016f4  sw          $zero, 0x16F4($s0)
    ctx->pc = 0x25ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5876), GPR_U32(ctx, 0));
label_25ba7c:
    // 0x25ba7c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x25ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25ba80:
    // 0x25ba80: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x25ba80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_25ba84:
    // 0x25ba84: 0xae0716d0  sw          $a3, 0x16D0($s0)
    ctx->pc = 0x25ba84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 7));
label_25ba88:
    // 0x25ba88: 0xc60c16f4  lwc1        $f12, 0x16F4($s0)
    ctx->pc = 0x25ba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25ba8c:
    // 0x25ba8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ba8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ba90:
    // 0x25ba90: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x25ba90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25ba94:
    // 0x25ba94: 0xc0aa15e  jal         func_2A8578
label_25ba98:
    if (ctx->pc == 0x25BA98u) {
        ctx->pc = 0x25BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA94u;
        // 0x25ba98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA9Cu;
        goto label_25ba9c;
    }
    ctx->pc = 0x25BA94u;
    SET_GPR_U32(ctx, 31, 0x25BA9Cu);
    ctx->pc = 0x25BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA94u;
    // 0x25ba98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25BA94u, 0x25BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA9Cu;
label_25ba9c:
    // 0x25ba9c: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x25ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
label_25baa0:
    // 0x25baa0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25baa4:
    if (ctx->pc == 0x25BAA4u) {
        ctx->pc = 0x25BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAA0u;
        // 0x25baa4: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAA8u;
        goto label_25baa8;
    }
    ctx->pc = 0x25BAA0u;
    {
        const bool branch_taken_0x25baa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25baa0) {
            ctx->pc = 0x25BAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BAA0u;
            // 0x25baa4: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BAB4u;
            goto label_25bab4;
        }
    }
    ctx->pc = 0x25BAA8u;
label_25baa8:
    // 0x25baa8: 0xc0a051c  jal         func_281470
label_25baac:
    if (ctx->pc == 0x25BAACu) {
        ctx->pc = 0x25BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAA8u;
        // 0x25baac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAB0u;
        goto label_25bab0;
    }
    ctx->pc = 0x25BAA8u;
    SET_GPR_U32(ctx, 31, 0x25BAB0u);
    ctx->pc = 0x25BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BAA8u;
    // 0x25baac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281470u, 0x25BAA8u, 0x25BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BAB0u;
label_25bab0:
    // 0x25bab0: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x25bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_25bab4:
    // 0x25bab4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25bab8:
    if (ctx->pc == 0x25BAB8u) {
        ctx->pc = 0x25BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAB4u;
        // 0x25bab8: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BABCu;
        goto label_25babc;
    }
    ctx->pc = 0x25BAB4u;
    {
        const bool branch_taken_0x25bab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bab4) {
            ctx->pc = 0x25BAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BAB4u;
            // 0x25bab8: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BAC8u;
            goto label_25bac8;
        }
    }
    ctx->pc = 0x25BABCu;
label_25babc:
    // 0x25babc: 0xc0a0cde  jal         func_283378
label_25bac0:
    if (ctx->pc == 0x25BAC0u) {
        ctx->pc = 0x25BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BABCu;
        // 0x25bac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAC4u;
        goto label_25bac4;
    }
    ctx->pc = 0x25BABCu;
    SET_GPR_U32(ctx, 31, 0x25BAC4u);
    ctx->pc = 0x25BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BABCu;
    // 0x25bac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283378u, 0x25BABCu, 0x25BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BAC4u;
label_25bac4:
    // 0x25bac4: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x25bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_25bac8:
    // 0x25bac8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25bacc:
    if (ctx->pc == 0x25BACCu) {
        ctx->pc = 0x25BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAC8u;
        // 0x25bacc: 0x8e0205b4  lw          $v0, 0x5B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAD0u;
        goto label_25bad0;
    }
    ctx->pc = 0x25BAC8u;
    {
        const bool branch_taken_0x25bac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bac8) {
            ctx->pc = 0x25BACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BAC8u;
            // 0x25bacc: 0x8e0205b4  lw          $v0, 0x5B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BADCu;
            goto label_25badc;
        }
    }
    ctx->pc = 0x25BAD0u;
label_25bad0:
    // 0x25bad0: 0xc0a0cde  jal         func_283378
label_25bad4:
    if (ctx->pc == 0x25BAD4u) {
        ctx->pc = 0x25BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAD0u;
        // 0x25bad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAD8u;
        goto label_25bad8;
    }
    ctx->pc = 0x25BAD0u;
    SET_GPR_U32(ctx, 31, 0x25BAD8u);
    ctx->pc = 0x25BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BAD0u;
    // 0x25bad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283378u, 0x25BAD0u, 0x25BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BAD8u;
label_25bad8:
    // 0x25bad8: 0x8e0205b4  lw          $v0, 0x5B4($s0)
    ctx->pc = 0x25bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1460)));
label_25badc:
    // 0x25badc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25badcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bae0:
    // 0x25bae0: 0xa6110568  sh          $s1, 0x568($s0)
    ctx->pc = 0x25bae0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 17));
label_25bae4:
    // 0x25bae4: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x25bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_25bae8:
    // 0x25bae8: 0xc09bc48  jal         func_26F120
label_25baec:
    if (ctx->pc == 0x25BAECu) {
        ctx->pc = 0x25BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAE8u;
        // 0x25baec: 0xae0205b4  sw          $v0, 0x5B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAF0u;
        goto label_25baf0;
    }
    ctx->pc = 0x25BAE8u;
    SET_GPR_U32(ctx, 31, 0x25BAF0u);
    ctx->pc = 0x25BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BAE8u;
    // 0x25baec: 0xae0205b4  sw          $v0, 0x5B4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1460), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x25BAE8u, 0x25BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BAF0u;
label_25baf0:
    // 0x25baf0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25baf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25baf4:
    // 0x25baf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_25baf8:
    // 0x25baf8: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x25baf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_25bafc:
    // 0x25bafc: 0xc60017cc  lwc1        $f0, 0x17CC($s0)
    ctx->pc = 0x25bafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb00:
    // 0x25bb00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25bb00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25bb04:
    // 0x25bb04: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25bb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25bb08:
    // 0x25bb08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25bb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25bb0c:
    // 0x25bb0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25bb0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bb10:
    // 0x25bb10: 0x0  nop
    ctx->pc = 0x25bb10u;
    // NOP
label_25bb14:
    // 0x25bb14: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_25bb18:
    if (ctx->pc == 0x25BB18u) {
        ctx->pc = 0x25BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB14u;
        // 0x25bb18: 0xe602054c  swc1        $f2, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB1Cu;
        goto label_25bb1c;
    }
    ctx->pc = 0x25BB14u;
    {
        const bool branch_taken_0x25bb14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB14u;
        // 0x25bb18: 0xe602054c  swc1        $f2, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb14) {
            ctx->pc = 0x25BB2Cu;
            goto label_25bb2c;
        }
    }
    ctx->pc = 0x25BB1Cu;
label_25bb1c:
    // 0x25bb1c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x25bb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_25bb20:
    // 0x25bb20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bb20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bb24:
    // 0x25bb24: 0x0  nop
    ctx->pc = 0x25bb24u;
    // NOP
label_25bb28:
    // 0x25bb28: 0xe60017cc  swc1        $f0, 0x17CC($s0)
    ctx->pc = 0x25bb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6092), bits); }
label_25bb2c:
    // 0x25bb2c: 0xc055f06  jal         func_157C18
label_25bb30:
    if (ctx->pc == 0x25BB30u) {
        ctx->pc = 0x25BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB2Cu;
        // 0x25bb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB34u;
        goto label_25bb34;
    }
    ctx->pc = 0x25BB2Cu;
    SET_GPR_U32(ctx, 31, 0x25BB34u);
    ctx->pc = 0x25BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB2Cu;
    // 0x25bb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25BB2Cu, 0x25BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB34u;
label_25bb34:
    // 0x25bb34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_25bb38:
    if (ctx->pc == 0x25BB38u) {
        ctx->pc = 0x25BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB34u;
        // 0x25bb38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB3Cu;
        goto label_25bb3c;
    }
    ctx->pc = 0x25BB34u;
    {
        const bool branch_taken_0x25bb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB34u;
        // 0x25bb38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb34) {
            ctx->pc = 0x25BB64u;
            goto label_25bb64;
        }
    }
    ctx->pc = 0x25BB3Cu;
label_25bb3c:
    // 0x25bb3c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25bb3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25bb40:
    // 0x25bb40: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x25bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25bb44:
    // 0x25bb44: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x25bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25bb48:
    // 0x25bb48: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x25bb48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
label_25bb4c:
    // 0x25bb4c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25bb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_25bb50:
    // 0x25bb50: 0xa20402f5  sb          $a0, 0x2F5($s0)
    ctx->pc = 0x25bb50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 4));
label_25bb54:
    // 0x25bb54: 0xa20502f6  sb          $a1, 0x2F6($s0)
    ctx->pc = 0x25bb54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 5));
label_25bb58:
    // 0x25bb58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_25bb5c:
    if (ctx->pc == 0x25BB5Cu) {
        ctx->pc = 0x25BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB58u;
        // 0x25bb5c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB60u;
        goto label_25bb60;
    }
    ctx->pc = 0x25BB58u;
    {
        const bool branch_taken_0x25bb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB58u;
        // 0x25bb5c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb58) {
            ctx->pc = 0x25BB64u;
            goto label_25bb64;
        }
    }
    ctx->pc = 0x25BB60u;
label_25bb60:
    // 0x25bb60: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x25bb60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
label_25bb64:
    // 0x25bb64: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25bb64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25bb68:
    // 0x25bb68: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25bb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_25bb6c:
    // 0x25bb6c: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
label_25bb70:
    if (ctx->pc == 0x25BB70u) {
        ctx->pc = 0x25BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB6Cu;
        // 0x25bb70: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB74u;
        goto label_25bb74;
    }
    ctx->pc = 0x25BB6Cu;
    {
        const bool branch_taken_0x25bb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb6c) {
            ctx->pc = 0x25BB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BB6Cu;
            // 0x25bb70: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BC58u;
            goto label_25bc58;
        }
    }
    ctx->pc = 0x25BB74u;
label_25bb74:
    // 0x25bb74: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25bb74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25bb78:
    // 0x25bb78: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25bb78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_25bb7c:
    // 0x25bb7c: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
label_25bb80:
    if (ctx->pc == 0x25BB80u) {
        ctx->pc = 0x25BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB7Cu;
        // 0x25bb80: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB84u;
        goto label_25bb84;
    }
    ctx->pc = 0x25BB7Cu;
    {
        const bool branch_taken_0x25bb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bb7c) {
            ctx->pc = 0x25BB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BB7Cu;
            // 0x25bb80: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BC58u;
            goto label_25bc58;
        }
    }
    ctx->pc = 0x25BB84u;
label_25bb84:
    // 0x25bb84: 0xc09bc76  jal         func_26F1D8
label_25bb88:
    if (ctx->pc == 0x25BB88u) {
        ctx->pc = 0x25BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB84u;
        // 0x25bb88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB8Cu;
        goto label_25bb8c;
    }
    ctx->pc = 0x25BB84u;
    SET_GPR_U32(ctx, 31, 0x25BB8Cu);
    ctx->pc = 0x25BB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB84u;
    // 0x25bb88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x25BB84u, 0x25BB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB8Cu;
label_25bb8c:
    // 0x25bb8c: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_25bb90:
    if (ctx->pc == 0x25BB90u) {
        ctx->pc = 0x25BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB8Cu;
        // 0x25bb90: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB94u;
        goto label_25bb94;
    }
    ctx->pc = 0x25BB8Cu;
    {
        const bool branch_taken_0x25bb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bb8c) {
            ctx->pc = 0x25BB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BB8Cu;
            // 0x25bb90: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BC58u;
            goto label_25bc58;
        }
    }
    ctx->pc = 0x25BB94u;
label_25bb94:
    // 0x25bb94: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25bb94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25bb98:
    // 0x25bb98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25bb9c:
    // 0x25bb9c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_25bba0:
    if (ctx->pc == 0x25BBA0u) {
        ctx->pc = 0x25BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB9Cu;
        // 0x25bba0: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBA4u;
        goto label_25bba4;
    }
    ctx->pc = 0x25BB9Cu;
    {
        const bool branch_taken_0x25bb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB9Cu;
        // 0x25bba0: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb9c) {
            ctx->pc = 0x25BC54u;
            goto label_25bc54;
        }
    }
    ctx->pc = 0x25BBA4u;
label_25bba4:
    // 0x25bba4: 0xc09d91a  jal         func_276468
label_25bba8:
    if (ctx->pc == 0x25BBA8u) {
        ctx->pc = 0x25BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBA4u;
        // 0x25bba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBACu;
        goto label_25bbac;
    }
    ctx->pc = 0x25BBA4u;
    SET_GPR_U32(ctx, 31, 0x25BBACu);
    ctx->pc = 0x25BBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BBA4u;
    // 0x25bba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25BBA4u, 0x25BBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BBACu;
label_25bbac:
    // 0x25bbac: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x25bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25bbb0:
    // 0x25bbb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bbb4:
    // 0x25bbb4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x25bbb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25bbb8:
    // 0x25bbb8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x25bbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25bbbc:
    // 0x25bbbc: 0x8c653e3c  lw          $a1, 0x3E3C($v1)
    ctx->pc = 0x25bbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15932)));
label_25bbc0:
    // 0x25bbc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25bbc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bbc4:
    // 0x25bbc4: 0x8c663e40  lw          $a2, 0x3E40($v1)
    ctx->pc = 0x25bbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15936)));
label_25bbc8:
    // 0x25bbc8: 0xae0016f4  sw          $zero, 0x16F4($s0)
    ctx->pc = 0x25bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5876), GPR_U32(ctx, 0));
label_25bbcc:
    // 0x25bbcc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x25bbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_25bbd0:
    // 0x25bbd0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x25bbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_25bbd4:
    // 0x25bbd4: 0xc0aa15e  jal         func_2A8578
label_25bbd8:
    if (ctx->pc == 0x25BBD8u) {
        ctx->pc = 0x25BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBD4u;
        // 0x25bbd8: 0xc60c16f4  lwc1        $f12, 0x16F4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBDCu;
        goto label_25bbdc;
    }
    ctx->pc = 0x25BBD4u;
    SET_GPR_U32(ctx, 31, 0x25BBDCu);
    ctx->pc = 0x25BBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BBD4u;
    // 0x25bbd8: 0xc60c16f4  lwc1        $f12, 0x16F4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25BBD4u, 0x25BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BBDCu;
label_25bbdc:
    // 0x25bbdc: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x25bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
label_25bbe0:
    // 0x25bbe0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25bbe4:
    if (ctx->pc == 0x25BBE4u) {
        ctx->pc = 0x25BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBE0u;
        // 0x25bbe4: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBE8u;
        goto label_25bbe8;
    }
    ctx->pc = 0x25BBE0u;
    {
        const bool branch_taken_0x25bbe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bbe0) {
            ctx->pc = 0x25BBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BBE0u;
            // 0x25bbe4: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BBF4u;
            goto label_25bbf4;
        }
    }
    ctx->pc = 0x25BBE8u;
label_25bbe8:
    // 0x25bbe8: 0xc0a051c  jal         func_281470
label_25bbec:
    if (ctx->pc == 0x25BBECu) {
        ctx->pc = 0x25BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBE8u;
        // 0x25bbec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBF0u;
        goto label_25bbf0;
    }
    ctx->pc = 0x25BBE8u;
    SET_GPR_U32(ctx, 31, 0x25BBF0u);
    ctx->pc = 0x25BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BBE8u;
    // 0x25bbec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281470u, 0x25BBE8u, 0x25BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BBF0u;
label_25bbf0:
    // 0x25bbf0: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x25bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_25bbf4:
    // 0x25bbf4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25bbf8:
    if (ctx->pc == 0x25BBF8u) {
        ctx->pc = 0x25BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBF4u;
        // 0x25bbf8: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBFCu;
        goto label_25bbfc;
    }
    ctx->pc = 0x25BBF4u;
    {
        const bool branch_taken_0x25bbf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bbf4) {
            ctx->pc = 0x25BBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BBF4u;
            // 0x25bbf8: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BC08u;
            goto label_25bc08;
        }
    }
    ctx->pc = 0x25BBFCu;
label_25bbfc:
    // 0x25bbfc: 0xc0a0cde  jal         func_283378
label_25bc00:
    if (ctx->pc == 0x25BC00u) {
        ctx->pc = 0x25BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBFCu;
        // 0x25bc00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC04u;
        goto label_25bc04;
    }
    ctx->pc = 0x25BBFCu;
    SET_GPR_U32(ctx, 31, 0x25BC04u);
    ctx->pc = 0x25BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BBFCu;
    // 0x25bc00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283378u, 0x25BBFCu, 0x25BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC04u;
label_25bc04:
    // 0x25bc04: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x25bc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_25bc08:
    // 0x25bc08: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25bc0c:
    if (ctx->pc == 0x25BC0Cu) {
        ctx->pc = 0x25BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC08u;
        // 0x25bc0c: 0xa6110568  sh          $s1, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC10u;
        goto label_25bc10;
    }
    ctx->pc = 0x25BC08u;
    {
        const bool branch_taken_0x25bc08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bc08) {
            ctx->pc = 0x25BC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BC08u;
            // 0x25bc0c: 0xa6110568  sh          $s1, 0x568($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BC1Cu;
            goto label_25bc1c;
        }
    }
    ctx->pc = 0x25BC10u;
label_25bc10:
    // 0x25bc10: 0xc0a0cde  jal         func_283378
label_25bc14:
    if (ctx->pc == 0x25BC14u) {
        ctx->pc = 0x25BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC10u;
        // 0x25bc14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC18u;
        goto label_25bc18;
    }
    ctx->pc = 0x25BC10u;
    SET_GPR_U32(ctx, 31, 0x25BC18u);
    ctx->pc = 0x25BC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC10u;
    // 0x25bc14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283378u, 0x25BC10u, 0x25BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC18u;
label_25bc18:
    // 0x25bc18: 0xa6110568  sh          $s1, 0x568($s0)
    ctx->pc = 0x25bc18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 17));
label_25bc1c:
    // 0x25bc1c: 0xc09bc48  jal         func_26F120
label_25bc20:
    if (ctx->pc == 0x25BC20u) {
        ctx->pc = 0x25BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC1Cu;
        // 0x25bc20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC24u;
        goto label_25bc24;
    }
    ctx->pc = 0x25BC1Cu;
    SET_GPR_U32(ctx, 31, 0x25BC24u);
    ctx->pc = 0x25BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC1Cu;
    // 0x25bc20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x25BC1Cu, 0x25BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC24u;
label_25bc24:
    // 0x25bc24: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25bc24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25bc28:
    // 0x25bc28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_25bc2c:
    // 0x25bc2c: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x25bc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_25bc30:
    // 0x25bc30: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25bc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25bc34:
    // 0x25bc34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bc38:
    // 0x25bc38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bc3c:
    // 0x25bc3c: 0xc055f06  jal         func_157C18
label_25bc40:
    if (ctx->pc == 0x25BC40u) {
        ctx->pc = 0x25BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC3Cu;
        // 0x25bc40: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC44u;
        goto label_25bc44;
    }
    ctx->pc = 0x25BC3Cu;
    SET_GPR_U32(ctx, 31, 0x25BC44u);
    ctx->pc = 0x25BC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC3Cu;
    // 0x25bc40: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25BC3Cu, 0x25BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC44u;
label_25bc44:
    // 0x25bc44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_25bc48:
    if (ctx->pc == 0x25BC48u) {
        ctx->pc = 0x25BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC44u;
        // 0x25bc48: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC4Cu;
        goto label_25bc4c;
    }
    ctx->pc = 0x25BC44u;
    {
        const bool branch_taken_0x25bc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bc44) {
            ctx->pc = 0x25BC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BC44u;
            // 0x25bc48: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BC58u;
            goto label_25bc58;
        }
    }
    ctx->pc = 0x25BC4Cu;
label_25bc4c:
    // 0x25bc4c: 0xc09c176  jal         func_2705D8
label_25bc50:
    if (ctx->pc == 0x25BC50u) {
        ctx->pc = 0x25BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC4Cu;
        // 0x25bc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC54u;
        goto label_25bc54;
    }
    ctx->pc = 0x25BC4Cu;
    SET_GPR_U32(ctx, 31, 0x25BC54u);
    ctx->pc = 0x25BC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC4Cu;
    // 0x25bc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25BC4Cu, 0x25BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC54u;
label_25bc54:
    // 0x25bc54: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25bc54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25bc58:
    // 0x25bc58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25bc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25bc5c:
    // 0x25bc5c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_25bc60:
    if (ctx->pc == 0x25BC60u) {
        ctx->pc = 0x25BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC5Cu;
        // 0x25bc60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC64u;
        goto label_25bc64;
    }
    ctx->pc = 0x25BC5Cu;
    {
        const bool branch_taken_0x25bc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bc5c) {
            ctx->pc = 0x25BC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BC5Cu;
            // 0x25bc60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BCACu;
            goto label_25bcac;
        }
    }
    ctx->pc = 0x25BC64u;
label_25bc64:
    // 0x25bc64: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x25bc64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_25bc68:
    // 0x25bc68: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25bc6c:
    if (ctx->pc == 0x25BC6Cu) {
        ctx->pc = 0x25BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC68u;
        // 0x25bc6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC70u;
        goto label_25bc70;
    }
    ctx->pc = 0x25BC68u;
    {
        const bool branch_taken_0x25bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC68u;
        // 0x25bc6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc68) {
            ctx->pc = 0x25BCA8u;
            goto label_25bca8;
        }
    }
    ctx->pc = 0x25BC70u;
label_25bc70:
    // 0x25bc70: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25bc74:
    // 0x25bc74: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x25bc74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
label_25bc78:
    // 0x25bc78: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x25bc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_25bc7c:
    // 0x25bc7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25bc7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bc80:
    // 0x25bc80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25bc80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bc84:
    // 0x25bc84: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25bc84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25bc88:
    // 0x25bc88: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25bc8c:
    // 0x25bc8c: 0x40f809  jalr        $v0
label_25bc90:
    if (ctx->pc == 0x25BC90u) {
        ctx->pc = 0x25BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC8Cu;
        // 0x25bc90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC94u;
        goto label_25bc94;
    }
    ctx->pc = 0x25BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BC94u);
        ctx->pc = 0x25BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC8Cu;
        // 0x25bc90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BC8Cu, 0x25BC94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BC94u;
label_25bc94:
    // 0x25bc94: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x25bc94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25bc98:
    // 0x25bc98: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
label_25bc9c:
    if (ctx->pc == 0x25BC9Cu) {
        ctx->pc = 0x25BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC98u;
        // 0x25bc9c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BCA0u;
        goto label_25bca0;
    }
    ctx->pc = 0x25BC98u;
    {
        const bool branch_taken_0x25bc98 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x25bc98) {
            ctx->pc = 0x25BC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BC98u;
            // 0x25bc9c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BCACu;
            goto label_25bcac;
        }
    }
    ctx->pc = 0x25BCA0u;
label_25bca0:
    // 0x25bca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25bca4:
    // 0x25bca4: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x25bca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_25bca8:
    // 0x25bca8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25bca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25bcac:
    // 0x25bcac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25bcacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25bcb0:
    // 0x25bcb0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x25bcb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25bcb4:
    // 0x25bcb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25bcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25bcb8:
    // 0x25bcb8: 0x3e00008  jr          $ra
label_25bcbc:
    if (ctx->pc == 0x25BCBCu) {
        ctx->pc = 0x25BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCB8u;
        // 0x25bcbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BCC0u;
        goto label_fallthrough_0x25bcb8;
    }
    ctx->pc = 0x25BCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCB8u;
        // 0x25bcbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25bcb8:
    ctx->pc = 0x25BCC0u;
}
