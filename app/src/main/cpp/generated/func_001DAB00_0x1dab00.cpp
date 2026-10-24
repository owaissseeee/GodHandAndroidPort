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

// Function: func_001DAB00
// Address: 0x1dab00 - 0x1dae18
void func_001DAB00_0x1dab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DAB00_0x1dab00");
#endif

    switch (ctx->pc) {
        case 0x1dab00u: goto label_1dab00;
        case 0x1dab04u: goto label_1dab04;
        case 0x1dab08u: goto label_1dab08;
        case 0x1dab0cu: goto label_1dab0c;
        case 0x1dab10u: goto label_1dab10;
        case 0x1dab14u: goto label_1dab14;
        case 0x1dab18u: goto label_1dab18;
        case 0x1dab1cu: goto label_1dab1c;
        case 0x1dab20u: goto label_1dab20;
        case 0x1dab24u: goto label_1dab24;
        case 0x1dab28u: goto label_1dab28;
        case 0x1dab2cu: goto label_1dab2c;
        case 0x1dab30u: goto label_1dab30;
        case 0x1dab34u: goto label_1dab34;
        case 0x1dab38u: goto label_1dab38;
        case 0x1dab3cu: goto label_1dab3c;
        case 0x1dab40u: goto label_1dab40;
        case 0x1dab44u: goto label_1dab44;
        case 0x1dab48u: goto label_1dab48;
        case 0x1dab4cu: goto label_1dab4c;
        case 0x1dab50u: goto label_1dab50;
        case 0x1dab54u: goto label_1dab54;
        case 0x1dab58u: goto label_1dab58;
        case 0x1dab5cu: goto label_1dab5c;
        case 0x1dab60u: goto label_1dab60;
        case 0x1dab64u: goto label_1dab64;
        case 0x1dab68u: goto label_1dab68;
        case 0x1dab6cu: goto label_1dab6c;
        case 0x1dab70u: goto label_1dab70;
        case 0x1dab74u: goto label_1dab74;
        case 0x1dab78u: goto label_1dab78;
        case 0x1dab7cu: goto label_1dab7c;
        case 0x1dab80u: goto label_1dab80;
        case 0x1dab84u: goto label_1dab84;
        case 0x1dab88u: goto label_1dab88;
        case 0x1dab8cu: goto label_1dab8c;
        case 0x1dab90u: goto label_1dab90;
        case 0x1dab94u: goto label_1dab94;
        case 0x1dab98u: goto label_1dab98;
        case 0x1dab9cu: goto label_1dab9c;
        case 0x1daba0u: goto label_1daba0;
        case 0x1daba4u: goto label_1daba4;
        case 0x1daba8u: goto label_1daba8;
        case 0x1dabacu: goto label_1dabac;
        case 0x1dabb0u: goto label_1dabb0;
        case 0x1dabb4u: goto label_1dabb4;
        case 0x1dabb8u: goto label_1dabb8;
        case 0x1dabbcu: goto label_1dabbc;
        case 0x1dabc0u: goto label_1dabc0;
        case 0x1dabc4u: goto label_1dabc4;
        case 0x1dabc8u: goto label_1dabc8;
        case 0x1dabccu: goto label_1dabcc;
        case 0x1dabd0u: goto label_1dabd0;
        case 0x1dabd4u: goto label_1dabd4;
        case 0x1dabd8u: goto label_1dabd8;
        case 0x1dabdcu: goto label_1dabdc;
        case 0x1dabe0u: goto label_1dabe0;
        case 0x1dabe4u: goto label_1dabe4;
        case 0x1dabe8u: goto label_1dabe8;
        case 0x1dabecu: goto label_1dabec;
        case 0x1dabf0u: goto label_1dabf0;
        case 0x1dabf4u: goto label_1dabf4;
        case 0x1dabf8u: goto label_1dabf8;
        case 0x1dabfcu: goto label_1dabfc;
        case 0x1dac00u: goto label_1dac00;
        case 0x1dac04u: goto label_1dac04;
        case 0x1dac08u: goto label_1dac08;
        case 0x1dac0cu: goto label_1dac0c;
        case 0x1dac10u: goto label_1dac10;
        case 0x1dac14u: goto label_1dac14;
        case 0x1dac18u: goto label_1dac18;
        case 0x1dac1cu: goto label_1dac1c;
        case 0x1dac20u: goto label_1dac20;
        case 0x1dac24u: goto label_1dac24;
        case 0x1dac28u: goto label_1dac28;
        case 0x1dac2cu: goto label_1dac2c;
        case 0x1dac30u: goto label_1dac30;
        case 0x1dac34u: goto label_1dac34;
        case 0x1dac38u: goto label_1dac38;
        case 0x1dac3cu: goto label_1dac3c;
        case 0x1dac40u: goto label_1dac40;
        case 0x1dac44u: goto label_1dac44;
        case 0x1dac48u: goto label_1dac48;
        case 0x1dac4cu: goto label_1dac4c;
        case 0x1dac50u: goto label_1dac50;
        case 0x1dac54u: goto label_1dac54;
        case 0x1dac58u: goto label_1dac58;
        case 0x1dac5cu: goto label_1dac5c;
        case 0x1dac60u: goto label_1dac60;
        case 0x1dac64u: goto label_1dac64;
        case 0x1dac68u: goto label_1dac68;
        case 0x1dac6cu: goto label_1dac6c;
        case 0x1dac70u: goto label_1dac70;
        case 0x1dac74u: goto label_1dac74;
        case 0x1dac78u: goto label_1dac78;
        case 0x1dac7cu: goto label_1dac7c;
        case 0x1dac80u: goto label_1dac80;
        case 0x1dac84u: goto label_1dac84;
        case 0x1dac88u: goto label_1dac88;
        case 0x1dac8cu: goto label_1dac8c;
        case 0x1dac90u: goto label_1dac90;
        case 0x1dac94u: goto label_1dac94;
        case 0x1dac98u: goto label_1dac98;
        case 0x1dac9cu: goto label_1dac9c;
        case 0x1daca0u: goto label_1daca0;
        case 0x1daca4u: goto label_1daca4;
        case 0x1daca8u: goto label_1daca8;
        case 0x1dacacu: goto label_1dacac;
        case 0x1dacb0u: goto label_1dacb0;
        case 0x1dacb4u: goto label_1dacb4;
        case 0x1dacb8u: goto label_1dacb8;
        case 0x1dacbcu: goto label_1dacbc;
        case 0x1dacc0u: goto label_1dacc0;
        case 0x1dacc4u: goto label_1dacc4;
        case 0x1dacc8u: goto label_1dacc8;
        case 0x1dacccu: goto label_1daccc;
        case 0x1dacd0u: goto label_1dacd0;
        case 0x1dacd4u: goto label_1dacd4;
        case 0x1dacd8u: goto label_1dacd8;
        case 0x1dacdcu: goto label_1dacdc;
        case 0x1dace0u: goto label_1dace0;
        case 0x1dace4u: goto label_1dace4;
        case 0x1dace8u: goto label_1dace8;
        case 0x1dacecu: goto label_1dacec;
        case 0x1dacf0u: goto label_1dacf0;
        case 0x1dacf4u: goto label_1dacf4;
        case 0x1dacf8u: goto label_1dacf8;
        case 0x1dacfcu: goto label_1dacfc;
        case 0x1dad00u: goto label_1dad00;
        case 0x1dad04u: goto label_1dad04;
        case 0x1dad08u: goto label_1dad08;
        case 0x1dad0cu: goto label_1dad0c;
        case 0x1dad10u: goto label_1dad10;
        case 0x1dad14u: goto label_1dad14;
        case 0x1dad18u: goto label_1dad18;
        case 0x1dad1cu: goto label_1dad1c;
        case 0x1dad20u: goto label_1dad20;
        case 0x1dad24u: goto label_1dad24;
        case 0x1dad28u: goto label_1dad28;
        case 0x1dad2cu: goto label_1dad2c;
        case 0x1dad30u: goto label_1dad30;
        case 0x1dad34u: goto label_1dad34;
        case 0x1dad38u: goto label_1dad38;
        case 0x1dad3cu: goto label_1dad3c;
        case 0x1dad40u: goto label_1dad40;
        case 0x1dad44u: goto label_1dad44;
        case 0x1dad48u: goto label_1dad48;
        case 0x1dad4cu: goto label_1dad4c;
        case 0x1dad50u: goto label_1dad50;
        case 0x1dad54u: goto label_1dad54;
        case 0x1dad58u: goto label_1dad58;
        case 0x1dad5cu: goto label_1dad5c;
        case 0x1dad60u: goto label_1dad60;
        case 0x1dad64u: goto label_1dad64;
        case 0x1dad68u: goto label_1dad68;
        case 0x1dad6cu: goto label_1dad6c;
        case 0x1dad70u: goto label_1dad70;
        case 0x1dad74u: goto label_1dad74;
        case 0x1dad78u: goto label_1dad78;
        case 0x1dad7cu: goto label_1dad7c;
        case 0x1dad80u: goto label_1dad80;
        case 0x1dad84u: goto label_1dad84;
        case 0x1dad88u: goto label_1dad88;
        case 0x1dad8cu: goto label_1dad8c;
        case 0x1dad90u: goto label_1dad90;
        case 0x1dad94u: goto label_1dad94;
        case 0x1dad98u: goto label_1dad98;
        case 0x1dad9cu: goto label_1dad9c;
        case 0x1dada0u: goto label_1dada0;
        case 0x1dada4u: goto label_1dada4;
        case 0x1dada8u: goto label_1dada8;
        case 0x1dadacu: goto label_1dadac;
        case 0x1dadb0u: goto label_1dadb0;
        case 0x1dadb4u: goto label_1dadb4;
        case 0x1dadb8u: goto label_1dadb8;
        case 0x1dadbcu: goto label_1dadbc;
        case 0x1dadc0u: goto label_1dadc0;
        case 0x1dadc4u: goto label_1dadc4;
        case 0x1dadc8u: goto label_1dadc8;
        case 0x1dadccu: goto label_1dadcc;
        case 0x1dadd0u: goto label_1dadd0;
        case 0x1dadd4u: goto label_1dadd4;
        case 0x1dadd8u: goto label_1dadd8;
        case 0x1daddcu: goto label_1daddc;
        case 0x1dade0u: goto label_1dade0;
        case 0x1dade4u: goto label_1dade4;
        case 0x1dade8u: goto label_1dade8;
        case 0x1dadecu: goto label_1dadec;
        case 0x1dadf0u: goto label_1dadf0;
        case 0x1dadf4u: goto label_1dadf4;
        case 0x1dadf8u: goto label_1dadf8;
        case 0x1dadfcu: goto label_1dadfc;
        case 0x1dae00u: goto label_1dae00;
        case 0x1dae04u: goto label_1dae04;
        case 0x1dae08u: goto label_1dae08;
        case 0x1dae0cu: goto label_1dae0c;
        case 0x1dae10u: goto label_1dae10;
        case 0x1dae14u: goto label_1dae14;
        default: break;
    }

    ctx->pc = 0x1dab00u;

label_1dab00:
    // 0x1dab00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dab04:
    // 0x1dab04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dab08:
    // 0x1dab08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1dab0c:
    // 0x1dab0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dab0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dab10:
    // 0x1dab10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1dab10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1dab14:
    // 0x1dab14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dab18:
    // 0x1dab18: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1dab18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1dab1c:
    // 0x1dab1c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1dab1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1dab20:
    // 0x1dab20: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_1dab24:
    if (ctx->pc == 0x1DAB24u) {
        ctx->pc = 0x1DAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB20u;
        // 0x1dab24: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB28u;
        goto label_1dab28;
    }
    ctx->pc = 0x1DAB20u;
    {
        const bool branch_taken_0x1dab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB20u;
        // 0x1dab24: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab20) {
            ctx->pc = 0x1DADFCu;
            goto label_1dadfc;
        }
    }
    ctx->pc = 0x1DAB28u;
label_1dab28:
    // 0x1dab28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dab28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dab2c:
    // 0x1dab2c: 0x2442b380  addiu       $v0, $v0, -0x4C80
    ctx->pc = 0x1dab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947712));
label_1dab30:
    // 0x1dab30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1dab34:
    // 0x1dab34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1dab34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dab38:
    // 0x1dab38: 0x800008  jr          $a0
label_1dab3c:
    if (ctx->pc == 0x1DAB3Cu) {
        ctx->pc = 0x1DAB40u;
        goto label_1dab40;
    }
    ctx->pc = 0x1DAB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAB40u: goto label_1dab40;
            case 0x1DAC64u: goto label_1dac64;
            case 0x1DACBCu: goto label_1dacbc;
            case 0x1DAD40u: goto label_1dad40;
            case 0x1DAD60u: goto label_1dad60;
            case 0x1DADD0u: goto label_1dadd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAB38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DAB40u;
label_1dab40:
    // 0x1dab40: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1dab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
label_1dab44:
    // 0x1dab44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dab48:
    if (ctx->pc == 0x1DAB48u) {
        ctx->pc = 0x1DAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB44u;
        // 0x1dab48: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB4Cu;
        goto label_1dab4c;
    }
    ctx->pc = 0x1DAB44u;
    {
        const bool branch_taken_0x1dab44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB44u;
        // 0x1dab48: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab44) {
            ctx->pc = 0x1DAB54u;
            goto label_1dab54;
        }
    }
    ctx->pc = 0x1DAB4Cu;
label_1dab4c:
    // 0x1dab4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dab50:
    if (ctx->pc == 0x1DAB50u) {
        ctx->pc = 0x1DAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB4Cu;
        // 0x1dab50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB54u;
        goto label_1dab54;
    }
    ctx->pc = 0x1DAB4Cu;
    {
        const bool branch_taken_0x1dab4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB4Cu;
        // 0x1dab50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab4c) {
            ctx->pc = 0x1DAB5Cu;
            goto label_1dab5c;
        }
    }
    ctx->pc = 0x1DAB54u;
label_1dab54:
    // 0x1dab54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dab54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dab58:
    // 0x1dab58: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1dab58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1dab5c:
    // 0x1dab5c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1dab5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1dab60:
    // 0x1dab60: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
label_1dab64:
    if (ctx->pc == 0x1DAB64u) {
        ctx->pc = 0x1DAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB60u;
        // 0x1dab64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB68u;
        goto label_1dab68;
    }
    ctx->pc = 0x1DAB60u;
    {
        const bool branch_taken_0x1dab60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB60u;
        // 0x1dab64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab60) {
            ctx->pc = 0x1DAE00u;
            goto label_1dae00;
        }
    }
    ctx->pc = 0x1DAB68u;
label_1dab68:
    // 0x1dab68: 0x9e223020  lwu         $v0, 0x3020($s1)
    ctx->pc = 0x1dab68u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12320)));
label_1dab6c:
    // 0x1dab6c: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x1dab6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
label_1dab70:
    // 0x1dab70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dab74:
    // 0x1dab74: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1dab78:
    if (ctx->pc == 0x1DAB78u) {
        ctx->pc = 0x1DAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB74u;
        // 0x1dab78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB7Cu;
        goto label_1dab7c;
    }
    ctx->pc = 0x1DAB74u;
    {
        const bool branch_taken_0x1dab74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB74u;
        // 0x1dab78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab74) {
            ctx->pc = 0x1DAC10u;
            goto label_1dac10;
        }
    }
    ctx->pc = 0x1DAB7Cu;
label_1dab7c:
    // 0x1dab7c: 0x8e223004  lw          $v0, 0x3004($s1)
    ctx->pc = 0x1dab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1dab80:
    // 0x1dab80: 0x92243044  lbu         $a0, 0x3044($s1)
    ctx->pc = 0x1dab80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12356)));
label_1dab84:
    // 0x1dab84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dab84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dab88:
    // 0x1dab88: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1dab8c:
    if (ctx->pc == 0x1DAB8Cu) {
        ctx->pc = 0x1DAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB88u;
        // 0x1dab8c: 0x94720604  lhu         $s2, 0x604($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB90u;
        goto label_1dab90;
    }
    ctx->pc = 0x1DAB88u;
    {
        const bool branch_taken_0x1dab88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB88u;
        // 0x1dab8c: 0x94720604  lhu         $s2, 0x604($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab88) {
            ctx->pc = 0x1DABB4u;
            goto label_1dabb4;
        }
    }
    ctx->pc = 0x1DAB90u;
label_1dab90:
    // 0x1dab90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dab90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dab94:
    // 0x1dab94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dab94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dab98:
    // 0x1dab98: 0xc07739a  jal         func_1DCE68
label_1dab9c:
    if (ctx->pc == 0x1DAB9Cu) {
        ctx->pc = 0x1DAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB98u;
        // 0x1dab9c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DABA0u;
        goto label_1daba0;
    }
    ctx->pc = 0x1DAB98u;
    SET_GPR_U32(ctx, 31, 0x1DABA0u);
    ctx->pc = 0x1DAB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB98u;
    // 0x1dab9c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCE68u, 0x1DAB98u, 0x1DABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABA0u;
label_1daba0:
    // 0x1daba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1daba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1daba4:
    // 0x1daba4: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x1daba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1daba8:
    // 0x1daba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1daba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dabac:
    // 0x1dabac: 0x10000009  b           . + 4 + (0x9 << 2)
label_1dabb0:
    if (ctx->pc == 0x1DABB0u) {
        ctx->pc = 0x1DABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABACu;
        // 0x1dabb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DABB4u;
        goto label_1dabb4;
    }
    ctx->pc = 0x1DABACu;
    {
        const bool branch_taken_0x1dabac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABACu;
        // 0x1dabb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dabac) {
            ctx->pc = 0x1DABD4u;
            goto label_1dabd4;
        }
    }
    ctx->pc = 0x1DABB4u;
label_1dabb4:
    // 0x1dabb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dabb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dabb8:
    // 0x1dabb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dabb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dabbc:
    // 0x1dabbc: 0xc07739a  jal         func_1DCE68
label_1dabc0:
    if (ctx->pc == 0x1DABC0u) {
        ctx->pc = 0x1DABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABBCu;
        // 0x1dabc0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DABC4u;
        goto label_1dabc4;
    }
    ctx->pc = 0x1DABBCu;
    SET_GPR_U32(ctx, 31, 0x1DABC4u);
    ctx->pc = 0x1DABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DABBCu;
    // 0x1dabc0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCE68u, 0x1DABBCu, 0x1DABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABC4u;
label_1dabc4:
    // 0x1dabc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dabc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dabc8:
    // 0x1dabc8: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x1dabc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1dabcc:
    // 0x1dabcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dabccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dabd0:
    // 0x1dabd0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1dabd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1dabd4:
    // 0x1dabd4: 0xc07739a  jal         func_1DCE68
label_1dabd8:
    if (ctx->pc == 0x1DABD8u) {
        ctx->pc = 0x1DABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABD4u;
        // 0x1dabd8: 0x3210ffff  andi        $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DABDCu;
        goto label_1dabdc;
    }
    ctx->pc = 0x1DABD4u;
    SET_GPR_U32(ctx, 31, 0x1DABDCu);
    ctx->pc = 0x1DABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DABD4u;
    // 0x1dabd8: 0x3210ffff  andi        $s0, $s0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCE68u, 0x1DABD4u, 0x1DABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABDCu;
label_1dabdc:
    // 0x1dabdc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1dabdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1dabe0:
    // 0x1dabe0: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x1dabe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1dabe4:
    // 0x1dabe4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1dabe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1dabe8:
    // 0x1dabe8: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1dabe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1dabec:
    // 0x1dabec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dabecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1dabf0:
    // 0x1dabf0: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1dabf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1dabf4:
    // 0x1dabf4: 0x24422e64  addiu       $v0, $v0, 0x2E64
    ctx->pc = 0x1dabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11876));
label_1dabf8:
    // 0x1dabf8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1dabf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1dabfc:
    // 0x1dabfc: 0xae223008  sw          $v0, 0x3008($s1)
    ctx->pc = 0x1dabfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12296), GPR_U32(ctx, 2));
label_1dac00:
    // 0x1dac00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dac04:
    // 0x1dac04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1dac04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1dac08:
    // 0x1dac08: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dac0c:
    if (ctx->pc == 0x1DAC0Cu) {
        ctx->pc = 0x1DAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC08u;
        // 0x1dac0c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAC10u;
        goto label_1dac10;
    }
    ctx->pc = 0x1DAC08u;
    {
        const bool branch_taken_0x1dac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC08u;
        // 0x1dac0c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac08) {
            ctx->pc = 0x1DAC18u;
            goto label_1dac18;
        }
    }
    ctx->pc = 0x1DAC10u;
label_1dac10:
    // 0x1dac10: 0xc076f86  jal         func_1DBE18
label_1dac14:
    if (ctx->pc == 0x1DAC14u) {
        ctx->pc = 0x1DAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC10u;
        // 0x1dac14: 0x26253008  addiu       $a1, $s1, 0x3008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAC18u;
        goto label_1dac18;
    }
    ctx->pc = 0x1DAC10u;
    SET_GPR_U32(ctx, 31, 0x1DAC18u);
    ctx->pc = 0x1DAC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC10u;
    // 0x1dac14: 0x26253008  addiu       $a1, $s1, 0x3008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBE18u, 0x1DAC10u, 0x1DAC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC18u;
label_1dac18:
    // 0x1dac18: 0x8e243008  lw          $a0, 0x3008($s1)
    ctx->pc = 0x1dac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1dac1c:
    // 0x1dac1c: 0xc075bb2  jal         func_1D6EC8
label_1dac20:
    if (ctx->pc == 0x1DAC20u) {
        ctx->pc = 0x1DAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC1Cu;
        // 0x1dac20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAC24u;
        goto label_1dac24;
    }
    ctx->pc = 0x1DAC1Cu;
    SET_GPR_U32(ctx, 31, 0x1DAC24u);
    ctx->pc = 0x1DAC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC1Cu;
    // 0x1dac20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6EC8u, 0x1DAC1Cu, 0x1DAC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC24u;
label_1dac24:
    // 0x1dac24: 0x8e233008  lw          $v1, 0x3008($s1)
    ctx->pc = 0x1dac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1dac28:
    // 0x1dac28: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x1dac28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_1dac2c:
    // 0x1dac2c: 0x24a58160  addiu       $a1, $a1, -0x7EA0
    ctx->pc = 0x1dac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934880));
label_1dac30:
    // 0x1dac30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1dac30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dac34:
    // 0x1dac34: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x1dac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_1dac38:
    // 0x1dac38: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1dac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1dac3c:
    // 0x1dac3c: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x1dac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_1dac40:
    // 0x1dac40: 0x8e233008  lw          $v1, 0x3008($s1)
    ctx->pc = 0x1dac40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1dac44:
    // 0x1dac44: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1dac44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dac48:
    // 0x1dac48: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1dac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1dac4c:
    // 0x1dac4c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1dac4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1dac50:
    // 0x1dac50: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1dac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1dac54:
    // 0x1dac54: 0x60f809  jalr        $v1
label_1dac58:
    if (ctx->pc == 0x1DAC58u) {
        ctx->pc = 0x1DAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC54u;
        // 0x1dac58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAC5Cu;
        goto label_1dac5c;
    }
    ctx->pc = 0x1DAC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DAC5Cu);
        ctx->pc = 0x1DAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC54u;
        // 0x1dac58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAC54u, 0x1DAC5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DAC5Cu;
label_1dac5c:
    // 0x1dac5c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1dac60:
    if (ctx->pc == 0x1DAC60u) {
        ctx->pc = 0x1DAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC5Cu;
        // 0x1dac60: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAC64u;
        goto label_1dac64;
    }
    ctx->pc = 0x1DAC5Cu;
    {
        const bool branch_taken_0x1dac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC5Cu;
        // 0x1dac60: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac5c) {
            ctx->pc = 0x1DAD4Cu;
            goto label_1dad4c;
        }
    }
    ctx->pc = 0x1DAC64u;
label_1dac64:
    // 0x1dac64: 0x8e233008  lw          $v1, 0x3008($s1)
    ctx->pc = 0x1dac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1dac68:
    // 0x1dac68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1dac68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1dac6c:
    // 0x1dac6c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1dac6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_1dac70:
    // 0x1dac70: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1dac70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1dac74:
    // 0x1dac74: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1dac74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dac78:
    // 0x1dac78: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1dac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1dac7c:
    // 0x1dac7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dac80:
    // 0x1dac80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dac80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dac84:
    // 0x1dac84: 0x8ce30250  lw          $v1, 0x250($a3)
    ctx->pc = 0x1dac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1dac88:
    // 0x1dac88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dac88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dac8c:
    // 0x1dac8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dac8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dac90:
    // 0x1dac90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dac90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dac94:
    // 0x1dac94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1dac94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dac98:
    // 0x1dac98: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dac98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dac9c:
    // 0x1dac9c: 0xace30250  sw          $v1, 0x250($a3)
    ctx->pc = 0x1dac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 3));
label_1daca0:
    // 0x1daca0: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1daca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1daca4:
    // 0x1daca4: 0xc0b2e92  jal         func_2CBA48
label_1daca8:
    if (ctx->pc == 0x1DACA8u) {
        ctx->pc = 0x1DACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACA4u;
        // 0x1daca8: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DACACu;
        goto label_1dacac;
    }
    ctx->pc = 0x1DACA4u;
    SET_GPR_U32(ctx, 31, 0x1DACACu);
    ctx->pc = 0x1DACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DACA4u;
    // 0x1daca8: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1DACA4u, 0x1DACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACACu;
label_1dacac:
    // 0x1dacac: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1dacacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1dacb0:
    // 0x1dacb0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1dacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dacb4:
    // 0x1dacb4: 0x10000043  b           . + 4 + (0x43 << 2)
label_1dacb8:
    if (ctx->pc == 0x1DACB8u) {
        ctx->pc = 0x1DACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACB4u;
        // 0x1dacb8: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DACBCu;
        goto label_1dacbc;
    }
    ctx->pc = 0x1DACB4u;
    {
        const bool branch_taken_0x1dacb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACB4u;
        // 0x1dacb8: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dacb4) {
            ctx->pc = 0x1DADC4u;
            goto label_1dadc4;
        }
    }
    ctx->pc = 0x1DACBCu;
label_1dacbc:
    // 0x1dacbc: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1dacbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dacc0:
    // 0x1dacc0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1dacc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1dacc4:
    // 0x1dacc4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1dacc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1dacc8:
    // 0x1dacc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dacc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1daccc:
    // 0x1daccc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1dacccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1dacd0:
    // 0x1dacd0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1dacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1dacd4:
    // 0x1dacd4: 0x246381c0  addiu       $v1, $v1, -0x7E40
    ctx->pc = 0x1dacd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934976));
label_1dacd8:
    // 0x1dacd8: 0xc4448160  lwc1        $f4, -0x7EA0($v0)
    ctx->pc = 0x1dacd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1dacdc:
    // 0x1dacdc: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1dacdcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1dace0:
    // 0x1dace0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1dace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dace4:
    // 0x1dace4: 0x8e243008  lw          $a0, 0x3008($s1)
    ctx->pc = 0x1dace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1dace8:
    // 0x1dace8: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1dace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1dacec:
    // 0x1dacec: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1dacecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1dacf0:
    // 0x1dacf0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dacf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dacf4:
    // 0x1dacf4: 0x0  nop
    ctx->pc = 0x1dacf4u;
    // NOP
label_1dacf8:
    // 0x1dacf8: 0x0  nop
    ctx->pc = 0x1dacf8u;
    // NOP
label_1dacfc:
    // 0x1dacfc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1dacfcu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1dad00:
    // 0x1dad00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dad04:
    // 0x1dad04: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1dad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dad08:
    // 0x1dad08: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x1dad08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1dad0c:
    // 0x1dad0c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1dad0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1dad10:
    // 0x1dad10: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1dad10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1dad14:
    // 0x1dad14: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1dad14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1dad18:
    // 0x1dad18: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1dad18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1dad1c:
    // 0x1dad1c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1dad1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1dad20:
    // 0x1dad20: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1dad20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1dad24:
    // 0x1dad24: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1dad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1dad28:
    // 0x1dad28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dad28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dad2c:
    // 0x1dad2c: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1dad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1dad30:
    // 0x1dad30: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1dad30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1dad34:
    // 0x1dad34: 0x8e22302c  lw          $v0, 0x302C($s1)
    ctx->pc = 0x1dad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
label_1dad38:
    // 0x1dad38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1dad3c:
    if (ctx->pc == 0x1DAD3Cu) {
        ctx->pc = 0x1DAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD38u;
        // 0x1dad3c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD40u;
        goto label_1dad40;
    }
    ctx->pc = 0x1DAD38u;
    {
        const bool branch_taken_0x1dad38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD38u;
        // 0x1dad3c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad38) {
            ctx->pc = 0x1DAD58u;
            goto label_1dad58;
        }
    }
    ctx->pc = 0x1DAD40u;
label_1dad40:
    // 0x1dad40: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1dad40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1dad44:
    // 0x1dad44: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1dad44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1dad48:
    // 0x1dad48: 0xae233028  sw          $v1, 0x3028($s1)
    ctx->pc = 0x1dad48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 3));
label_1dad4c:
    // 0x1dad4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dad50:
    // 0x1dad50: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1dad54:
    if (ctx->pc == 0x1DAD54u) {
        ctx->pc = 0x1DAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD50u;
        // 0x1dad54: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD58u;
        goto label_1dad58;
    }
    ctx->pc = 0x1DAD50u;
    {
        const bool branch_taken_0x1dad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD50u;
        // 0x1dad54: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad50) {
            ctx->pc = 0x1DADFCu;
            goto label_1dadfc;
        }
    }
    ctx->pc = 0x1DAD58u;
label_1dad58:
    // 0x1dad58: 0x10000028  b           . + 4 + (0x28 << 2)
label_1dad5c:
    if (ctx->pc == 0x1DAD5Cu) {
        ctx->pc = 0x1DAD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD58u;
        // 0x1dad5c: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD60u;
        goto label_1dad60;
    }
    ctx->pc = 0x1DAD58u;
    {
        const bool branch_taken_0x1dad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD58u;
        // 0x1dad5c: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad58) {
            ctx->pc = 0x1DADFCu;
            goto label_1dadfc;
        }
    }
    ctx->pc = 0x1DAD60u;
label_1dad60:
    // 0x1dad60: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1dad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
label_1dad64:
    // 0x1dad64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dad68:
    if (ctx->pc == 0x1DAD68u) {
        ctx->pc = 0x1DAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD64u;
        // 0x1dad68: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD6Cu;
        goto label_1dad6c;
    }
    ctx->pc = 0x1DAD64u;
    {
        const bool branch_taken_0x1dad64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD64u;
        // 0x1dad68: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad64) {
            ctx->pc = 0x1DAD74u;
            goto label_1dad74;
        }
    }
    ctx->pc = 0x1DAD6Cu;
label_1dad6c:
    // 0x1dad6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dad70:
    if (ctx->pc == 0x1DAD70u) {
        ctx->pc = 0x1DAD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD6Cu;
        // 0x1dad70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD74u;
        goto label_1dad74;
    }
    ctx->pc = 0x1DAD6Cu;
    {
        const bool branch_taken_0x1dad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD6Cu;
        // 0x1dad70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad6c) {
            ctx->pc = 0x1DAD7Cu;
            goto label_1dad7c;
        }
    }
    ctx->pc = 0x1DAD74u;
label_1dad74:
    // 0x1dad74: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dad74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dad78:
    // 0x1dad78: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1dad78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1dad7c:
    // 0x1dad7c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1dad7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1dad80:
    // 0x1dad80: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1dad84:
    if (ctx->pc == 0x1DAD84u) {
        ctx->pc = 0x1DAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD80u;
        // 0x1dad84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD88u;
        goto label_1dad88;
    }
    ctx->pc = 0x1DAD80u;
    {
        const bool branch_taken_0x1dad80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD80u;
        // 0x1dad84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad80) {
            ctx->pc = 0x1DAE00u;
            goto label_1dae00;
        }
    }
    ctx->pc = 0x1DAD88u;
label_1dad88:
    // 0x1dad88: 0x8e243008  lw          $a0, 0x3008($s1)
    ctx->pc = 0x1dad88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1dad8c:
    // 0x1dad8c: 0xc075b74  jal         func_1D6DD0
label_1dad90:
    if (ctx->pc == 0x1DAD90u) {
        ctx->pc = 0x1DAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD8Cu;
        // 0x1dad90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD94u;
        goto label_1dad94;
    }
    ctx->pc = 0x1DAD8Cu;
    SET_GPR_U32(ctx, 31, 0x1DAD94u);
    ctx->pc = 0x1DAD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD8Cu;
    // 0x1dad90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6DD0u, 0x1DAD8Cu, 0x1DAD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD94u;
label_1dad94:
    // 0x1dad94: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1dad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1dad98:
    // 0x1dad98: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1dad98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1dad9c:
    // 0x1dad9c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1dad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1dada0:
    // 0x1dada0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dada0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dada4:
    // 0x1dada4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1dada4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dada8:
    // 0x1dada8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dada8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dadac:
    // 0x1dadac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dadacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dadb0:
    // 0x1dadb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dadb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dadb4:
    // 0x1dadb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dadb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dadb8:
    // 0x1dadb8: 0xc0b2e92  jal         func_2CBA48
label_1dadbc:
    if (ctx->pc == 0x1DADBCu) {
        ctx->pc = 0x1DADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADB8u;
        // 0x1dadbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADC0u;
        goto label_1dadc0;
    }
    ctx->pc = 0x1DADB8u;
    SET_GPR_U32(ctx, 31, 0x1DADC0u);
    ctx->pc = 0x1DADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DADB8u;
    // 0x1dadbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1DADB8u, 0x1DADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DADC0u;
label_1dadc0:
    // 0x1dadc0: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1dadc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1dadc4:
    // 0x1dadc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dadc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1dadc8:
    // 0x1dadc8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1dadcc:
    if (ctx->pc == 0x1DADCCu) {
        ctx->pc = 0x1DADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADC8u;
        // 0x1dadcc: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADD0u;
        goto label_1dadd0;
    }
    ctx->pc = 0x1DADC8u;
    {
        const bool branch_taken_0x1dadc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADC8u;
        // 0x1dadcc: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dadc8) {
            ctx->pc = 0x1DADFCu;
            goto label_1dadfc;
        }
    }
    ctx->pc = 0x1DADD0u;
label_1dadd0:
    // 0x1dadd0: 0x8e233008  lw          $v1, 0x3008($s1)
    ctx->pc = 0x1dadd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1dadd4:
    // 0x1dadd4: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1dadd4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1dadd8:
    // 0x1dadd8: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1dadd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1daddc:
    // 0x1daddc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1daddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dade0:
    // 0x1dade0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dade4:
    if (ctx->pc == 0x1DADE4u) {
        ctx->pc = 0x1DADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADE0u;
        // 0x1dade4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADE8u;
        goto label_1dade8;
    }
    ctx->pc = 0x1DADE0u;
    {
        const bool branch_taken_0x1dade0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADE0u;
        // 0x1dade4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dade0) {
            ctx->pc = 0x1DADFCu;
            goto label_1dadfc;
        }
    }
    ctx->pc = 0x1DADE8u;
label_1dade8:
    // 0x1dade8: 0xc077afa  jal         func_1DEBE8
label_1dadec:
    if (ctx->pc == 0x1DADECu) {
        ctx->pc = 0x1DADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADE8u;
        // 0x1dadec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADF0u;
        goto label_1dadf0;
    }
    ctx->pc = 0x1DADE8u;
    SET_GPR_U32(ctx, 31, 0x1DADF0u);
    ctx->pc = 0x1DADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DADE8u;
    // 0x1dadec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBE8u, 0x1DADE8u, 0x1DADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DADF0u;
label_1dadf0:
    // 0x1dadf0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1dadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1dadf4:
    // 0x1dadf4: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1dadf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
label_1dadf8:
    // 0x1dadf8: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1dadf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1dadfc:
    // 0x1dadfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dadfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dae00:
    // 0x1dae00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dae00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dae04:
    // 0x1dae04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1dae04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dae08:
    // 0x1dae08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dae08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dae0c:
    // 0x1dae0c: 0x3e00008  jr          $ra
label_1dae10:
    if (ctx->pc == 0x1DAE10u) {
        ctx->pc = 0x1DAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE0Cu;
        // 0x1dae10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE14u;
        goto label_1dae14;
    }
    ctx->pc = 0x1DAE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE0Cu;
        // 0x1dae10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAE14u;
label_1dae14:
    // 0x1dae14: 0x0  nop
    ctx->pc = 0x1dae14u;
    // NOP
    ctx->pc = 0x1dae18u;
}
