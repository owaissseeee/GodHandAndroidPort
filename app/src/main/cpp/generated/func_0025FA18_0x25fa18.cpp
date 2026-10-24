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

// Function: func_0025FA18
// Address: 0x25fa18 - 0x25fcf8
void func_0025FA18_0x25fa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025FA18_0x25fa18");
#endif

    switch (ctx->pc) {
        case 0x25fa18u: goto label_25fa18;
        case 0x25fa1cu: goto label_25fa1c;
        case 0x25fa20u: goto label_25fa20;
        case 0x25fa24u: goto label_25fa24;
        case 0x25fa28u: goto label_25fa28;
        case 0x25fa2cu: goto label_25fa2c;
        case 0x25fa30u: goto label_25fa30;
        case 0x25fa34u: goto label_25fa34;
        case 0x25fa38u: goto label_25fa38;
        case 0x25fa3cu: goto label_25fa3c;
        case 0x25fa40u: goto label_25fa40;
        case 0x25fa44u: goto label_25fa44;
        case 0x25fa48u: goto label_25fa48;
        case 0x25fa4cu: goto label_25fa4c;
        case 0x25fa50u: goto label_25fa50;
        case 0x25fa54u: goto label_25fa54;
        case 0x25fa58u: goto label_25fa58;
        case 0x25fa5cu: goto label_25fa5c;
        case 0x25fa60u: goto label_25fa60;
        case 0x25fa64u: goto label_25fa64;
        case 0x25fa68u: goto label_25fa68;
        case 0x25fa6cu: goto label_25fa6c;
        case 0x25fa70u: goto label_25fa70;
        case 0x25fa74u: goto label_25fa74;
        case 0x25fa78u: goto label_25fa78;
        case 0x25fa7cu: goto label_25fa7c;
        case 0x25fa80u: goto label_25fa80;
        case 0x25fa84u: goto label_25fa84;
        case 0x25fa88u: goto label_25fa88;
        case 0x25fa8cu: goto label_25fa8c;
        case 0x25fa90u: goto label_25fa90;
        case 0x25fa94u: goto label_25fa94;
        case 0x25fa98u: goto label_25fa98;
        case 0x25fa9cu: goto label_25fa9c;
        case 0x25faa0u: goto label_25faa0;
        case 0x25faa4u: goto label_25faa4;
        case 0x25faa8u: goto label_25faa8;
        case 0x25faacu: goto label_25faac;
        case 0x25fab0u: goto label_25fab0;
        case 0x25fab4u: goto label_25fab4;
        case 0x25fab8u: goto label_25fab8;
        case 0x25fabcu: goto label_25fabc;
        case 0x25fac0u: goto label_25fac0;
        case 0x25fac4u: goto label_25fac4;
        case 0x25fac8u: goto label_25fac8;
        case 0x25faccu: goto label_25facc;
        case 0x25fad0u: goto label_25fad0;
        case 0x25fad4u: goto label_25fad4;
        case 0x25fad8u: goto label_25fad8;
        case 0x25fadcu: goto label_25fadc;
        case 0x25fae0u: goto label_25fae0;
        case 0x25fae4u: goto label_25fae4;
        case 0x25fae8u: goto label_25fae8;
        case 0x25faecu: goto label_25faec;
        case 0x25faf0u: goto label_25faf0;
        case 0x25faf4u: goto label_25faf4;
        case 0x25faf8u: goto label_25faf8;
        case 0x25fafcu: goto label_25fafc;
        case 0x25fb00u: goto label_25fb00;
        case 0x25fb04u: goto label_25fb04;
        case 0x25fb08u: goto label_25fb08;
        case 0x25fb0cu: goto label_25fb0c;
        case 0x25fb10u: goto label_25fb10;
        case 0x25fb14u: goto label_25fb14;
        case 0x25fb18u: goto label_25fb18;
        case 0x25fb1cu: goto label_25fb1c;
        case 0x25fb20u: goto label_25fb20;
        case 0x25fb24u: goto label_25fb24;
        case 0x25fb28u: goto label_25fb28;
        case 0x25fb2cu: goto label_25fb2c;
        case 0x25fb30u: goto label_25fb30;
        case 0x25fb34u: goto label_25fb34;
        case 0x25fb38u: goto label_25fb38;
        case 0x25fb3cu: goto label_25fb3c;
        case 0x25fb40u: goto label_25fb40;
        case 0x25fb44u: goto label_25fb44;
        case 0x25fb48u: goto label_25fb48;
        case 0x25fb4cu: goto label_25fb4c;
        case 0x25fb50u: goto label_25fb50;
        case 0x25fb54u: goto label_25fb54;
        case 0x25fb58u: goto label_25fb58;
        case 0x25fb5cu: goto label_25fb5c;
        case 0x25fb60u: goto label_25fb60;
        case 0x25fb64u: goto label_25fb64;
        case 0x25fb68u: goto label_25fb68;
        case 0x25fb6cu: goto label_25fb6c;
        case 0x25fb70u: goto label_25fb70;
        case 0x25fb74u: goto label_25fb74;
        case 0x25fb78u: goto label_25fb78;
        case 0x25fb7cu: goto label_25fb7c;
        case 0x25fb80u: goto label_25fb80;
        case 0x25fb84u: goto label_25fb84;
        case 0x25fb88u: goto label_25fb88;
        case 0x25fb8cu: goto label_25fb8c;
        case 0x25fb90u: goto label_25fb90;
        case 0x25fb94u: goto label_25fb94;
        case 0x25fb98u: goto label_25fb98;
        case 0x25fb9cu: goto label_25fb9c;
        case 0x25fba0u: goto label_25fba0;
        case 0x25fba4u: goto label_25fba4;
        case 0x25fba8u: goto label_25fba8;
        case 0x25fbacu: goto label_25fbac;
        case 0x25fbb0u: goto label_25fbb0;
        case 0x25fbb4u: goto label_25fbb4;
        case 0x25fbb8u: goto label_25fbb8;
        case 0x25fbbcu: goto label_25fbbc;
        case 0x25fbc0u: goto label_25fbc0;
        case 0x25fbc4u: goto label_25fbc4;
        case 0x25fbc8u: goto label_25fbc8;
        case 0x25fbccu: goto label_25fbcc;
        case 0x25fbd0u: goto label_25fbd0;
        case 0x25fbd4u: goto label_25fbd4;
        case 0x25fbd8u: goto label_25fbd8;
        case 0x25fbdcu: goto label_25fbdc;
        case 0x25fbe0u: goto label_25fbe0;
        case 0x25fbe4u: goto label_25fbe4;
        case 0x25fbe8u: goto label_25fbe8;
        case 0x25fbecu: goto label_25fbec;
        case 0x25fbf0u: goto label_25fbf0;
        case 0x25fbf4u: goto label_25fbf4;
        case 0x25fbf8u: goto label_25fbf8;
        case 0x25fbfcu: goto label_25fbfc;
        case 0x25fc00u: goto label_25fc00;
        case 0x25fc04u: goto label_25fc04;
        case 0x25fc08u: goto label_25fc08;
        case 0x25fc0cu: goto label_25fc0c;
        case 0x25fc10u: goto label_25fc10;
        case 0x25fc14u: goto label_25fc14;
        case 0x25fc18u: goto label_25fc18;
        case 0x25fc1cu: goto label_25fc1c;
        case 0x25fc20u: goto label_25fc20;
        case 0x25fc24u: goto label_25fc24;
        case 0x25fc28u: goto label_25fc28;
        case 0x25fc2cu: goto label_25fc2c;
        case 0x25fc30u: goto label_25fc30;
        case 0x25fc34u: goto label_25fc34;
        case 0x25fc38u: goto label_25fc38;
        case 0x25fc3cu: goto label_25fc3c;
        case 0x25fc40u: goto label_25fc40;
        case 0x25fc44u: goto label_25fc44;
        case 0x25fc48u: goto label_25fc48;
        case 0x25fc4cu: goto label_25fc4c;
        case 0x25fc50u: goto label_25fc50;
        case 0x25fc54u: goto label_25fc54;
        case 0x25fc58u: goto label_25fc58;
        case 0x25fc5cu: goto label_25fc5c;
        case 0x25fc60u: goto label_25fc60;
        case 0x25fc64u: goto label_25fc64;
        case 0x25fc68u: goto label_25fc68;
        case 0x25fc6cu: goto label_25fc6c;
        case 0x25fc70u: goto label_25fc70;
        case 0x25fc74u: goto label_25fc74;
        case 0x25fc78u: goto label_25fc78;
        case 0x25fc7cu: goto label_25fc7c;
        case 0x25fc80u: goto label_25fc80;
        case 0x25fc84u: goto label_25fc84;
        case 0x25fc88u: goto label_25fc88;
        case 0x25fc8cu: goto label_25fc8c;
        case 0x25fc90u: goto label_25fc90;
        case 0x25fc94u: goto label_25fc94;
        case 0x25fc98u: goto label_25fc98;
        case 0x25fc9cu: goto label_25fc9c;
        case 0x25fca0u: goto label_25fca0;
        case 0x25fca4u: goto label_25fca4;
        case 0x25fca8u: goto label_25fca8;
        case 0x25fcacu: goto label_25fcac;
        case 0x25fcb0u: goto label_25fcb0;
        case 0x25fcb4u: goto label_25fcb4;
        case 0x25fcb8u: goto label_25fcb8;
        case 0x25fcbcu: goto label_25fcbc;
        case 0x25fcc0u: goto label_25fcc0;
        case 0x25fcc4u: goto label_25fcc4;
        case 0x25fcc8u: goto label_25fcc8;
        case 0x25fcccu: goto label_25fccc;
        case 0x25fcd0u: goto label_25fcd0;
        case 0x25fcd4u: goto label_25fcd4;
        case 0x25fcd8u: goto label_25fcd8;
        case 0x25fcdcu: goto label_25fcdc;
        case 0x25fce0u: goto label_25fce0;
        case 0x25fce4u: goto label_25fce4;
        case 0x25fce8u: goto label_25fce8;
        case 0x25fcecu: goto label_25fcec;
        case 0x25fcf0u: goto label_25fcf0;
        case 0x25fcf4u: goto label_25fcf4;
        default: break;
    }

    ctx->pc = 0x25fa18u;

label_25fa18:
    // 0x25fa18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25fa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_25fa1c:
    // 0x25fa1c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25fa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25fa20:
    // 0x25fa20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25fa20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25fa24:
    // 0x25fa24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25fa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25fa28:
    // 0x25fa28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25fa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25fa2c:
    // 0x25fa2c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25fa30:
    // 0x25fa30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25fa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25fa34:
    // 0x25fa34: 0xc0b6dac  jal         func_2DB6B0
label_25fa38:
    if (ctx->pc == 0x25FA38u) {
        ctx->pc = 0x25FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA34u;
        // 0x25fa38: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA3Cu;
        goto label_25fa3c;
    }
    ctx->pc = 0x25FA34u;
    SET_GPR_U32(ctx, 31, 0x25FA3Cu);
    ctx->pc = 0x25FA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA34u;
    // 0x25fa38: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25FA34u, 0x25FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA3Cu;
label_25fa3c:
    // 0x25fa3c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x25fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_25fa40:
    // 0x25fa40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25fa40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25fa44:
    // 0x25fa44: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x25fa44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_25fa48:
    // 0x25fa48: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x25fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_25fa4c:
    // 0x25fa4c: 0x40f809  jalr        $v0
label_25fa50:
    if (ctx->pc == 0x25FA50u) {
        ctx->pc = 0x25FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA4Cu;
        // 0x25fa50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA54u;
        goto label_25fa54;
    }
    ctx->pc = 0x25FA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25FA54u);
        ctx->pc = 0x25FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA4Cu;
        // 0x25fa50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FA4Cu, 0x25FA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25FA54u;
label_25fa54:
    // 0x25fa54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25fa54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25fa58:
    // 0x25fa58: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25fa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25fa5c:
    // 0x25fa5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25fa5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fa60:
    // 0x25fa60: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25fa60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25fa64:
    // 0x25fa64: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_25fa68:
    if (ctx->pc == 0x25FA68u) {
        ctx->pc = 0x25FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA64u;
        // 0x25fa68: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA6Cu;
        goto label_25fa6c;
    }
    ctx->pc = 0x25FA64u;
    {
        const bool branch_taken_0x25fa64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA64u;
        // 0x25fa68: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa64) {
            ctx->pc = 0x25FAA0u;
            goto label_25faa0;
        }
    }
    ctx->pc = 0x25FA6Cu;
label_25fa6c:
    // 0x25fa6c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x25fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_25fa70:
    // 0x25fa70: 0x2444fde6  addiu       $a0, $v0, -0x21A
    ctx->pc = 0x25fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966758));
label_25fa74:
    // 0x25fa74: 0x2c830041  sltiu       $v1, $a0, 0x41
    ctx->pc = 0x25fa74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_25fa78:
    // 0x25fa78: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_25fa7c:
    if (ctx->pc == 0x25FA7Cu) {
        ctx->pc = 0x25FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA78u;
        // 0x25fa7c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA80u;
        goto label_25fa80;
    }
    ctx->pc = 0x25FA78u;
    {
        const bool branch_taken_0x25fa78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA78u;
        // 0x25fa7c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa78) {
            ctx->pc = 0x25FAA0u;
            goto label_25faa0;
        }
    }
    ctx->pc = 0x25FA80u;
label_25fa80:
    // 0x25fa80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25fa84:
    // 0x25fa84: 0x24423ea0  addiu       $v0, $v0, 0x3EA0
    ctx->pc = 0x25fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16032));
label_25fa88:
    // 0x25fa88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25fa8c:
    // 0x25fa8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25fa90:
    // 0x25fa90: 0x800008  jr          $a0
label_25fa94:
    if (ctx->pc == 0x25FA94u) {
        ctx->pc = 0x25FA98u;
        goto label_25fa98;
    }
    ctx->pc = 0x25FA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FA98u: goto label_25fa98;
            case 0x25FAA0u: goto label_25faa0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FA90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25FA98u;
label_25fa98:
    // 0x25fa98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25fa9c:
    // 0x25fa9c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25fa9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25faa0:
    // 0x25faa0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x25faa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25faa4:
    // 0x25faa4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x25faa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25faa8:
    // 0x25faa8: 0x10700027  beq         $v1, $s0, . + 4 + (0x27 << 2)
label_25faac:
    if (ctx->pc == 0x25FAACu) {
        ctx->pc = 0x25FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAA8u;
        // 0x25faac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FAB0u;
        goto label_25fab0;
    }
    ctx->pc = 0x25FAA8u;
    {
        const bool branch_taken_0x25faa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x25FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAA8u;
        // 0x25faac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25faa8) {
            ctx->pc = 0x25FB48u;
            goto label_25fb48;
        }
    }
    ctx->pc = 0x25FAB0u;
label_25fab0:
    // 0x25fab0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_25fab4:
    if (ctx->pc == 0x25FAB4u) {
        ctx->pc = 0x25FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAB0u;
        // 0x25fab4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FAB8u;
        goto label_25fab8;
    }
    ctx->pc = 0x25FAB0u;
    {
        const bool branch_taken_0x25fab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fab0) {
            ctx->pc = 0x25FAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FAB0u;
            // 0x25fab4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FAC8u;
            goto label_25fac8;
        }
    }
    ctx->pc = 0x25FAB8u;
label_25fab8:
    // 0x25fab8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_25fabc:
    if (ctx->pc == 0x25FABCu) {
        ctx->pc = 0x25FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAB8u;
        // 0x25fabc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FAC0u;
        goto label_25fac0;
    }
    ctx->pc = 0x25FAB8u;
    {
        const bool branch_taken_0x25fab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fab8) {
            ctx->pc = 0x25FABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FAB8u;
            // 0x25fabc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FAE0u;
            goto label_25fae0;
        }
    }
    ctx->pc = 0x25FAC0u;
label_25fac0:
    // 0x25fac0: 0x10000085  b           . + 4 + (0x85 << 2)
label_25fac4:
    if (ctx->pc == 0x25FAC4u) {
        ctx->pc = 0x25FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAC0u;
        // 0x25fac4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FAC8u;
        goto label_25fac8;
    }
    ctx->pc = 0x25FAC0u;
    {
        const bool branch_taken_0x25fac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAC0u;
        // 0x25fac4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fac0) {
            ctx->pc = 0x25FCD8u;
            goto label_25fcd8;
        }
    }
    ctx->pc = 0x25FAC8u;
label_25fac8:
    // 0x25fac8: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
label_25facc:
    if (ctx->pc == 0x25FACCu) {
        ctx->pc = 0x25FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAC8u;
        // 0x25facc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FAD0u;
        goto label_25fad0;
    }
    ctx->pc = 0x25FAC8u;
    {
        const bool branch_taken_0x25fac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAC8u;
        // 0x25facc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fac8) {
            ctx->pc = 0x25FB90u;
            goto label_25fb90;
        }
    }
    ctx->pc = 0x25FAD0u;
label_25fad0:
    // 0x25fad0: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
label_25fad4:
    if (ctx->pc == 0x25FAD4u) {
        ctx->pc = 0x25FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAD0u;
        // 0x25fad4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FAD8u;
        goto label_25fad8;
    }
    ctx->pc = 0x25FAD0u;
    {
        const bool branch_taken_0x25fad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAD0u;
        // 0x25fad4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fad0) {
            ctx->pc = 0x25FBFCu;
            goto label_25fbfc;
        }
    }
    ctx->pc = 0x25FAD8u;
label_25fad8:
    // 0x25fad8: 0x10000080  b           . + 4 + (0x80 << 2)
label_25fadc:
    if (ctx->pc == 0x25FADCu) {
        ctx->pc = 0x25FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAD8u;
        // 0x25fadc: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FAE0u;
        goto label_25fae0;
    }
    ctx->pc = 0x25FAD8u;
    {
        const bool branch_taken_0x25fad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAD8u;
        // 0x25fadc: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fad8) {
            ctx->pc = 0x25FCDCu;
            goto label_25fcdc;
        }
    }
    ctx->pc = 0x25FAE0u;
label_25fae0:
    // 0x25fae0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25fae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fae4:
    // 0x25fae4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25fae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25fae8:
    // 0x25fae8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25fae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25faec:
    // 0x25faec: 0x8c450444  lw          $a1, 0x444($v0)
    ctx->pc = 0x25faecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1092)));
label_25faf0:
    // 0x25faf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25faf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25faf4:
    // 0x25faf4: 0x8c460448  lw          $a2, 0x448($v0)
    ctx->pc = 0x25faf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1096)));
label_25faf8:
    // 0x25faf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25faf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fafc:
    // 0x25fafc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25fb00:
    // 0x25fb00: 0xc0aa15e  jal         func_2A8578
label_25fb04:
    if (ctx->pc == 0x25FB04u) {
        ctx->pc = 0x25FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB00u;
        // 0x25fb04: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB08u;
        goto label_25fb08;
    }
    ctx->pc = 0x25FB00u;
    SET_GPR_U32(ctx, 31, 0x25FB08u);
    ctx->pc = 0x25FB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB00u;
    // 0x25fb04: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25FB00u, 0x25FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB08u;
label_25fb08:
    // 0x25fb08: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x25fb08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_25fb0c:
    // 0x25fb0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fb10:
    // 0x25fb10: 0xa2300617  sb          $s0, 0x617($s1)
    ctx->pc = 0x25fb10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 16));
label_25fb14:
    // 0x25fb14: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x25fb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_25fb18:
    // 0x25fb18: 0x3042fdff  andi        $v0, $v0, 0xFDFF
    ctx->pc = 0x25fb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65023);
label_25fb1c:
    // 0x25fb1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25fb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25fb20:
    // 0x25fb20: 0xc097f8c  jal         func_25FE30
label_25fb24:
    if (ctx->pc == 0x25FB24u) {
        ctx->pc = 0x25FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB20u;
        // 0x25fb24: 0xa62203ac  sh          $v0, 0x3AC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB28u;
        goto label_25fb28;
    }
    ctx->pc = 0x25FB20u;
    SET_GPR_U32(ctx, 31, 0x25FB28u);
    ctx->pc = 0x25FB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB20u;
    // 0x25fb24: 0xa62203ac  sh          $v0, 0x3AC($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x25FB20u, 0x25FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB28u;
label_25fb28:
    // 0x25fb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25fb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25fb2c:
    // 0x25fb2c: 0xc07f59a  jal         func_1FD668
label_25fb30:
    if (ctx->pc == 0x25FB30u) {
        ctx->pc = 0x25FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB2Cu;
        // 0x25fb30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB34u;
        goto label_25fb34;
    }
    ctx->pc = 0x25FB2Cu;
    SET_GPR_U32(ctx, 31, 0x25FB34u);
    ctx->pc = 0x25FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB2Cu;
    // 0x25fb30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x25FB2Cu, 0x25FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB34u;
label_25fb34:
    // 0x25fb34: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25fb34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25fb38:
    // 0x25fb38: 0x240300dd  addiu       $v1, $zero, 0xDD
    ctx->pc = 0x25fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
label_25fb3c:
    // 0x25fb3c: 0xa6230568  sh          $v1, 0x568($s1)
    ctx->pc = 0x25fb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 3));
label_25fb40:
    // 0x25fb40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25fb44:
    // 0x25fb44: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25fb44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25fb48:
    // 0x25fb48: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x25fb48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
label_25fb4c:
    // 0x25fb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fb50:
    // 0x25fb50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25fb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25fb54:
    // 0x25fb54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25fb54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25fb58:
    // 0x25fb58: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x25fb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_25fb5c:
    // 0x25fb5c: 0xc055f06  jal         func_157C18
label_25fb60:
    if (ctx->pc == 0x25FB60u) {
        ctx->pc = 0x25FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB5Cu;
        // 0x25fb60: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB64u;
        goto label_25fb64;
    }
    ctx->pc = 0x25FB5Cu;
    SET_GPR_U32(ctx, 31, 0x25FB64u);
    ctx->pc = 0x25FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB5Cu;
    // 0x25fb60: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25FB5Cu, 0x25FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB64u;
label_25fb64:
    // 0x25fb64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fb68:
    // 0x25fb68: 0xc053e7c  jal         func_14F9F0
label_25fb6c:
    if (ctx->pc == 0x25FB6Cu) {
        ctx->pc = 0x25FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB68u;
        // 0x25fb6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB70u;
        goto label_25fb70;
    }
    ctx->pc = 0x25FB68u;
    SET_GPR_U32(ctx, 31, 0x25FB70u);
    ctx->pc = 0x25FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB68u;
    // 0x25fb6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25FB68u, 0x25FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB70u;
label_25fb70:
    // 0x25fb70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25fb70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25fb74:
    // 0x25fb74: 0xc053e4a  jal         func_14F928
label_25fb78:
    if (ctx->pc == 0x25FB78u) {
        ctx->pc = 0x25FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB74u;
        // 0x25fb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB7Cu;
        goto label_25fb7c;
    }
    ctx->pc = 0x25FB74u;
    SET_GPR_U32(ctx, 31, 0x25FB7Cu);
    ctx->pc = 0x25FB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB74u;
    // 0x25fb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25FB74u, 0x25FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB7Cu;
label_25fb7c:
    // 0x25fb7c: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x25fb7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
label_25fb80:
    // 0x25fb80: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_25fb84:
    if (ctx->pc == 0x25FB84u) {
        ctx->pc = 0x25FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB80u;
        // 0x25fb84: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB88u;
        goto label_25fb88;
    }
    ctx->pc = 0x25FB80u;
    {
        const bool branch_taken_0x25fb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB80u;
        // 0x25fb84: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb80) {
            ctx->pc = 0x25FCA4u;
            goto label_25fca4;
        }
    }
    ctx->pc = 0x25FB88u;
label_25fb88:
    // 0x25fb88: 0x1000004e  b           . + 4 + (0x4E << 2)
label_25fb8c:
    if (ctx->pc == 0x25FB8Cu) {
        ctx->pc = 0x25FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB88u;
        // 0x25fb8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB90u;
        goto label_25fb90;
    }
    ctx->pc = 0x25FB88u;
    {
        const bool branch_taken_0x25fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB88u;
        // 0x25fb8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb88) {
            ctx->pc = 0x25FCC4u;
            goto label_25fcc4;
        }
    }
    ctx->pc = 0x25FB90u;
label_25fb90:
    // 0x25fb90: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_25fb94:
    // 0x25fb94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25fb94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fb98:
    // 0x25fb98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25fb98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25fb9c:
    // 0x25fb9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25fb9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fba0:
    // 0x25fba0: 0x8c45153c  lw          $a1, 0x153C($v0)
    ctx->pc = 0x25fba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5436)));
label_25fba4:
    // 0x25fba4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25fba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fba8:
    // 0x25fba8: 0x8c461540  lw          $a2, 0x1540($v0)
    ctx->pc = 0x25fba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5440)));
label_25fbac:
    // 0x25fbac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fbb0:
    // 0x25fbb0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25fbb4:
    // 0x25fbb4: 0xc0aa15e  jal         func_2A8578
label_25fbb8:
    if (ctx->pc == 0x25FBB8u) {
        ctx->pc = 0x25FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBB4u;
        // 0x25fbb8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FBBCu;
        goto label_25fbbc;
    }
    ctx->pc = 0x25FBB4u;
    SET_GPR_U32(ctx, 31, 0x25FBBCu);
    ctx->pc = 0x25FBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBB4u;
    // 0x25fbb8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25FBB4u, 0x25FBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBBCu;
label_25fbbc:
    // 0x25fbbc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x25fbbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_25fbc0:
    // 0x25fbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fbc4:
    // 0x25fbc4: 0xa2300617  sb          $s0, 0x617($s1)
    ctx->pc = 0x25fbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 16));
label_25fbc8:
    // 0x25fbc8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x25fbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_25fbcc:
    // 0x25fbcc: 0x3042fdff  andi        $v0, $v0, 0xFDFF
    ctx->pc = 0x25fbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65023);
label_25fbd0:
    // 0x25fbd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25fbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25fbd4:
    // 0x25fbd4: 0xc097f8c  jal         func_25FE30
label_25fbd8:
    if (ctx->pc == 0x25FBD8u) {
        ctx->pc = 0x25FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBD4u;
        // 0x25fbd8: 0xa62203ac  sh          $v0, 0x3AC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FBDCu;
        goto label_25fbdc;
    }
    ctx->pc = 0x25FBD4u;
    SET_GPR_U32(ctx, 31, 0x25FBDCu);
    ctx->pc = 0x25FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBD4u;
    // 0x25fbd8: 0xa62203ac  sh          $v0, 0x3AC($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x25FBD4u, 0x25FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBDCu;
label_25fbdc:
    // 0x25fbdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25fbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25fbe0:
    // 0x25fbe0: 0xc07f59a  jal         func_1FD668
label_25fbe4:
    if (ctx->pc == 0x25FBE4u) {
        ctx->pc = 0x25FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBE0u;
        // 0x25fbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FBE8u;
        goto label_25fbe8;
    }
    ctx->pc = 0x25FBE0u;
    SET_GPR_U32(ctx, 31, 0x25FBE8u);
    ctx->pc = 0x25FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBE0u;
    // 0x25fbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x25FBE0u, 0x25FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBE8u;
label_25fbe8:
    // 0x25fbe8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25fbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25fbec:
    // 0x25fbec: 0x2403011d  addiu       $v1, $zero, 0x11D
    ctx->pc = 0x25fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_25fbf0:
    // 0x25fbf0: 0xa6230568  sh          $v1, 0x568($s1)
    ctx->pc = 0x25fbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 3));
label_25fbf4:
    // 0x25fbf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25fbf8:
    // 0x25fbf8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25fbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25fbfc:
    // 0x25fbfc: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x25fbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
label_25fc00:
    // 0x25fc00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25fc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fc04:
    // 0x25fc04: 0x26103050  addiu       $s0, $s0, 0x3050
    ctx->pc = 0x25fc04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
label_25fc08:
    // 0x25fc08: 0xc04e38e  jal         func_138E38
label_25fc0c:
    if (ctx->pc == 0x25FC0Cu) {
        ctx->pc = 0x25FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC08u;
        // 0x25fc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FC10u;
        goto label_25fc10;
    }
    ctx->pc = 0x25FC08u;
    SET_GPR_U32(ctx, 31, 0x25FC10u);
    ctx->pc = 0x25FC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC08u;
    // 0x25fc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138E38u, 0x25FC08u, 0x25FC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC10u;
label_25fc10:
    // 0x25fc10: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x25fc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_25fc14:
    // 0x25fc14: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x25fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_25fc18:
    // 0x25fc18: 0x26040920  addiu       $a0, $s0, 0x920
    ctx->pc = 0x25fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
label_25fc1c:
    // 0x25fc1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x25fc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25fc20:
    // 0x25fc20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25fc24:
    if (ctx->pc == 0x25FC24u) {
        ctx->pc = 0x25FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC20u;
        // 0x25fc24: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FC28u;
        goto label_25fc28;
    }
    ctx->pc = 0x25FC20u;
    {
        const bool branch_taken_0x25fc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC20u;
        // 0x25fc24: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc20) {
            ctx->pc = 0x25FC34u;
            goto label_25fc34;
        }
    }
    ctx->pc = 0x25FC28u;
label_25fc28:
    // 0x25fc28: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x25fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_25fc2c:
    // 0x25fc2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_25fc30:
    if (ctx->pc == 0x25FC30u) {
        ctx->pc = 0x25FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC2Cu;
        // 0x25fc30: 0x8c46006c  lw          $a2, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FC34u;
        goto label_25fc34;
    }
    ctx->pc = 0x25FC2Cu;
    {
        const bool branch_taken_0x25fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC2Cu;
        // 0x25fc30: 0x8c46006c  lw          $a2, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc2c) {
            ctx->pc = 0x25FC38u;
            goto label_25fc38;
        }
    }
    ctx->pc = 0x25FC34u;
label_25fc34:
    // 0x25fc34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25fc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fc38:
    // 0x25fc38: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x25fc38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_25fc3c:
    // 0x25fc3c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x25fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_25fc40:
    // 0x25fc40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x25fc40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25fc44:
    // 0x25fc44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25fc48:
    if (ctx->pc == 0x25FC48u) {
        ctx->pc = 0x25FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC44u;
        // 0x25fc48: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FC4Cu;
        goto label_25fc4c;
    }
    ctx->pc = 0x25FC44u;
    {
        const bool branch_taken_0x25fc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC44u;
        // 0x25fc48: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc44) {
            ctx->pc = 0x25FC58u;
            goto label_25fc58;
        }
    }
    ctx->pc = 0x25FC4Cu;
label_25fc4c:
    // 0x25fc4c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x25fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_25fc50:
    // 0x25fc50: 0x10000002  b           . + 4 + (0x2 << 2)
label_25fc54:
    if (ctx->pc == 0x25FC54u) {
        ctx->pc = 0x25FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC50u;
        // 0x25fc54: 0x8c470070  lw          $a3, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FC58u;
        goto label_25fc58;
    }
    ctx->pc = 0x25FC50u;
    {
        const bool branch_taken_0x25fc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC50u;
        // 0x25fc54: 0x8c470070  lw          $a3, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc50) {
            ctx->pc = 0x25FC5Cu;
            goto label_25fc5c;
        }
    }
    ctx->pc = 0x25FC58u;
label_25fc58:
    // 0x25fc58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25fc58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fc5c:
    // 0x25fc5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25fc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25fc60:
    // 0x25fc60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25fc60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25fc64:
    // 0x25fc64: 0xc04e6da  jal         func_139B68
label_25fc68:
    if (ctx->pc == 0x25FC68u) {
        ctx->pc = 0x25FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC64u;
        // 0x25fc68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FC6Cu;
        goto label_25fc6c;
    }
    ctx->pc = 0x25FC64u;
    SET_GPR_U32(ctx, 31, 0x25FC6Cu);
    ctx->pc = 0x25FC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC64u;
    // 0x25fc68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139B68u, 0x25FC64u, 0x25FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC6Cu;
label_25fc6c:
    // 0x25fc6c: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x25fc6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
label_25fc70:
    // 0x25fc70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fc74:
    // 0x25fc74: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x25fc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_25fc78:
    // 0x25fc78: 0xc055f06  jal         func_157C18
label_25fc7c:
    if (ctx->pc == 0x25FC7Cu) {
        ctx->pc = 0x25FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC78u;
        // 0x25fc7c: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FC80u;
        goto label_25fc80;
    }
    ctx->pc = 0x25FC78u;
    SET_GPR_U32(ctx, 31, 0x25FC80u);
    ctx->pc = 0x25FC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC78u;
    // 0x25fc7c: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25FC78u, 0x25FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC80u;
label_25fc80:
    // 0x25fc80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fc84:
    // 0x25fc84: 0xc053e7c  jal         func_14F9F0
label_25fc88:
    if (ctx->pc == 0x25FC88u) {
        ctx->pc = 0x25FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC84u;
        // 0x25fc88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FC8Cu;
        goto label_25fc8c;
    }
    ctx->pc = 0x25FC84u;
    SET_GPR_U32(ctx, 31, 0x25FC8Cu);
    ctx->pc = 0x25FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC84u;
    // 0x25fc88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25FC84u, 0x25FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC8Cu;
label_25fc8c:
    // 0x25fc8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25fc8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25fc90:
    // 0x25fc90: 0xc053e4a  jal         func_14F928
label_25fc94:
    if (ctx->pc == 0x25FC94u) {
        ctx->pc = 0x25FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC90u;
        // 0x25fc94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FC98u;
        goto label_25fc98;
    }
    ctx->pc = 0x25FC90u;
    SET_GPR_U32(ctx, 31, 0x25FC98u);
    ctx->pc = 0x25FC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC90u;
    // 0x25fc94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25FC90u, 0x25FC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC98u;
label_25fc98:
    // 0x25fc98: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x25fc98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
label_25fc9c:
    // 0x25fc9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25fca0:
    if (ctx->pc == 0x25FCA0u) {
        ctx->pc = 0x25FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC9Cu;
        // 0x25fca0: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FCA4u;
        goto label_25fca4;
    }
    ctx->pc = 0x25FC9Cu;
    {
        const bool branch_taken_0x25fc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC9Cu;
        // 0x25fca0: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc9c) {
            ctx->pc = 0x25FCB0u;
            goto label_25fcb0;
        }
    }
    ctx->pc = 0x25FCA4u;
label_25fca4:
    // 0x25fca4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25fca8:
    // 0x25fca8: 0x1000000a  b           . + 4 + (0xA << 2)
label_25fcac:
    if (ctx->pc == 0x25FCACu) {
        ctx->pc = 0x25FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCA8u;
        // 0x25fcac: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FCB0u;
        goto label_25fcb0;
    }
    ctx->pc = 0x25FCA8u;
    {
        const bool branch_taken_0x25fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCA8u;
        // 0x25fcac: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fca8) {
            ctx->pc = 0x25FCD4u;
            goto label_25fcd4;
        }
    }
    ctx->pc = 0x25FCB0u;
label_25fcb0:
    // 0x25fcb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25fcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25fcb4:
    // 0x25fcb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25fcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fcb8:
    // 0x25fcb8: 0xc0493d8  jal         func_124F60
label_25fcbc:
    if (ctx->pc == 0x25FCBCu) {
        ctx->pc = 0x25FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCB8u;
        // 0x25fcbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FCC0u;
        goto label_25fcc0;
    }
    ctx->pc = 0x25FCB8u;
    SET_GPR_U32(ctx, 31, 0x25FCC0u);
    ctx->pc = 0x25FCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FCB8u;
    // 0x25fcbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x25FCB8u, 0x25FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FCC0u;
label_25fcc0:
    // 0x25fcc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25fcc4:
    // 0x25fcc4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x25fcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_25fcc8:
    // 0x25fcc8: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x25fcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_25fccc:
    // 0x25fccc: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x25fcccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
label_25fcd0:
    // 0x25fcd0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x25fcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_25fcd4:
    // 0x25fcd4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25fcd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25fcd8:
    // 0x25fcd8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25fcd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25fcdc:
    // 0x25fcdc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25fcdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25fce0:
    // 0x25fce0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25fce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25fce4:
    // 0x25fce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25fce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25fce8:
    // 0x25fce8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25fcec:
    // 0x25fcec: 0x3e00008  jr          $ra
label_25fcf0:
    if (ctx->pc == 0x25FCF0u) {
        ctx->pc = 0x25FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCECu;
        // 0x25fcf0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FCF4u;
        goto label_25fcf4;
    }
    ctx->pc = 0x25FCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCECu;
        // 0x25fcf0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FCF4u;
label_25fcf4:
    // 0x25fcf4: 0x0  nop
    ctx->pc = 0x25fcf4u;
    // NOP
    ctx->pc = 0x25fcf8u;
}
