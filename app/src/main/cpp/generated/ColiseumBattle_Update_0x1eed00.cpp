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

// Function: ColiseumBattle_Update
// Address: 0x1eed00 - 0x1ef180
void ColiseumBattle_Update_0x1eed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_Update_0x1eed00");
#endif

    switch (ctx->pc) {
        case 0x1eed00u: goto label_1eed00;
        case 0x1eed04u: goto label_1eed04;
        case 0x1eed08u: goto label_1eed08;
        case 0x1eed0cu: goto label_1eed0c;
        case 0x1eed10u: goto label_1eed10;
        case 0x1eed14u: goto label_1eed14;
        case 0x1eed18u: goto label_1eed18;
        case 0x1eed1cu: goto label_1eed1c;
        case 0x1eed20u: goto label_1eed20;
        case 0x1eed24u: goto label_1eed24;
        case 0x1eed28u: goto label_1eed28;
        case 0x1eed2cu: goto label_1eed2c;
        case 0x1eed30u: goto label_1eed30;
        case 0x1eed34u: goto label_1eed34;
        case 0x1eed38u: goto label_1eed38;
        case 0x1eed3cu: goto label_1eed3c;
        case 0x1eed40u: goto label_1eed40;
        case 0x1eed44u: goto label_1eed44;
        case 0x1eed48u: goto label_1eed48;
        case 0x1eed4cu: goto label_1eed4c;
        case 0x1eed50u: goto label_1eed50;
        case 0x1eed54u: goto label_1eed54;
        case 0x1eed58u: goto label_1eed58;
        case 0x1eed5cu: goto label_1eed5c;
        case 0x1eed60u: goto label_1eed60;
        case 0x1eed64u: goto label_1eed64;
        case 0x1eed68u: goto label_1eed68;
        case 0x1eed6cu: goto label_1eed6c;
        case 0x1eed70u: goto label_1eed70;
        case 0x1eed74u: goto label_1eed74;
        case 0x1eed78u: goto label_1eed78;
        case 0x1eed7cu: goto label_1eed7c;
        case 0x1eed80u: goto label_1eed80;
        case 0x1eed84u: goto label_1eed84;
        case 0x1eed88u: goto label_1eed88;
        case 0x1eed8cu: goto label_1eed8c;
        case 0x1eed90u: goto label_1eed90;
        case 0x1eed94u: goto label_1eed94;
        case 0x1eed98u: goto label_1eed98;
        case 0x1eed9cu: goto label_1eed9c;
        case 0x1eeda0u: goto label_1eeda0;
        case 0x1eeda4u: goto label_1eeda4;
        case 0x1eeda8u: goto label_1eeda8;
        case 0x1eedacu: goto label_1eedac;
        case 0x1eedb0u: goto label_1eedb0;
        case 0x1eedb4u: goto label_1eedb4;
        case 0x1eedb8u: goto label_1eedb8;
        case 0x1eedbcu: goto label_1eedbc;
        case 0x1eedc0u: goto label_1eedc0;
        case 0x1eedc4u: goto label_1eedc4;
        case 0x1eedc8u: goto label_1eedc8;
        case 0x1eedccu: goto label_1eedcc;
        case 0x1eedd0u: goto label_1eedd0;
        case 0x1eedd4u: goto label_1eedd4;
        case 0x1eedd8u: goto label_1eedd8;
        case 0x1eeddcu: goto label_1eeddc;
        case 0x1eede0u: goto label_1eede0;
        case 0x1eede4u: goto label_1eede4;
        case 0x1eede8u: goto label_1eede8;
        case 0x1eedecu: goto label_1eedec;
        case 0x1eedf0u: goto label_1eedf0;
        case 0x1eedf4u: goto label_1eedf4;
        case 0x1eedf8u: goto label_1eedf8;
        case 0x1eedfcu: goto label_1eedfc;
        case 0x1eee00u: goto label_1eee00;
        case 0x1eee04u: goto label_1eee04;
        case 0x1eee08u: goto label_1eee08;
        case 0x1eee0cu: goto label_1eee0c;
        case 0x1eee10u: goto label_1eee10;
        case 0x1eee14u: goto label_1eee14;
        case 0x1eee18u: goto label_1eee18;
        case 0x1eee1cu: goto label_1eee1c;
        case 0x1eee20u: goto label_1eee20;
        case 0x1eee24u: goto label_1eee24;
        case 0x1eee28u: goto label_1eee28;
        case 0x1eee2cu: goto label_1eee2c;
        case 0x1eee30u: goto label_1eee30;
        case 0x1eee34u: goto label_1eee34;
        case 0x1eee38u: goto label_1eee38;
        case 0x1eee3cu: goto label_1eee3c;
        case 0x1eee40u: goto label_1eee40;
        case 0x1eee44u: goto label_1eee44;
        case 0x1eee48u: goto label_1eee48;
        case 0x1eee4cu: goto label_1eee4c;
        case 0x1eee50u: goto label_1eee50;
        case 0x1eee54u: goto label_1eee54;
        case 0x1eee58u: goto label_1eee58;
        case 0x1eee5cu: goto label_1eee5c;
        case 0x1eee60u: goto label_1eee60;
        case 0x1eee64u: goto label_1eee64;
        case 0x1eee68u: goto label_1eee68;
        case 0x1eee6cu: goto label_1eee6c;
        case 0x1eee70u: goto label_1eee70;
        case 0x1eee74u: goto label_1eee74;
        case 0x1eee78u: goto label_1eee78;
        case 0x1eee7cu: goto label_1eee7c;
        case 0x1eee80u: goto label_1eee80;
        case 0x1eee84u: goto label_1eee84;
        case 0x1eee88u: goto label_1eee88;
        case 0x1eee8cu: goto label_1eee8c;
        case 0x1eee90u: goto label_1eee90;
        case 0x1eee94u: goto label_1eee94;
        case 0x1eee98u: goto label_1eee98;
        case 0x1eee9cu: goto label_1eee9c;
        case 0x1eeea0u: goto label_1eeea0;
        case 0x1eeea4u: goto label_1eeea4;
        case 0x1eeea8u: goto label_1eeea8;
        case 0x1eeeacu: goto label_1eeeac;
        case 0x1eeeb0u: goto label_1eeeb0;
        case 0x1eeeb4u: goto label_1eeeb4;
        case 0x1eeeb8u: goto label_1eeeb8;
        case 0x1eeebcu: goto label_1eeebc;
        case 0x1eeec0u: goto label_1eeec0;
        case 0x1eeec4u: goto label_1eeec4;
        case 0x1eeec8u: goto label_1eeec8;
        case 0x1eeeccu: goto label_1eeecc;
        case 0x1eeed0u: goto label_1eeed0;
        case 0x1eeed4u: goto label_1eeed4;
        case 0x1eeed8u: goto label_1eeed8;
        case 0x1eeedcu: goto label_1eeedc;
        case 0x1eeee0u: goto label_1eeee0;
        case 0x1eeee4u: goto label_1eeee4;
        case 0x1eeee8u: goto label_1eeee8;
        case 0x1eeeecu: goto label_1eeeec;
        case 0x1eeef0u: goto label_1eeef0;
        case 0x1eeef4u: goto label_1eeef4;
        case 0x1eeef8u: goto label_1eeef8;
        case 0x1eeefcu: goto label_1eeefc;
        case 0x1eef00u: goto label_1eef00;
        case 0x1eef04u: goto label_1eef04;
        case 0x1eef08u: goto label_1eef08;
        case 0x1eef0cu: goto label_1eef0c;
        case 0x1eef10u: goto label_1eef10;
        case 0x1eef14u: goto label_1eef14;
        case 0x1eef18u: goto label_1eef18;
        case 0x1eef1cu: goto label_1eef1c;
        case 0x1eef20u: goto label_1eef20;
        case 0x1eef24u: goto label_1eef24;
        case 0x1eef28u: goto label_1eef28;
        case 0x1eef2cu: goto label_1eef2c;
        case 0x1eef30u: goto label_1eef30;
        case 0x1eef34u: goto label_1eef34;
        case 0x1eef38u: goto label_1eef38;
        case 0x1eef3cu: goto label_1eef3c;
        case 0x1eef40u: goto label_1eef40;
        case 0x1eef44u: goto label_1eef44;
        case 0x1eef48u: goto label_1eef48;
        case 0x1eef4cu: goto label_1eef4c;
        case 0x1eef50u: goto label_1eef50;
        case 0x1eef54u: goto label_1eef54;
        case 0x1eef58u: goto label_1eef58;
        case 0x1eef5cu: goto label_1eef5c;
        case 0x1eef60u: goto label_1eef60;
        case 0x1eef64u: goto label_1eef64;
        case 0x1eef68u: goto label_1eef68;
        case 0x1eef6cu: goto label_1eef6c;
        case 0x1eef70u: goto label_1eef70;
        case 0x1eef74u: goto label_1eef74;
        case 0x1eef78u: goto label_1eef78;
        case 0x1eef7cu: goto label_1eef7c;
        case 0x1eef80u: goto label_1eef80;
        case 0x1eef84u: goto label_1eef84;
        case 0x1eef88u: goto label_1eef88;
        case 0x1eef8cu: goto label_1eef8c;
        case 0x1eef90u: goto label_1eef90;
        case 0x1eef94u: goto label_1eef94;
        case 0x1eef98u: goto label_1eef98;
        case 0x1eef9cu: goto label_1eef9c;
        case 0x1eefa0u: goto label_1eefa0;
        case 0x1eefa4u: goto label_1eefa4;
        case 0x1eefa8u: goto label_1eefa8;
        case 0x1eefacu: goto label_1eefac;
        case 0x1eefb0u: goto label_1eefb0;
        case 0x1eefb4u: goto label_1eefb4;
        case 0x1eefb8u: goto label_1eefb8;
        case 0x1eefbcu: goto label_1eefbc;
        case 0x1eefc0u: goto label_1eefc0;
        case 0x1eefc4u: goto label_1eefc4;
        case 0x1eefc8u: goto label_1eefc8;
        case 0x1eefccu: goto label_1eefcc;
        case 0x1eefd0u: goto label_1eefd0;
        case 0x1eefd4u: goto label_1eefd4;
        case 0x1eefd8u: goto label_1eefd8;
        case 0x1eefdcu: goto label_1eefdc;
        case 0x1eefe0u: goto label_1eefe0;
        case 0x1eefe4u: goto label_1eefe4;
        case 0x1eefe8u: goto label_1eefe8;
        case 0x1eefecu: goto label_1eefec;
        case 0x1eeff0u: goto label_1eeff0;
        case 0x1eeff4u: goto label_1eeff4;
        case 0x1eeff8u: goto label_1eeff8;
        case 0x1eeffcu: goto label_1eeffc;
        case 0x1ef000u: goto label_1ef000;
        case 0x1ef004u: goto label_1ef004;
        case 0x1ef008u: goto label_1ef008;
        case 0x1ef00cu: goto label_1ef00c;
        case 0x1ef010u: goto label_1ef010;
        case 0x1ef014u: goto label_1ef014;
        case 0x1ef018u: goto label_1ef018;
        case 0x1ef01cu: goto label_1ef01c;
        case 0x1ef020u: goto label_1ef020;
        case 0x1ef024u: goto label_1ef024;
        case 0x1ef028u: goto label_1ef028;
        case 0x1ef02cu: goto label_1ef02c;
        case 0x1ef030u: goto label_1ef030;
        case 0x1ef034u: goto label_1ef034;
        case 0x1ef038u: goto label_1ef038;
        case 0x1ef03cu: goto label_1ef03c;
        case 0x1ef040u: goto label_1ef040;
        case 0x1ef044u: goto label_1ef044;
        case 0x1ef048u: goto label_1ef048;
        case 0x1ef04cu: goto label_1ef04c;
        case 0x1ef050u: goto label_1ef050;
        case 0x1ef054u: goto label_1ef054;
        case 0x1ef058u: goto label_1ef058;
        case 0x1ef05cu: goto label_1ef05c;
        case 0x1ef060u: goto label_1ef060;
        case 0x1ef064u: goto label_1ef064;
        case 0x1ef068u: goto label_1ef068;
        case 0x1ef06cu: goto label_1ef06c;
        case 0x1ef070u: goto label_1ef070;
        case 0x1ef074u: goto label_1ef074;
        case 0x1ef078u: goto label_1ef078;
        case 0x1ef07cu: goto label_1ef07c;
        case 0x1ef080u: goto label_1ef080;
        case 0x1ef084u: goto label_1ef084;
        case 0x1ef088u: goto label_1ef088;
        case 0x1ef08cu: goto label_1ef08c;
        case 0x1ef090u: goto label_1ef090;
        case 0x1ef094u: goto label_1ef094;
        case 0x1ef098u: goto label_1ef098;
        case 0x1ef09cu: goto label_1ef09c;
        case 0x1ef0a0u: goto label_1ef0a0;
        case 0x1ef0a4u: goto label_1ef0a4;
        case 0x1ef0a8u: goto label_1ef0a8;
        case 0x1ef0acu: goto label_1ef0ac;
        case 0x1ef0b0u: goto label_1ef0b0;
        case 0x1ef0b4u: goto label_1ef0b4;
        case 0x1ef0b8u: goto label_1ef0b8;
        case 0x1ef0bcu: goto label_1ef0bc;
        case 0x1ef0c0u: goto label_1ef0c0;
        case 0x1ef0c4u: goto label_1ef0c4;
        case 0x1ef0c8u: goto label_1ef0c8;
        case 0x1ef0ccu: goto label_1ef0cc;
        case 0x1ef0d0u: goto label_1ef0d0;
        case 0x1ef0d4u: goto label_1ef0d4;
        case 0x1ef0d8u: goto label_1ef0d8;
        case 0x1ef0dcu: goto label_1ef0dc;
        case 0x1ef0e0u: goto label_1ef0e0;
        case 0x1ef0e4u: goto label_1ef0e4;
        case 0x1ef0e8u: goto label_1ef0e8;
        case 0x1ef0ecu: goto label_1ef0ec;
        case 0x1ef0f0u: goto label_1ef0f0;
        case 0x1ef0f4u: goto label_1ef0f4;
        case 0x1ef0f8u: goto label_1ef0f8;
        case 0x1ef0fcu: goto label_1ef0fc;
        case 0x1ef100u: goto label_1ef100;
        case 0x1ef104u: goto label_1ef104;
        case 0x1ef108u: goto label_1ef108;
        case 0x1ef10cu: goto label_1ef10c;
        case 0x1ef110u: goto label_1ef110;
        case 0x1ef114u: goto label_1ef114;
        case 0x1ef118u: goto label_1ef118;
        case 0x1ef11cu: goto label_1ef11c;
        case 0x1ef120u: goto label_1ef120;
        case 0x1ef124u: goto label_1ef124;
        case 0x1ef128u: goto label_1ef128;
        case 0x1ef12cu: goto label_1ef12c;
        case 0x1ef130u: goto label_1ef130;
        case 0x1ef134u: goto label_1ef134;
        case 0x1ef138u: goto label_1ef138;
        case 0x1ef13cu: goto label_1ef13c;
        case 0x1ef140u: goto label_1ef140;
        case 0x1ef144u: goto label_1ef144;
        case 0x1ef148u: goto label_1ef148;
        case 0x1ef14cu: goto label_1ef14c;
        case 0x1ef150u: goto label_1ef150;
        case 0x1ef154u: goto label_1ef154;
        case 0x1ef158u: goto label_1ef158;
        case 0x1ef15cu: goto label_1ef15c;
        case 0x1ef160u: goto label_1ef160;
        case 0x1ef164u: goto label_1ef164;
        case 0x1ef168u: goto label_1ef168;
        case 0x1ef16cu: goto label_1ef16c;
        case 0x1ef170u: goto label_1ef170;
        case 0x1ef174u: goto label_1ef174;
        case 0x1ef178u: goto label_1ef178;
        case 0x1ef17cu: goto label_1ef17c;
        default: break;
    }

    ctx->pc = 0x1eed00u;

label_1eed00:
    // 0x1eed00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1eed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1eed04:
    // 0x1eed04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eed04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1eed08:
    // 0x1eed08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1eed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1eed0c:
    // 0x1eed0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eed0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eed10:
    // 0x1eed10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1eed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1eed14:
    // 0x1eed14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eed14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1eed18:
    // 0x1eed18: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1eed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1eed1c:
    // 0x1eed1c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1eed1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1eed20:
    // 0x1eed20: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
label_1eed24:
    if (ctx->pc == 0x1EED24u) {
        ctx->pc = 0x1EED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED20u;
        // 0x1eed24: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED28u;
        goto label_1eed28;
    }
    ctx->pc = 0x1EED20u;
    {
        const bool branch_taken_0x1eed20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED20u;
        // 0x1eed24: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed20) {
            ctx->pc = 0x1EF12Cu;
            goto label_1ef12c;
        }
    }
    ctx->pc = 0x1EED28u;
label_1eed28:
    // 0x1eed28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eed28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eed2c:
    // 0x1eed2c: 0x2442be40  addiu       $v0, $v0, -0x41C0
    ctx->pc = 0x1eed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950464));
label_1eed30:
    // 0x1eed30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1eed30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eed34:
    // 0x1eed34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1eed34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1eed38:
    // 0x1eed38: 0x800008  jr          $a0
label_1eed3c:
    if (ctx->pc == 0x1EED3Cu) {
        ctx->pc = 0x1EED40u;
        goto label_1eed40;
    }
    ctx->pc = 0x1EED38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EED40u: goto label_1eed40;
            case 0x1EEEC0u: goto label_1eeec0;
            case 0x1EEEF4u: goto label_1eeef4;
            case 0x1EEF34u: goto label_1eef34;
            case 0x1EEF6Cu: goto label_1eef6c;
            case 0x1EF0E0u: goto label_1ef0e0;
            case 0x1EF110u: goto label_1ef110;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EED38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EED40u;
label_1eed40:
    // 0x1eed40: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1eed40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1eed44:
    // 0x1eed44: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x1eed44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
label_1eed48:
    // 0x1eed48: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1eed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_1eed4c:
    // 0x1eed4c: 0x2630ae50  addiu       $s0, $s1, -0x51B0
    ctx->pc = 0x1eed4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946384));
label_1eed50:
    // 0x1eed50: 0xc050d2a  jal         func_1434A8
label_1eed54:
    if (ctx->pc == 0x1EED54u) {
        ctx->pc = 0x1EED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED50u;
        // 0x1eed54: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED58u;
        goto label_1eed58;
    }
    ctx->pc = 0x1EED50u;
    SET_GPR_U32(ctx, 31, 0x1EED58u);
    ctx->pc = 0x1EED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED50u;
    // 0x1eed54: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434A8u, 0x1EED50u, 0x1EED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED58u;
label_1eed58:
    // 0x1eed58: 0xae400b90  sw          $zero, 0xB90($s2)
    ctx->pc = 0x1eed58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2960), GPR_U32(ctx, 0));
label_1eed5c:
    // 0x1eed5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eed5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed60:
    // 0x1eed60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eed60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eed64:
    // 0x1eed64: 0xc04cccc  jal         func_133330
label_1eed68:
    if (ctx->pc == 0x1EED68u) {
        ctx->pc = 0x1EED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED64u;
        // 0x1eed68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED6Cu;
        goto label_1eed6c;
    }
    ctx->pc = 0x1EED64u;
    SET_GPR_U32(ctx, 31, 0x1EED6Cu);
    ctx->pc = 0x1EED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED64u;
    // 0x1eed68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x1EED64u, 0x1EED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED6Cu;
label_1eed6c:
    // 0x1eed6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eed6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed70:
    // 0x1eed70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1eed70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eed74:
    // 0x1eed74: 0xc04cccc  jal         func_133330
label_1eed78:
    if (ctx->pc == 0x1EED78u) {
        ctx->pc = 0x1EED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED74u;
        // 0x1eed78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED7Cu;
        goto label_1eed7c;
    }
    ctx->pc = 0x1EED74u;
    SET_GPR_U32(ctx, 31, 0x1EED7Cu);
    ctx->pc = 0x1EED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED74u;
    // 0x1eed78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x1EED74u, 0x1EED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED7Cu;
label_1eed7c:
    // 0x1eed7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eed7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed80:
    // 0x1eed80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1eed80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eed84:
    // 0x1eed84: 0xc04cccc  jal         func_133330
label_1eed88:
    if (ctx->pc == 0x1EED88u) {
        ctx->pc = 0x1EED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED84u;
        // 0x1eed88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED8Cu;
        goto label_1eed8c;
    }
    ctx->pc = 0x1EED84u;
    SET_GPR_U32(ctx, 31, 0x1EED8Cu);
    ctx->pc = 0x1EED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED84u;
    // 0x1eed88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x1EED84u, 0x1EED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED8Cu;
label_1eed8c:
    // 0x1eed8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eed8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eed90:
    // 0x1eed90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed94:
    // 0x1eed94: 0xc04cccc  jal         func_133330
label_1eed98:
    if (ctx->pc == 0x1EED98u) {
        ctx->pc = 0x1EED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED94u;
        // 0x1eed98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED9Cu;
        goto label_1eed9c;
    }
    ctx->pc = 0x1EED94u;
    SET_GPR_U32(ctx, 31, 0x1EED9Cu);
    ctx->pc = 0x1EED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED94u;
    // 0x1eed98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x1EED94u, 0x1EED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED9Cu;
label_1eed9c:
    // 0x1eed9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1eed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1eeda0:
    // 0x1eeda0: 0xc0b6cac  jal         func_2DB2B0
label_1eeda4:
    if (ctx->pc == 0x1EEDA4u) {
        ctx->pc = 0x1EEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDA0u;
        // 0x1eeda4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDA8u;
        goto label_1eeda8;
    }
    ctx->pc = 0x1EEDA0u;
    SET_GPR_U32(ctx, 31, 0x1EEDA8u);
    ctx->pc = 0x1EEDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDA0u;
    // 0x1eeda4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1EEDA0u, 0x1EEDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDA8u;
label_1eeda8:
    // 0x1eeda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eeda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eedac:
    // 0x1eedac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1eedacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1eedb0:
    // 0x1eedb0: 0xc04cccc  jal         func_133330
label_1eedb4:
    if (ctx->pc == 0x1EEDB4u) {
        ctx->pc = 0x1EEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDB0u;
        // 0x1eedb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDB8u;
        goto label_1eedb8;
    }
    ctx->pc = 0x1EEDB0u;
    SET_GPR_U32(ctx, 31, 0x1EEDB8u);
    ctx->pc = 0x1EEDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDB0u;
    // 0x1eedb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x1EEDB0u, 0x1EEDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDB8u;
label_1eedb8:
    // 0x1eedb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eedb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eedbc:
    // 0x1eedbc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1eedbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eedc0:
    // 0x1eedc0: 0xc04cccc  jal         func_133330
label_1eedc4:
    if (ctx->pc == 0x1EEDC4u) {
        ctx->pc = 0x1EEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDC0u;
        // 0x1eedc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDC8u;
        goto label_1eedc8;
    }
    ctx->pc = 0x1EEDC0u;
    SET_GPR_U32(ctx, 31, 0x1EEDC8u);
    ctx->pc = 0x1EEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDC0u;
    // 0x1eedc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x1EEDC0u, 0x1EEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDC8u;
label_1eedc8:
    // 0x1eedc8: 0x86430b60  lh          $v1, 0xB60($s2)
    ctx->pc = 0x1eedc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2912)));
label_1eedcc:
    // 0x1eedcc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1eedccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1eedd0:
    // 0x1eedd0: 0x2442e570  addiu       $v0, $v0, -0x1A90
    ctx->pc = 0x1eedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960496));
label_1eedd4:
    // 0x1eedd4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1eedd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1eedd8:
    // 0x1eedd8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1eedd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eeddc:
    // 0x1eeddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eeddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eede0:
    // 0x1eede0: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1eede0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1eede4:
    // 0x1eede4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1eede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1eede8:
    // 0x1eede8: 0x60f809  jalr        $v1
label_1eedec:
    if (ctx->pc == 0x1EEDECu) {
        ctx->pc = 0x1EEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDE8u;
        // 0x1eedec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDF0u;
        goto label_1eedf0;
    }
    ctx->pc = 0x1EEDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EEDF0u);
        ctx->pc = 0x1EEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDE8u;
        // 0x1eedec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEDE8u, 0x1EEDF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEDF0u;
label_1eedf0:
    // 0x1eedf0: 0x86430b60  lh          $v1, 0xB60($s2)
    ctx->pc = 0x1eedf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2912)));
label_1eedf4:
    // 0x1eedf4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1eedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1eedf8:
    // 0x1eedf8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1eedfc:
    if (ctx->pc == 0x1EEDFCu) {
        ctx->pc = 0x1EEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDF8u;
        // 0x1eedfc: 0x28620017  slti        $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE00u;
        goto label_1eee00;
    }
    ctx->pc = 0x1EEDF8u;
    {
        const bool branch_taken_0x1eedf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDF8u;
        // 0x1eedfc: 0x28620017  slti        $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedf8) {
            ctx->pc = 0x1EEE2Cu;
            goto label_1eee2c;
        }
    }
    ctx->pc = 0x1EEE00u;
label_1eee00:
    // 0x1eee00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eee04:
    if (ctx->pc == 0x1EEE04u) {
        ctx->pc = 0x1EEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE00u;
        // 0x1eee04: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE08u;
        goto label_1eee08;
    }
    ctx->pc = 0x1EEE00u;
    {
        const bool branch_taken_0x1eee00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE00u;
        // 0x1eee04: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee00) {
            ctx->pc = 0x1EEE18u;
            goto label_1eee18;
        }
    }
    ctx->pc = 0x1EEE08u;
label_1eee08:
    // 0x1eee08: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_1eee0c:
    if (ctx->pc == 0x1EEE0Cu) {
        ctx->pc = 0x1EEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE08u;
        // 0x1eee0c: 0x2624ae50  addiu       $a0, $s1, -0x51B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE10u;
        goto label_1eee10;
    }
    ctx->pc = 0x1EEE08u;
    {
        const bool branch_taken_0x1eee08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE08u;
        // 0x1eee0c: 0x2624ae50  addiu       $a0, $s1, -0x51B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee08) {
            ctx->pc = 0x1EEE60u;
            goto label_1eee60;
        }
    }
    ctx->pc = 0x1EEE10u;
label_1eee10:
    // 0x1eee10: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1eee14:
    if (ctx->pc == 0x1EEE14u) {
        ctx->pc = 0x1EEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE10u;
        // 0x1eee14: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE18u;
        goto label_1eee18;
    }
    ctx->pc = 0x1EEE10u;
    {
        const bool branch_taken_0x1eee10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE10u;
        // 0x1eee14: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee10) {
            ctx->pc = 0x1EEE7Cu;
            goto label_1eee7c;
        }
    }
    ctx->pc = 0x1EEE18u;
label_1eee18:
    // 0x1eee18: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1eee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1eee1c:
    // 0x1eee1c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1eee20:
    if (ctx->pc == 0x1EEE20u) {
        ctx->pc = 0x1EEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE1Cu;
        // 0x1eee20: 0x2624ae50  addiu       $a0, $s1, -0x51B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE24u;
        goto label_1eee24;
    }
    ctx->pc = 0x1EEE1Cu;
    {
        const bool branch_taken_0x1eee1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE1Cu;
        // 0x1eee20: 0x2624ae50  addiu       $a0, $s1, -0x51B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee1c) {
            ctx->pc = 0x1EEE60u;
            goto label_1eee60;
        }
    }
    ctx->pc = 0x1EEE24u;
label_1eee24:
    // 0x1eee24: 0x10000015  b           . + 4 + (0x15 << 2)
label_1eee28:
    if (ctx->pc == 0x1EEE28u) {
        ctx->pc = 0x1EEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE24u;
        // 0x1eee28: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE2Cu;
        goto label_1eee2c;
    }
    ctx->pc = 0x1EEE24u;
    {
        const bool branch_taken_0x1eee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE24u;
        // 0x1eee28: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee24) {
            ctx->pc = 0x1EEE7Cu;
            goto label_1eee7c;
        }
    }
    ctx->pc = 0x1EEE2Cu;
label_1eee2c:
    // 0x1eee2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1eee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1eee30:
    // 0x1eee30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eee34:
    // 0x1eee34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eee34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1eee38:
    // 0x1eee38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eee38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eee3c:
    // 0x1eee3c: 0x2405037b  addiu       $a1, $zero, 0x37B
    ctx->pc = 0x1eee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 891));
label_1eee40:
    // 0x1eee40: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1eee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1eee44:
    // 0x1eee44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1eee44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eee48:
    // 0x1eee48: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1eee48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1eee4c:
    // 0x1eee4c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1eee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1eee50:
    // 0x1eee50: 0xc07c126  jal         func_1F0498
label_1eee54:
    if (ctx->pc == 0x1EEE54u) {
        ctx->pc = 0x1EEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE50u;
        // 0x1eee54: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE58u;
        goto label_1eee58;
    }
    ctx->pc = 0x1EEE50u;
    SET_GPR_U32(ctx, 31, 0x1EEE58u);
    ctx->pc = 0x1EEE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE50u;
    // 0x1eee54: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1EEE50u, 0x1EEE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE58u;
label_1eee58:
    // 0x1eee58: 0x10000008  b           . + 4 + (0x8 << 2)
label_1eee5c:
    if (ctx->pc == 0x1EEE5Cu) {
        ctx->pc = 0x1EEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE58u;
        // 0x1eee5c: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE60u;
        goto label_1eee60;
    }
    ctx->pc = 0x1EEE58u;
    {
        const bool branch_taken_0x1eee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE58u;
        // 0x1eee5c: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee58) {
            ctx->pc = 0x1EEE7Cu;
            goto label_1eee7c;
        }
    }
    ctx->pc = 0x1EEE60u;
label_1eee60:
    // 0x1eee60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1eee60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1eee64:
    // 0x1eee64: 0xc04cccc  jal         func_133330
label_1eee68:
    if (ctx->pc == 0x1EEE68u) {
        ctx->pc = 0x1EEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE64u;
        // 0x1eee68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE6Cu;
        goto label_1eee6c;
    }
    ctx->pc = 0x1EEE64u;
    SET_GPR_U32(ctx, 31, 0x1EEE6Cu);
    ctx->pc = 0x1EEE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE64u;
    // 0x1eee68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x1EEE64u, 0x1EEE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE6Cu;
label_1eee6c:
    // 0x1eee6c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1eee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1eee70:
    // 0x1eee70: 0xc0b6cac  jal         func_2DB2B0
label_1eee74:
    if (ctx->pc == 0x1EEE74u) {
        ctx->pc = 0x1EEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE70u;
        // 0x1eee74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE78u;
        goto label_1eee78;
    }
    ctx->pc = 0x1EEE70u;
    SET_GPR_U32(ctx, 31, 0x1EEE78u);
    ctx->pc = 0x1EEE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE70u;
    // 0x1eee74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1EEE70u, 0x1EEE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE78u;
label_1eee78:
    // 0x1eee78: 0x9e420054  lwu         $v0, 0x54($s2)
    ctx->pc = 0x1eee78u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_1eee7c:
    // 0x1eee7c: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1eee7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1eee80:
    // 0x1eee80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1eee84:
    // 0x1eee84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1eee88:
    if (ctx->pc == 0x1EEE88u) {
        ctx->pc = 0x1EEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE84u;
        // 0x1eee88: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE8Cu;
        goto label_1eee8c;
    }
    ctx->pc = 0x1EEE84u;
    {
        const bool branch_taken_0x1eee84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE84u;
        // 0x1eee88: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee84) {
            ctx->pc = 0x1EEE98u;
            goto label_1eee98;
        }
    }
    ctx->pc = 0x1EEE8Cu;
label_1eee8c:
    // 0x1eee8c: 0xc07bffe  jal         func_1EFFF8
label_1eee90:
    if (ctx->pc == 0x1EEE90u) {
        ctx->pc = 0x1EEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE8Cu;
        // 0x1eee90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE94u;
        goto label_1eee94;
    }
    ctx->pc = 0x1EEE8Cu;
    SET_GPR_U32(ctx, 31, 0x1EEE94u);
    ctx->pc = 0x1EEE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE8Cu;
    // 0x1eee90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFFF8u, 0x1EEE8Cu, 0x1EEE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE94u;
label_1eee94:
    // 0x1eee94: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1eee94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_1eee98:
    // 0x1eee98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eee98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eee9c:
    // 0x1eee9c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1eee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_1eeea0:
    // 0x1eeea0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1eeea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1eeea4:
    // 0x1eeea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eeea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eeea8:
    // 0x1eeea8: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1eeea8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
label_1eeeac:
    // 0x1eeeac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eeeacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eeeb0:
    // 0x1eeeb0: 0xc0c1c82  jal         func_307208
label_1eeeb4:
    if (ctx->pc == 0x1EEEB4u) {
        ctx->pc = 0x1EEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEB0u;
        // 0x1eeeb4: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEB8u;
        goto label_1eeeb8;
    }
    ctx->pc = 0x1EEEB0u;
    SET_GPR_U32(ctx, 31, 0x1EEEB8u);
    ctx->pc = 0x1EEEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEEB0u;
    // 0x1eeeb4: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1EEEB0u, 0x1EEEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEB8u;
label_1eeeb8:
    // 0x1eeeb8: 0x10000086  b           . + 4 + (0x86 << 2)
label_1eeebc:
    if (ctx->pc == 0x1EEEBCu) {
        ctx->pc = 0x1EEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEB8u;
        // 0x1eeebc: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEC0u;
        goto label_1eeec0;
    }
    ctx->pc = 0x1EEEB8u;
    {
        const bool branch_taken_0x1eeeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEB8u;
        // 0x1eeebc: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeeb8) {
            ctx->pc = 0x1EF0D4u;
            goto label_1ef0d4;
        }
    }
    ctx->pc = 0x1EEEC0u;
label_1eeec0:
    // 0x1eeec0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1eeec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1eeec4:
    // 0x1eeec4: 0x24647470  addiu       $a0, $v1, 0x7470
    ctx->pc = 0x1eeec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29808));
label_1eeec8:
    // 0x1eeec8: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x1eeec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_1eeecc:
    // 0x1eeecc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1eeeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_1eeed0:
    // 0x1eeed0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eeed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1eeed4:
    // 0x1eeed4: 0x50400096  beql        $v0, $zero, . + 4 + (0x96 << 2)
label_1eeed8:
    if (ctx->pc == 0x1EEED8u) {
        ctx->pc = 0x1EEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEED4u;
        // 0x1eeed8: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEDCu;
        goto label_1eeedc;
    }
    ctx->pc = 0x1EEED4u;
    {
        const bool branch_taken_0x1eeed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeed4) {
            ctx->pc = 0x1EEED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEED4u;
            // 0x1eeed8: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF130u;
            goto label_1ef130;
        }
    }
    ctx->pc = 0x1EEEDCu;
label_1eeedc:
    // 0x1eeedc: 0xc0c1db8  jal         func_3076E0
label_1eeee0:
    if (ctx->pc == 0x1EEEE0u) {
        ctx->pc = 0x1EEEE4u;
        goto label_1eeee4;
    }
    ctx->pc = 0x1EEEDCu;
    SET_GPR_U32(ctx, 31, 0x1EEEE4u);
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x1EEEDCu, 0x1EEEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEE4u;
label_1eeee4:
    // 0x1eeee4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1eeee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1eeee8:
    // 0x1eeee8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1eeee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1eeeec:
    // 0x1eeeec: 0x10000079  b           . + 4 + (0x79 << 2)
label_1eeef0:
    if (ctx->pc == 0x1EEEF0u) {
        ctx->pc = 0x1EEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEECu;
        // 0x1eeef0: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEF4u;
        goto label_1eeef4;
    }
    ctx->pc = 0x1EEEECu;
    {
        const bool branch_taken_0x1eeeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEECu;
        // 0x1eeef0: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeeec) {
            ctx->pc = 0x1EF0D4u;
            goto label_1ef0d4;
        }
    }
    ctx->pc = 0x1EEEF4u;
label_1eeef4:
    // 0x1eeef4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1eeef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1eeef8:
    // 0x1eeef8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1eeefc:
    if (ctx->pc == 0x1EEEFCu) {
        ctx->pc = 0x1EEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEF8u;
        // 0x1eeefc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF00u;
        goto label_1eef00;
    }
    ctx->pc = 0x1EEEF8u;
    {
        const bool branch_taken_0x1eeef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEF8u;
        // 0x1eeefc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeef8) {
            ctx->pc = 0x1EEF0Cu;
            goto label_1eef0c;
        }
    }
    ctx->pc = 0x1EEF00u;
label_1eef00:
    // 0x1eef00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eef00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eef04:
    // 0x1eef04: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eef08:
    if (ctx->pc == 0x1EEF08u) {
        ctx->pc = 0x1EEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF04u;
        // 0x1eef08: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF0Cu;
        goto label_1eef0c;
    }
    ctx->pc = 0x1EEF04u;
    {
        const bool branch_taken_0x1eef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF04u;
        // 0x1eef08: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef04) {
            ctx->pc = 0x1EEF10u;
            goto label_1eef10;
        }
    }
    ctx->pc = 0x1EEF0Cu;
label_1eef0c:
    // 0x1eef0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eef10:
    // 0x1eef10: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1eef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1eef14:
    // 0x1eef14: 0x50400086  beql        $v0, $zero, . + 4 + (0x86 << 2)
label_1eef18:
    if (ctx->pc == 0x1EEF18u) {
        ctx->pc = 0x1EEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF14u;
        // 0x1eef18: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF1Cu;
        goto label_1eef1c;
    }
    ctx->pc = 0x1EEF14u;
    {
        const bool branch_taken_0x1eef14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eef14) {
            ctx->pc = 0x1EEF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEF14u;
            // 0x1eef18: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF130u;
            goto label_1ef130;
        }
    }
    ctx->pc = 0x1EEF1Cu;
label_1eef1c:
    // 0x1eef1c: 0xc07cb3c  jal         func_1F2CF0
label_1eef20:
    if (ctx->pc == 0x1EEF20u) {
        ctx->pc = 0x1EEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF1Cu;
        // 0x1eef20: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF24u;
        goto label_1eef24;
    }
    ctx->pc = 0x1EEF1Cu;
    SET_GPR_U32(ctx, 31, 0x1EEF24u);
    ctx->pc = 0x1EEF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF1Cu;
    // 0x1eef20: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2CF0u, 0x1EEF1Cu, 0x1EEF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF24u;
label_1eef24:
    // 0x1eef24: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1eef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1eef28:
    // 0x1eef28: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1eef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1eef2c:
    // 0x1eef2c: 0x10000069  b           . + 4 + (0x69 << 2)
label_1eef30:
    if (ctx->pc == 0x1EEF30u) {
        ctx->pc = 0x1EEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF2Cu;
        // 0x1eef30: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF34u;
        goto label_1eef34;
    }
    ctx->pc = 0x1EEF2Cu;
    {
        const bool branch_taken_0x1eef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF2Cu;
        // 0x1eef30: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef2c) {
            ctx->pc = 0x1EF0D4u;
            goto label_1ef0d4;
        }
    }
    ctx->pc = 0x1EEF34u;
label_1eef34:
    // 0x1eef34: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1eef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1eef38:
    // 0x1eef38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1eef3c:
    if (ctx->pc == 0x1EEF3Cu) {
        ctx->pc = 0x1EEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF38u;
        // 0x1eef3c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF40u;
        goto label_1eef40;
    }
    ctx->pc = 0x1EEF38u;
    {
        const bool branch_taken_0x1eef38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF38u;
        // 0x1eef3c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef38) {
            ctx->pc = 0x1EEF4Cu;
            goto label_1eef4c;
        }
    }
    ctx->pc = 0x1EEF40u;
label_1eef40:
    // 0x1eef40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eef40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eef44:
    // 0x1eef44: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eef48:
    if (ctx->pc == 0x1EEF48u) {
        ctx->pc = 0x1EEF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF44u;
        // 0x1eef48: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF4Cu;
        goto label_1eef4c;
    }
    ctx->pc = 0x1EEF44u;
    {
        const bool branch_taken_0x1eef44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF44u;
        // 0x1eef48: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef44) {
            ctx->pc = 0x1EEF50u;
            goto label_1eef50;
        }
    }
    ctx->pc = 0x1EEF4Cu;
label_1eef4c:
    // 0x1eef4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eef50:
    // 0x1eef50: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1eef50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1eef54:
    // 0x1eef54: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_1eef58:
    if (ctx->pc == 0x1EEF58u) {
        ctx->pc = 0x1EEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF54u;
        // 0x1eef58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF5Cu;
        goto label_1eef5c;
    }
    ctx->pc = 0x1EEF54u;
    {
        const bool branch_taken_0x1eef54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF54u;
        // 0x1eef58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef54) {
            ctx->pc = 0x1EF12Cu;
            goto label_1ef12c;
        }
    }
    ctx->pc = 0x1EEF5Cu;
label_1eef5c:
    // 0x1eef5c: 0xc07bf9c  jal         func_1EFE70
label_1eef60:
    if (ctx->pc == 0x1EEF60u) {
        ctx->pc = 0x1EEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF5Cu;
        // 0x1eef60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF64u;
        goto label_1eef64;
    }
    ctx->pc = 0x1EEF5Cu;
    SET_GPR_U32(ctx, 31, 0x1EEF64u);
    ctx->pc = 0x1EEF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF5Cu;
    // 0x1eef60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE70u, 0x1EEF5Cu, 0x1EEF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF64u;
label_1eef64:
    // 0x1eef64: 0x1000005b  b           . + 4 + (0x5B << 2)
label_1eef68:
    if (ctx->pc == 0x1EEF68u) {
        ctx->pc = 0x1EEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF64u;
        // 0x1eef68: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF6Cu;
        goto label_1eef6c;
    }
    ctx->pc = 0x1EEF64u;
    {
        const bool branch_taken_0x1eef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF64u;
        // 0x1eef68: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef64) {
            ctx->pc = 0x1EF0D4u;
            goto label_1ef0d4;
        }
    }
    ctx->pc = 0x1EEF6Cu;
label_1eef6c:
    // 0x1eef6c: 0xc07be2e  jal         func_1EF8B8
label_1eef70:
    if (ctx->pc == 0x1EEF70u) {
        ctx->pc = 0x1EEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF6Cu;
        // 0x1eef70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF74u;
        goto label_1eef74;
    }
    ctx->pc = 0x1EEF6Cu;
    SET_GPR_U32(ctx, 31, 0x1EEF74u);
    ctx->pc = 0x1EEF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF6Cu;
    // 0x1eef70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1EEF6Cu, 0x1EEF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF74u;
label_1eef74:
    // 0x1eef74: 0x8e430b8c  lw          $v1, 0xB8C($s2)
    ctx->pc = 0x1eef74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2956)));
label_1eef78:
    // 0x1eef78: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1eef78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_1eef7c:
    // 0x1eef7c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1eef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eef80:
    // 0x1eef80: 0xae430b88  sw          $v1, 0xB88($s2)
    ctx->pc = 0x1eef80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2952), GPR_U32(ctx, 3));
label_1eef84:
    // 0x1eef84: 0x8c827a84  lw          $v0, 0x7A84($a0)
    ctx->pc = 0x1eef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31364)));
label_1eef88:
    // 0x1eef88: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x1eef88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
label_1eef8c:
    // 0x1eef8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eef8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1eef90:
    // 0x1eef90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1eef94:
    if (ctx->pc == 0x1EEF94u) {
        ctx->pc = 0x1EEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF90u;
        // 0x1eef94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF98u;
        goto label_1eef98;
    }
    ctx->pc = 0x1EEF90u;
    {
        const bool branch_taken_0x1eef90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF90u;
        // 0x1eef94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef90) {
            ctx->pc = 0x1EEFB0u;
            goto label_1eefb0;
        }
    }
    ctx->pc = 0x1EEF98u;
label_1eef98:
    // 0x1eef98: 0x86450b6a  lh          $a1, 0xB6A($s2)
    ctx->pc = 0x1eef98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2922)));
label_1eef9c:
    // 0x1eef9c: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x1eef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_1eefa0:
    // 0x1eefa0: 0xc07caca  jal         func_1F2B28
label_1eefa4:
    if (ctx->pc == 0x1EEFA4u) {
        ctx->pc = 0x1EEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFA0u;
        // 0x1eefa4: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEFA8u;
        goto label_1eefa8;
    }
    ctx->pc = 0x1EEFA0u;
    SET_GPR_U32(ctx, 31, 0x1EEFA8u);
    ctx->pc = 0x1EEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEFA0u;
    // 0x1eefa4: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2B28u, 0x1EEFA0u, 0x1EEFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFA8u;
label_1eefa8:
    // 0x1eefa8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1eefac:
    if (ctx->pc == 0x1EEFACu) {
        ctx->pc = 0x1EEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFA8u;
        // 0x1eefac: 0x86430b60  lh          $v1, 0xB60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEFB0u;
        goto label_1eefb0;
    }
    ctx->pc = 0x1EEFA8u;
    {
        const bool branch_taken_0x1eefa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFA8u;
        // 0x1eefac: 0x86430b60  lh          $v1, 0xB60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefa8) {
            ctx->pc = 0x1EEFC8u;
            goto label_1eefc8;
        }
    }
    ctx->pc = 0x1EEFB0u;
label_1eefb0:
    // 0x1eefb0: 0x86450b6a  lh          $a1, 0xB6A($s2)
    ctx->pc = 0x1eefb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2922)));
label_1eefb4:
    // 0x1eefb4: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x1eefb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_1eefb8:
    // 0x1eefb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eefb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eefbc:
    // 0x1eefbc: 0xc07caca  jal         func_1F2B28
label_1eefc0:
    if (ctx->pc == 0x1EEFC0u) {
        ctx->pc = 0x1EEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFBCu;
        // 0x1eefc0: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEFC4u;
        goto label_1eefc4;
    }
    ctx->pc = 0x1EEFBCu;
    SET_GPR_U32(ctx, 31, 0x1EEFC4u);
    ctx->pc = 0x1EEFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEFBCu;
    // 0x1eefc0: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2B28u, 0x1EEFBCu, 0x1EEFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFC4u;
label_1eefc4:
    // 0x1eefc4: 0x86430b60  lh          $v1, 0xB60($s2)
    ctx->pc = 0x1eefc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2912)));
label_1eefc8:
    // 0x1eefc8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1eefc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1eefcc:
    // 0x1eefcc: 0x2442e710  addiu       $v0, $v0, -0x18F0
    ctx->pc = 0x1eefccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960912));
label_1eefd0:
    // 0x1eefd0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1eefd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1eefd4:
    // 0x1eefd4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1eefd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eefd8:
    // 0x1eefd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eefd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eefdc:
    // 0x1eefdc: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1eefdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1eefe0:
    // 0x1eefe0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1eefe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1eefe4:
    // 0x1eefe4: 0x60f809  jalr        $v1
label_1eefe8:
    if (ctx->pc == 0x1EEFE8u) {
        ctx->pc = 0x1EEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFE4u;
        // 0x1eefe8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEFECu;
        goto label_1eefec;
    }
    ctx->pc = 0x1EEFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EEFECu);
        ctx->pc = 0x1EEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFE4u;
        // 0x1eefe8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEFE4u, 0x1EEFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEFECu;
label_1eefec:
    // 0x1eefec: 0xc0b6dac  jal         func_2DB6B0
label_1eeff0:
    if (ctx->pc == 0x1EEFF0u) {
        ctx->pc = 0x1EEFF4u;
        goto label_1eeff4;
    }
    ctx->pc = 0x1EEFECu;
    SET_GPR_U32(ctx, 31, 0x1EEFF4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1EEFECu, 0x1EEFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFF4u;
label_1eeff4:
    // 0x1eeff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eeff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eeff8:
    // 0x1eeff8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_1eeffc:
    if (ctx->pc == 0x1EEFFCu) {
        ctx->pc = 0x1EEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFF8u;
        // 0x1eeffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF000u;
        goto label_1ef000;
    }
    ctx->pc = 0x1EEFF8u;
    {
        const bool branch_taken_0x1eeff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFF8u;
        // 0x1eeffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeff8) {
            ctx->pc = 0x1EF004u;
            goto label_1ef004;
        }
    }
    ctx->pc = 0x1EF000u;
label_1ef000:
    // 0x1ef000: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1ef000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_1ef004:
    // 0x1ef004: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
label_1ef008:
    if (ctx->pc == 0x1EF008u) {
        ctx->pc = 0x1EF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF004u;
        // 0x1ef008: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF00Cu;
        goto label_1ef00c;
    }
    ctx->pc = 0x1EF004u;
    {
        const bool branch_taken_0x1ef004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef004) {
            ctx->pc = 0x1EF008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF004u;
            // 0x1ef008: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF130u;
            goto label_1ef130;
        }
    }
    ctx->pc = 0x1EF00Cu;
label_1ef00c:
    // 0x1ef00c: 0x8e420b6c  lw          $v0, 0xB6C($s2)
    ctx->pc = 0x1ef00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2924)));
label_1ef010:
    // 0x1ef010: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_1ef014:
    if (ctx->pc == 0x1EF014u) {
        ctx->pc = 0x1EF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF010u;
        // 0x1ef014: 0x86430b6a  lh          $v1, 0xB6A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2922)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF018u;
        goto label_1ef018;
    }
    ctx->pc = 0x1EF010u;
    {
        const bool branch_taken_0x1ef010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef010) {
            ctx->pc = 0x1EF014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF010u;
            // 0x1ef014: 0x86430b6a  lh          $v1, 0xB6A($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2922)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF0A0u;
            goto label_1ef0a0;
        }
    }
    ctx->pc = 0x1EF018u;
label_1ef018:
    // 0x1ef018: 0xc6410b98  lwc1        $f1, 0xB98($s2)
    ctx->pc = 0x1ef018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef01c:
    // 0x1ef01c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef01cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef020:
    // 0x1ef020: 0x0  nop
    ctx->pc = 0x1ef020u;
    // NOP
label_1ef024:
    // 0x1ef024: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ef024u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ef028:
    // 0x1ef028: 0x0  nop
    ctx->pc = 0x1ef028u;
    // NOP
label_1ef02c:
    // 0x1ef02c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_1ef030:
    if (ctx->pc == 0x1EF030u) {
        ctx->pc = 0x1EF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF02Cu;
        // 0x1ef030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF034u;
        goto label_1ef034;
    }
    ctx->pc = 0x1EF02Cu;
    {
        const bool branch_taken_0x1ef02c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF02Cu;
        // 0x1ef030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef02c) {
            ctx->pc = 0x1EF070u;
            goto label_1ef070;
        }
    }
    ctx->pc = 0x1EF034u;
label_1ef034:
    // 0x1ef034: 0x86430b6a  lh          $v1, 0xB6A($s2)
    ctx->pc = 0x1ef034u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2922)));
label_1ef038:
    // 0x1ef038: 0x8e420b88  lw          $v0, 0xB88($s2)
    ctx->pc = 0x1ef038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2952)));
label_1ef03c:
    // 0x1ef03c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ef03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ef040:
    // 0x1ef040: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ef044:
    if (ctx->pc == 0x1EF044u) {
        ctx->pc = 0x1EF048u;
        goto label_1ef048;
    }
    ctx->pc = 0x1EF040u;
    {
        const bool branch_taken_0x1ef040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef040) {
            ctx->pc = 0x1EF060u;
            goto label_1ef060;
        }
    }
    ctx->pc = 0x1EF048u;
label_1ef048:
    // 0x1ef048: 0xc07bf9c  jal         func_1EFE70
label_1ef04c:
    if (ctx->pc == 0x1EF04Cu) {
        ctx->pc = 0x1EF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF048u;
        // 0x1ef04c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF050u;
        goto label_1ef050;
    }
    ctx->pc = 0x1EF048u;
    SET_GPR_U32(ctx, 31, 0x1EF050u);
    ctx->pc = 0x1EF04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF048u;
    // 0x1ef04c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE70u, 0x1EF048u, 0x1EF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF050u;
label_1ef050:
    // 0x1ef050: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ef050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ef054:
    // 0x1ef054: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1ef054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1ef058:
    // 0x1ef058: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1ef05c:
    if (ctx->pc == 0x1EF05Cu) {
        ctx->pc = 0x1EF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF058u;
        // 0x1ef05c: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF060u;
        goto label_1ef060;
    }
    ctx->pc = 0x1EF058u;
    {
        const bool branch_taken_0x1ef058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF058u;
        // 0x1ef05c: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef058) {
            ctx->pc = 0x1EF0D4u;
            goto label_1ef0d4;
        }
    }
    ctx->pc = 0x1EF060u;
label_1ef060:
    // 0x1ef060: 0xc07bf5c  jal         func_1EFD70
label_1ef064:
    if (ctx->pc == 0x1EF064u) {
        ctx->pc = 0x1EF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF060u;
        // 0x1ef064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF068u;
        goto label_1ef068;
    }
    ctx->pc = 0x1EF060u;
    SET_GPR_U32(ctx, 31, 0x1EF068u);
    ctx->pc = 0x1EF064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF060u;
    // 0x1ef064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFD70u, 0x1EF060u, 0x1EF068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF068u;
label_1ef068:
    // 0x1ef068: 0x10000031  b           . + 4 + (0x31 << 2)
label_1ef06c:
    if (ctx->pc == 0x1EF06Cu) {
        ctx->pc = 0x1EF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF068u;
        // 0x1ef06c: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF070u;
        goto label_1ef070;
    }
    ctx->pc = 0x1EF068u;
    {
        const bool branch_taken_0x1ef068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF068u;
        // 0x1ef06c: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef068) {
            ctx->pc = 0x1EF130u;
            goto label_1ef130;
        }
    }
    ctx->pc = 0x1EF070u;
label_1ef070:
    // 0x1ef070: 0xc07bf9c  jal         func_1EFE70
label_1ef074:
    if (ctx->pc == 0x1EF074u) {
        ctx->pc = 0x1EF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF070u;
        // 0x1ef074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF078u;
        goto label_1ef078;
    }
    ctx->pc = 0x1EF070u;
    SET_GPR_U32(ctx, 31, 0x1EF078u);
    ctx->pc = 0x1EF074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF070u;
    // 0x1ef074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE70u, 0x1EF070u, 0x1EF078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF078u;
label_1ef078:
    // 0x1ef078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef07c:
    // 0x1ef07c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1ef07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_1ef080:
    // 0x1ef080: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x1ef080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
label_1ef084:
    // 0x1ef084: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef088:
    // 0x1ef088: 0xa0626aa5  sb          $v0, 0x6AA5($v1)
    ctx->pc = 0x1ef088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27301), (uint8_t)GPR_U32(ctx, 2));
label_1ef08c:
    // 0x1ef08c: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x1ef08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_1ef090:
    // 0x1ef090: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ef094:
    // 0x1ef094: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1ef094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1ef098:
    // 0x1ef098: 0x10000024  b           . + 4 + (0x24 << 2)
label_1ef09c:
    if (ctx->pc == 0x1EF09Cu) {
        ctx->pc = 0x1EF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF098u;
        // 0x1ef09c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0A0u;
        goto label_1ef0a0;
    }
    ctx->pc = 0x1EF098u;
    {
        const bool branch_taken_0x1ef098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF098u;
        // 0x1ef09c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef098) {
            ctx->pc = 0x1EF12Cu;
            goto label_1ef12c;
        }
    }
    ctx->pc = 0x1EF0A0u;
label_1ef0a0:
    // 0x1ef0a0: 0x8e420b88  lw          $v0, 0xB88($s2)
    ctx->pc = 0x1ef0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2952)));
label_1ef0a4:
    // 0x1ef0a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ef0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ef0a8:
    // 0x1ef0a8: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_1ef0ac:
    if (ctx->pc == 0x1EF0ACu) {
        ctx->pc = 0x1EF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0A8u;
        // 0x1ef0ac: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0B0u;
        goto label_1ef0b0;
    }
    ctx->pc = 0x1EF0A8u;
    {
        const bool branch_taken_0x1ef0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef0a8) {
            ctx->pc = 0x1EF0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF0A8u;
            // 0x1ef0ac: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF130u;
            goto label_1ef130;
        }
    }
    ctx->pc = 0x1EF0B0u;
label_1ef0b0:
    // 0x1ef0b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ef0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ef0b4:
    // 0x1ef0b4: 0xc07bf9c  jal         func_1EFE70
label_1ef0b8:
    if (ctx->pc == 0x1EF0B8u) {
        ctx->pc = 0x1EF0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0B4u;
        // 0x1ef0b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0BCu;
        goto label_1ef0bc;
    }
    ctx->pc = 0x1EF0B4u;
    SET_GPR_U32(ctx, 31, 0x1EF0BCu);
    ctx->pc = 0x1EF0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF0B4u;
    // 0x1ef0b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE70u, 0x1EF0B4u, 0x1EF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF0BCu;
label_1ef0bc:
    // 0x1ef0bc: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x1ef0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
label_1ef0c0:
    // 0x1ef0c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef0c4:
    // 0x1ef0c4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1ef0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1ef0c8:
    // 0x1ef0c8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x1ef0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_1ef0cc:
    // 0x1ef0cc: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1ef0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_1ef0d0:
    // 0x1ef0d0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ef0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ef0d4:
    // 0x1ef0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ef0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ef0d8:
    // 0x1ef0d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1ef0dc:
    if (ctx->pc == 0x1EF0DCu) {
        ctx->pc = 0x1EF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0D8u;
        // 0x1ef0dc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0E0u;
        goto label_1ef0e0;
    }
    ctx->pc = 0x1EF0D8u;
    {
        const bool branch_taken_0x1ef0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0D8u;
        // 0x1ef0dc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0d8) {
            ctx->pc = 0x1EF12Cu;
            goto label_1ef12c;
        }
    }
    ctx->pc = 0x1EF0E0u;
label_1ef0e0:
    // 0x1ef0e0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1ef0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1ef0e4:
    // 0x1ef0e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ef0e8:
    if (ctx->pc == 0x1EF0E8u) {
        ctx->pc = 0x1EF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0E4u;
        // 0x1ef0e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0ECu;
        goto label_1ef0ec;
    }
    ctx->pc = 0x1EF0E4u;
    {
        const bool branch_taken_0x1ef0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0E4u;
        // 0x1ef0e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0e4) {
            ctx->pc = 0x1EF0F8u;
            goto label_1ef0f8;
        }
    }
    ctx->pc = 0x1EF0ECu;
label_1ef0ec:
    // 0x1ef0ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef0ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef0f0:
    // 0x1ef0f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ef0f4:
    if (ctx->pc == 0x1EF0F4u) {
        ctx->pc = 0x1EF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0F0u;
        // 0x1ef0f4: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0F8u;
        goto label_1ef0f8;
    }
    ctx->pc = 0x1EF0F0u;
    {
        const bool branch_taken_0x1ef0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0F0u;
        // 0x1ef0f4: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0f0) {
            ctx->pc = 0x1EF0FCu;
            goto label_1ef0fc;
        }
    }
    ctx->pc = 0x1EF0F8u;
label_1ef0f8:
    // 0x1ef0f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef0fc:
    // 0x1ef0fc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ef0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ef100:
    // 0x1ef100: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ef104:
    if (ctx->pc == 0x1EF104u) {
        ctx->pc = 0x1EF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF100u;
        // 0x1ef104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF108u;
        goto label_1ef108;
    }
    ctx->pc = 0x1EF100u;
    {
        const bool branch_taken_0x1ef100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF100u;
        // 0x1ef104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef100) {
            ctx->pc = 0x1EF12Cu;
            goto label_1ef12c;
        }
    }
    ctx->pc = 0x1EF108u;
label_1ef108:
    // 0x1ef108: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ef10c:
    if (ctx->pc == 0x1EF10Cu) {
        ctx->pc = 0x1EF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF108u;
        // 0x1ef10c: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF110u;
        goto label_1ef110;
    }
    ctx->pc = 0x1EF108u;
    {
        const bool branch_taken_0x1ef108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF108u;
        // 0x1ef10c: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef108) {
            ctx->pc = 0x1EF118u;
            goto label_1ef118;
        }
    }
    ctx->pc = 0x1EF110u;
label_1ef110:
    // 0x1ef110: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x1ef110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_1ef114:
    // 0x1ef114: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ef114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ef118:
    // 0x1ef118: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1ef118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1ef11c:
    // 0x1ef11c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1ef11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_1ef120:
    // 0x1ef120: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1ef120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1ef124:
    // 0x1ef124: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1ef124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_1ef128:
    // 0x1ef128: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1ef128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1ef12c:
    // 0x1ef12c: 0x9e420054  lwu         $v0, 0x54($s2)
    ctx->pc = 0x1ef12cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_1ef130:
    // 0x1ef130: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1ef130u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1ef134:
    // 0x1ef134: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ef134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ef138:
    // 0x1ef138: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ef13c:
    if (ctx->pc == 0x1EF13Cu) {
        ctx->pc = 0x1EF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF138u;
        // 0x1ef13c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF140u;
        goto label_1ef140;
    }
    ctx->pc = 0x1EF138u;
    {
        const bool branch_taken_0x1ef138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef138) {
            ctx->pc = 0x1EF13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF138u;
            // 0x1ef13c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF14Cu;
            goto label_1ef14c;
        }
    }
    ctx->pc = 0x1EF140u;
label_1ef140:
    // 0x1ef140: 0xc07c0fa  jal         func_1F03E8
label_1ef144:
    if (ctx->pc == 0x1EF144u) {
        ctx->pc = 0x1EF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF140u;
        // 0x1ef144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF148u;
        goto label_1ef148;
    }
    ctx->pc = 0x1EF140u;
    SET_GPR_U32(ctx, 31, 0x1EF148u);
    ctx->pc = 0x1EF144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF140u;
    // 0x1ef144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F03E8u, 0x1EF140u, 0x1EF148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF148u;
label_1ef148:
    // 0x1ef148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ef148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ef14c:
    // 0x1ef14c: 0xc07c124  jal         func_1F0490
label_1ef150:
    if (ctx->pc == 0x1EF150u) {
        ctx->pc = 0x1EF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF14Cu;
        // 0x1ef150: 0x26500060  addiu       $s0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF154u;
        goto label_1ef154;
    }
    ctx->pc = 0x1EF14Cu;
    SET_GPR_U32(ctx, 31, 0x1EF154u);
    ctx->pc = 0x1EF150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF14Cu;
    // 0x1ef150: 0x26500060  addiu       $s0, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0490u, 0x1EF14Cu, 0x1EF154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF154u;
label_1ef154:
    // 0x1ef154: 0xc07ca3c  jal         func_1F28F0
label_1ef158:
    if (ctx->pc == 0x1EF158u) {
        ctx->pc = 0x1EF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF154u;
        // 0x1ef158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF15Cu;
        goto label_1ef15c;
    }
    ctx->pc = 0x1EF154u;
    SET_GPR_U32(ctx, 31, 0x1EF15Cu);
    ctx->pc = 0x1EF158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF154u;
    // 0x1ef158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F28F0u, 0x1EF154u, 0x1EF15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF15Cu;
label_1ef15c:
    // 0x1ef15c: 0xc07ca64  jal         func_1F2990
label_1ef160:
    if (ctx->pc == 0x1EF160u) {
        ctx->pc = 0x1EF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF15Cu;
        // 0x1ef160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF164u;
        goto label_1ef164;
    }
    ctx->pc = 0x1EF15Cu;
    SET_GPR_U32(ctx, 31, 0x1EF164u);
    ctx->pc = 0x1EF160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF15Cu;
    // 0x1ef160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2990u, 0x1EF15Cu, 0x1EF164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF164u;
label_1ef164:
    // 0x1ef164: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ef164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ef168:
    // 0x1ef168: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ef168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ef16c:
    // 0x1ef16c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef16cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef170:
    // 0x1ef170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef174:
    // 0x1ef174: 0x3e00008  jr          $ra
label_1ef178:
    if (ctx->pc == 0x1EF178u) {
        ctx->pc = 0x1EF178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF174u;
        // 0x1ef178: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF17Cu;
        goto label_1ef17c;
    }
    ctx->pc = 0x1EF174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF174u;
        // 0x1ef178: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF17Cu;
label_1ef17c:
    // 0x1ef17c: 0x0  nop
    ctx->pc = 0x1ef17cu;
    // NOP
    ctx->pc = 0x1ef180u;
}
