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

// Function: func_001B4068
// Address: 0x1b4068 - 0x1b43c8
void func_001B4068_0x1b4068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B4068_0x1b4068");
#endif

    switch (ctx->pc) {
        case 0x1b4068u: goto label_1b4068;
        case 0x1b406cu: goto label_1b406c;
        case 0x1b4070u: goto label_1b4070;
        case 0x1b4074u: goto label_1b4074;
        case 0x1b4078u: goto label_1b4078;
        case 0x1b407cu: goto label_1b407c;
        case 0x1b4080u: goto label_1b4080;
        case 0x1b4084u: goto label_1b4084;
        case 0x1b4088u: goto label_1b4088;
        case 0x1b408cu: goto label_1b408c;
        case 0x1b4090u: goto label_1b4090;
        case 0x1b4094u: goto label_1b4094;
        case 0x1b4098u: goto label_1b4098;
        case 0x1b409cu: goto label_1b409c;
        case 0x1b40a0u: goto label_1b40a0;
        case 0x1b40a4u: goto label_1b40a4;
        case 0x1b40a8u: goto label_1b40a8;
        case 0x1b40acu: goto label_1b40ac;
        case 0x1b40b0u: goto label_1b40b0;
        case 0x1b40b4u: goto label_1b40b4;
        case 0x1b40b8u: goto label_1b40b8;
        case 0x1b40bcu: goto label_1b40bc;
        case 0x1b40c0u: goto label_1b40c0;
        case 0x1b40c4u: goto label_1b40c4;
        case 0x1b40c8u: goto label_1b40c8;
        case 0x1b40ccu: goto label_1b40cc;
        case 0x1b40d0u: goto label_1b40d0;
        case 0x1b40d4u: goto label_1b40d4;
        case 0x1b40d8u: goto label_1b40d8;
        case 0x1b40dcu: goto label_1b40dc;
        case 0x1b40e0u: goto label_1b40e0;
        case 0x1b40e4u: goto label_1b40e4;
        case 0x1b40e8u: goto label_1b40e8;
        case 0x1b40ecu: goto label_1b40ec;
        case 0x1b40f0u: goto label_1b40f0;
        case 0x1b40f4u: goto label_1b40f4;
        case 0x1b40f8u: goto label_1b40f8;
        case 0x1b40fcu: goto label_1b40fc;
        case 0x1b4100u: goto label_1b4100;
        case 0x1b4104u: goto label_1b4104;
        case 0x1b4108u: goto label_1b4108;
        case 0x1b410cu: goto label_1b410c;
        case 0x1b4110u: goto label_1b4110;
        case 0x1b4114u: goto label_1b4114;
        case 0x1b4118u: goto label_1b4118;
        case 0x1b411cu: goto label_1b411c;
        case 0x1b4120u: goto label_1b4120;
        case 0x1b4124u: goto label_1b4124;
        case 0x1b4128u: goto label_1b4128;
        case 0x1b412cu: goto label_1b412c;
        case 0x1b4130u: goto label_1b4130;
        case 0x1b4134u: goto label_1b4134;
        case 0x1b4138u: goto label_1b4138;
        case 0x1b413cu: goto label_1b413c;
        case 0x1b4140u: goto label_1b4140;
        case 0x1b4144u: goto label_1b4144;
        case 0x1b4148u: goto label_1b4148;
        case 0x1b414cu: goto label_1b414c;
        case 0x1b4150u: goto label_1b4150;
        case 0x1b4154u: goto label_1b4154;
        case 0x1b4158u: goto label_1b4158;
        case 0x1b415cu: goto label_1b415c;
        case 0x1b4160u: goto label_1b4160;
        case 0x1b4164u: goto label_1b4164;
        case 0x1b4168u: goto label_1b4168;
        case 0x1b416cu: goto label_1b416c;
        case 0x1b4170u: goto label_1b4170;
        case 0x1b4174u: goto label_1b4174;
        case 0x1b4178u: goto label_1b4178;
        case 0x1b417cu: goto label_1b417c;
        case 0x1b4180u: goto label_1b4180;
        case 0x1b4184u: goto label_1b4184;
        case 0x1b4188u: goto label_1b4188;
        case 0x1b418cu: goto label_1b418c;
        case 0x1b4190u: goto label_1b4190;
        case 0x1b4194u: goto label_1b4194;
        case 0x1b4198u: goto label_1b4198;
        case 0x1b419cu: goto label_1b419c;
        case 0x1b41a0u: goto label_1b41a0;
        case 0x1b41a4u: goto label_1b41a4;
        case 0x1b41a8u: goto label_1b41a8;
        case 0x1b41acu: goto label_1b41ac;
        case 0x1b41b0u: goto label_1b41b0;
        case 0x1b41b4u: goto label_1b41b4;
        case 0x1b41b8u: goto label_1b41b8;
        case 0x1b41bcu: goto label_1b41bc;
        case 0x1b41c0u: goto label_1b41c0;
        case 0x1b41c4u: goto label_1b41c4;
        case 0x1b41c8u: goto label_1b41c8;
        case 0x1b41ccu: goto label_1b41cc;
        case 0x1b41d0u: goto label_1b41d0;
        case 0x1b41d4u: goto label_1b41d4;
        case 0x1b41d8u: goto label_1b41d8;
        case 0x1b41dcu: goto label_1b41dc;
        case 0x1b41e0u: goto label_1b41e0;
        case 0x1b41e4u: goto label_1b41e4;
        case 0x1b41e8u: goto label_1b41e8;
        case 0x1b41ecu: goto label_1b41ec;
        case 0x1b41f0u: goto label_1b41f0;
        case 0x1b41f4u: goto label_1b41f4;
        case 0x1b41f8u: goto label_1b41f8;
        case 0x1b41fcu: goto label_1b41fc;
        case 0x1b4200u: goto label_1b4200;
        case 0x1b4204u: goto label_1b4204;
        case 0x1b4208u: goto label_1b4208;
        case 0x1b420cu: goto label_1b420c;
        case 0x1b4210u: goto label_1b4210;
        case 0x1b4214u: goto label_1b4214;
        case 0x1b4218u: goto label_1b4218;
        case 0x1b421cu: goto label_1b421c;
        case 0x1b4220u: goto label_1b4220;
        case 0x1b4224u: goto label_1b4224;
        case 0x1b4228u: goto label_1b4228;
        case 0x1b422cu: goto label_1b422c;
        case 0x1b4230u: goto label_1b4230;
        case 0x1b4234u: goto label_1b4234;
        case 0x1b4238u: goto label_1b4238;
        case 0x1b423cu: goto label_1b423c;
        case 0x1b4240u: goto label_1b4240;
        case 0x1b4244u: goto label_1b4244;
        case 0x1b4248u: goto label_1b4248;
        case 0x1b424cu: goto label_1b424c;
        case 0x1b4250u: goto label_1b4250;
        case 0x1b4254u: goto label_1b4254;
        case 0x1b4258u: goto label_1b4258;
        case 0x1b425cu: goto label_1b425c;
        case 0x1b4260u: goto label_1b4260;
        case 0x1b4264u: goto label_1b4264;
        case 0x1b4268u: goto label_1b4268;
        case 0x1b426cu: goto label_1b426c;
        case 0x1b4270u: goto label_1b4270;
        case 0x1b4274u: goto label_1b4274;
        case 0x1b4278u: goto label_1b4278;
        case 0x1b427cu: goto label_1b427c;
        case 0x1b4280u: goto label_1b4280;
        case 0x1b4284u: goto label_1b4284;
        case 0x1b4288u: goto label_1b4288;
        case 0x1b428cu: goto label_1b428c;
        case 0x1b4290u: goto label_1b4290;
        case 0x1b4294u: goto label_1b4294;
        case 0x1b4298u: goto label_1b4298;
        case 0x1b429cu: goto label_1b429c;
        case 0x1b42a0u: goto label_1b42a0;
        case 0x1b42a4u: goto label_1b42a4;
        case 0x1b42a8u: goto label_1b42a8;
        case 0x1b42acu: goto label_1b42ac;
        case 0x1b42b0u: goto label_1b42b0;
        case 0x1b42b4u: goto label_1b42b4;
        case 0x1b42b8u: goto label_1b42b8;
        case 0x1b42bcu: goto label_1b42bc;
        case 0x1b42c0u: goto label_1b42c0;
        case 0x1b42c4u: goto label_1b42c4;
        case 0x1b42c8u: goto label_1b42c8;
        case 0x1b42ccu: goto label_1b42cc;
        case 0x1b42d0u: goto label_1b42d0;
        case 0x1b42d4u: goto label_1b42d4;
        case 0x1b42d8u: goto label_1b42d8;
        case 0x1b42dcu: goto label_1b42dc;
        case 0x1b42e0u: goto label_1b42e0;
        case 0x1b42e4u: goto label_1b42e4;
        case 0x1b42e8u: goto label_1b42e8;
        case 0x1b42ecu: goto label_1b42ec;
        case 0x1b42f0u: goto label_1b42f0;
        case 0x1b42f4u: goto label_1b42f4;
        case 0x1b42f8u: goto label_1b42f8;
        case 0x1b42fcu: goto label_1b42fc;
        case 0x1b4300u: goto label_1b4300;
        case 0x1b4304u: goto label_1b4304;
        case 0x1b4308u: goto label_1b4308;
        case 0x1b430cu: goto label_1b430c;
        case 0x1b4310u: goto label_1b4310;
        case 0x1b4314u: goto label_1b4314;
        case 0x1b4318u: goto label_1b4318;
        case 0x1b431cu: goto label_1b431c;
        case 0x1b4320u: goto label_1b4320;
        case 0x1b4324u: goto label_1b4324;
        case 0x1b4328u: goto label_1b4328;
        case 0x1b432cu: goto label_1b432c;
        case 0x1b4330u: goto label_1b4330;
        case 0x1b4334u: goto label_1b4334;
        case 0x1b4338u: goto label_1b4338;
        case 0x1b433cu: goto label_1b433c;
        case 0x1b4340u: goto label_1b4340;
        case 0x1b4344u: goto label_1b4344;
        case 0x1b4348u: goto label_1b4348;
        case 0x1b434cu: goto label_1b434c;
        case 0x1b4350u: goto label_1b4350;
        case 0x1b4354u: goto label_1b4354;
        case 0x1b4358u: goto label_1b4358;
        case 0x1b435cu: goto label_1b435c;
        case 0x1b4360u: goto label_1b4360;
        case 0x1b4364u: goto label_1b4364;
        case 0x1b4368u: goto label_1b4368;
        case 0x1b436cu: goto label_1b436c;
        case 0x1b4370u: goto label_1b4370;
        case 0x1b4374u: goto label_1b4374;
        case 0x1b4378u: goto label_1b4378;
        case 0x1b437cu: goto label_1b437c;
        case 0x1b4380u: goto label_1b4380;
        case 0x1b4384u: goto label_1b4384;
        case 0x1b4388u: goto label_1b4388;
        case 0x1b438cu: goto label_1b438c;
        case 0x1b4390u: goto label_1b4390;
        case 0x1b4394u: goto label_1b4394;
        case 0x1b4398u: goto label_1b4398;
        case 0x1b439cu: goto label_1b439c;
        case 0x1b43a0u: goto label_1b43a0;
        case 0x1b43a4u: goto label_1b43a4;
        case 0x1b43a8u: goto label_1b43a8;
        case 0x1b43acu: goto label_1b43ac;
        case 0x1b43b0u: goto label_1b43b0;
        case 0x1b43b4u: goto label_1b43b4;
        case 0x1b43b8u: goto label_1b43b8;
        case 0x1b43bcu: goto label_1b43bc;
        case 0x1b43c0u: goto label_1b43c0;
        case 0x1b43c4u: goto label_1b43c4;
        default: break;
    }

    ctx->pc = 0x1b4068u;

label_1b4068:
    // 0x1b4068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b4068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b406c:
    // 0x1b406c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1b4070:
    // 0x1b4070: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b4070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b4074:
    // 0x1b4074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b4074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b4078:
    // 0x1b4078: 0xc06ddac  jal         func_1B76B0
label_1b407c:
    if (ctx->pc == 0x1B407Cu) {
        ctx->pc = 0x1B407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4078u;
        // 0x1b407c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4080u;
        goto label_1b4080;
    }
    ctx->pc = 0x1B4078u;
    SET_GPR_U32(ctx, 31, 0x1B4080u);
    ctx->pc = 0x1B407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4078u;
    // 0x1b407c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B4078u, 0x1B4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4080u;
label_1b4080:
    // 0x1b4080: 0x504000cc  beql        $v0, $zero, . + 4 + (0xCC << 2)
label_1b4084:
    if (ctx->pc == 0x1B4084u) {
        ctx->pc = 0x1B4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4080u;
        // 0x1b4084: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4088u;
        goto label_1b4088;
    }
    ctx->pc = 0x1B4080u;
    {
        const bool branch_taken_0x1b4080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4080) {
            ctx->pc = 0x1B4084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4080u;
            // 0x1b4084: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B43B4u;
            goto label_1b43b4;
        }
    }
    ctx->pc = 0x1B4088u;
label_1b4088:
    // 0x1b4088: 0x8e050650  lw          $a1, 0x650($s0)
    ctx->pc = 0x1b4088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
label_1b408c:
    // 0x1b408c: 0xc06dce0  jal         func_1B7380
label_1b4090:
    if (ctx->pc == 0x1B4090u) {
        ctx->pc = 0x1B4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B408Cu;
        // 0x1b4090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4094u;
        goto label_1b4094;
    }
    ctx->pc = 0x1B408Cu;
    SET_GPR_U32(ctx, 31, 0x1B4094u);
    ctx->pc = 0x1B4090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B408Cu;
    // 0x1b4090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1B408Cu, 0x1B4094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4094u;
label_1b4094:
    // 0x1b4094: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1b4098:
    if (ctx->pc == 0x1B4098u) {
        ctx->pc = 0x1B4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4094u;
        // 0x1b4098: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B409Cu;
        goto label_1b409c;
    }
    ctx->pc = 0x1B4094u;
    {
        const bool branch_taken_0x1b4094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4094u;
        // 0x1b4098: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4094) {
            ctx->pc = 0x1B4118u;
            goto label_1b4118;
        }
    }
    ctx->pc = 0x1B409Cu;
label_1b409c:
    // 0x1b409c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1b409cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_1b40a0:
    // 0x1b40a0: 0x1c400011  bgtz        $v0, . + 4 + (0x11 << 2)
label_1b40a4:
    if (ctx->pc == 0x1B40A4u) {
        ctx->pc = 0x1B40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40A0u;
        // 0x1b40a4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B40A8u;
        goto label_1b40a8;
    }
    ctx->pc = 0x1B40A0u;
    {
        const bool branch_taken_0x1b40a0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1B40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40A0u;
        // 0x1b40a4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40a0) {
            ctx->pc = 0x1B40E8u;
            goto label_1b40e8;
        }
    }
    ctx->pc = 0x1B40A8u;
label_1b40a8:
    // 0x1b40a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b40a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b40ac:
    // 0x1b40ac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b40acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1b40b0:
    // 0x1b40b0: 0x24060089  addiu       $a2, $zero, 0x89
    ctx->pc = 0x1b40b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
label_1b40b4:
    // 0x1b40b4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b40b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b40b8:
    // 0x1b40b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b40b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b40bc:
    // 0x1b40bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b40bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b40c0:
    // 0x1b40c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b40c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b40c4:
    // 0x1b40c4: 0xc0b2e92  jal         func_2CBA48
label_1b40c8:
    if (ctx->pc == 0x1B40C8u) {
        ctx->pc = 0x1B40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40C4u;
        // 0x1b40c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B40CCu;
        goto label_1b40cc;
    }
    ctx->pc = 0x1B40C4u;
    SET_GPR_U32(ctx, 31, 0x1B40CCu);
    ctx->pc = 0x1B40C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B40C4u;
    // 0x1b40c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B40C4u, 0x1B40CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40CCu;
label_1b40cc:
    // 0x1b40cc: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x1b40ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_1b40d0:
    // 0x1b40d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b40d4:
    // 0x1b40d4: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1b40d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_1b40d8:
    // 0x1b40d8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1b40d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1b40dc:
    // 0x1b40dc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1b40dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1b40e0:
    // 0x1b40e0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b40e4:
    if (ctx->pc == 0x1B40E4u) {
        ctx->pc = 0x1B40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40E0u;
        // 0x1b40e4: 0xae0305b0  sw          $v1, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B40E8u;
        goto label_1b40e8;
    }
    ctx->pc = 0x1B40E0u;
    {
        const bool branch_taken_0x1b40e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40E0u;
        // 0x1b40e4: 0xae0305b0  sw          $v1, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40e0) {
            ctx->pc = 0x1B410Cu;
            goto label_1b410c;
        }
    }
    ctx->pc = 0x1B40E8u;
label_1b40e8:
    // 0x1b40e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b40e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b40ec:
    // 0x1b40ec: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b40ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1b40f0:
    // 0x1b40f0: 0x2406008e  addiu       $a2, $zero, 0x8E
    ctx->pc = 0x1b40f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_1b40f4:
    // 0x1b40f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b40f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b40f8:
    // 0x1b40f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b40f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b40fc:
    // 0x1b40fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b40fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4100:
    // 0x1b4100: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b4100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4104:
    // 0x1b4104: 0xc0b2e92  jal         func_2CBA48
label_1b4108:
    if (ctx->pc == 0x1B4108u) {
        ctx->pc = 0x1B4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4104u;
        // 0x1b4108: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B410Cu;
        goto label_1b410c;
    }
    ctx->pc = 0x1B4104u;
    SET_GPR_U32(ctx, 31, 0x1B410Cu);
    ctx->pc = 0x1B4108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4104u;
    // 0x1b4108: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B4104u, 0x1B410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B410Cu;
label_1b410c:
    // 0x1b410c: 0xc06d50c  jal         func_1B5430
label_1b4110:
    if (ctx->pc == 0x1B4110u) {
        ctx->pc = 0x1B4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B410Cu;
        // 0x1b4110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4114u;
        goto label_1b4114;
    }
    ctx->pc = 0x1B410Cu;
    SET_GPR_U32(ctx, 31, 0x1B4114u);
    ctx->pc = 0x1B4110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B410Cu;
    // 0x1b4110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5430u, 0x1B410Cu, 0x1B4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4114u;
label_1b4114:
    // 0x1b4114: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1b4114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1b4118:
    // 0x1b4118: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b4118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b411c:
    // 0x1b411c: 0x2446dd38  addiu       $a2, $v0, -0x22C8
    ctx->pc = 0x1b411cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958392));
label_1b4120:
    // 0x1b4120: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b4120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4124:
    // 0x1b4124: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b4124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b4128:
    // 0x1b4128: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b4128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b412c:
    // 0x1b412c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b412cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b4130:
    // 0x1b4130: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b4134:
    if (ctx->pc == 0x1B4134u) {
        ctx->pc = 0x1B4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4130u;
        // 0x1b4134: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4138u;
        goto label_1b4138;
    }
    ctx->pc = 0x1B4130u;
    {
        const bool branch_taken_0x1b4130 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4130u;
        // 0x1b4134: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4130) {
            ctx->pc = 0x1B415Cu;
            goto label_1b415c;
        }
    }
    ctx->pc = 0x1B4138u;
label_1b4138:
    // 0x1b4138: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b4138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b413c:
    // 0x1b413c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b413cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b4140:
    // 0x1b4140: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b4140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b4144:
    // 0x1b4144: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b4144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b4148:
    // 0x1b4148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b4148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b414c:
    // 0x1b414c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b414cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b4150:
    // 0x1b4150: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b4150u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b4154:
    // 0x1b4154: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b4158:
    if (ctx->pc == 0x1B4158u) {
        ctx->pc = 0x1B4158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4154u;
        // 0x1b4158: 0x2503dd38  addiu       $v1, $t0, -0x22C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B415Cu;
        goto label_1b415c;
    }
    ctx->pc = 0x1B4154u;
    {
        const bool branch_taken_0x1b4154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4154u;
        // 0x1b4158: 0x2503dd38  addiu       $v1, $t0, -0x22C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4154) {
            ctx->pc = 0x1B4168u;
            goto label_1b4168;
        }
    }
    ctx->pc = 0x1B415Cu;
label_1b415c:
    // 0x1b415c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b4160:
    // 0x1b4160: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b4160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b4164:
    // 0x1b4164: 0x2503dd38  addiu       $v1, $t0, -0x22C8
    ctx->pc = 0x1b4164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958392));
label_1b4168:
    // 0x1b4168: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1b4168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b416c:
    // 0x1b416c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b4170:
    // 0x1b4170: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b4174:
    if (ctx->pc == 0x1B4174u) {
        ctx->pc = 0x1B4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4170u;
        // 0x1b4174: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4178u;
        goto label_1b4178;
    }
    ctx->pc = 0x1B4170u;
    {
        const bool branch_taken_0x1b4170 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4170u;
        // 0x1b4174: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4170) {
            ctx->pc = 0x1B418Cu;
            goto label_1b418c;
        }
    }
    ctx->pc = 0x1B4178u;
label_1b4178:
    // 0x1b4178: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b4178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b417c:
    // 0x1b417c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b417cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b4180:
    // 0x1b4180: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b4180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b4184:
    // 0x1b4184: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b4188:
    if (ctx->pc == 0x1B4188u) {
        ctx->pc = 0x1B4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4184u;
        // 0x1b4188: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B418Cu;
        goto label_1b418c;
    }
    ctx->pc = 0x1B4184u;
    {
        const bool branch_taken_0x1b4184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4184u;
        // 0x1b4188: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4184) {
            ctx->pc = 0x1B4190u;
            goto label_1b4190;
        }
    }
    ctx->pc = 0x1B418Cu;
label_1b418c:
    // 0x1b418c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b418cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b4190:
    // 0x1b4190: 0xc0f809  jalr        $a2
label_1b4194:
    if (ctx->pc == 0x1B4194u) {
        ctx->pc = 0x1B4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4190u;
        // 0x1b4194: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4198u;
        goto label_1b4198;
    }
    ctx->pc = 0x1B4190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B4198u);
        ctx->pc = 0x1B4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4190u;
        // 0x1b4194: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4190u, 0x1B4198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4198u;
label_1b4198:
    // 0x1b4198: 0xc06d238  jal         func_1B48E0
label_1b419c:
    if (ctx->pc == 0x1B419Cu) {
        ctx->pc = 0x1B419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4198u;
        // 0x1b419c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B41A0u;
        goto label_1b41a0;
    }
    ctx->pc = 0x1B4198u;
    SET_GPR_U32(ctx, 31, 0x1B41A0u);
    ctx->pc = 0x1B419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4198u;
    // 0x1b419c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B48E0u, 0x1B4198u, 0x1B41A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41A0u;
label_1b41a0:
    // 0x1b41a0: 0xc06d53a  jal         func_1B54E8
label_1b41a4:
    if (ctx->pc == 0x1B41A4u) {
        ctx->pc = 0x1B41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41A0u;
        // 0x1b41a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B41A8u;
        goto label_1b41a8;
    }
    ctx->pc = 0x1B41A0u;
    SET_GPR_U32(ctx, 31, 0x1B41A8u);
    ctx->pc = 0x1B41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41A0u;
    // 0x1b41a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54E8u, 0x1B41A0u, 0x1B41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41A8u;
label_1b41a8:
    // 0x1b41a8: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b41a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b41ac:
    // 0x1b41ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b41b0:
    if (ctx->pc == 0x1B41B0u) {
        ctx->pc = 0x1B41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41ACu;
        // 0x1b41b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B41B4u;
        goto label_1b41b4;
    }
    ctx->pc = 0x1B41ACu;
    {
        const bool branch_taken_0x1b41ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41ACu;
        // 0x1b41b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41ac) {
            ctx->pc = 0x1B41C4u;
            goto label_1b41c4;
        }
    }
    ctx->pc = 0x1B41B4u;
label_1b41b4:
    // 0x1b41b4: 0x50620030  beql        $v1, $v0, . + 4 + (0x30 << 2)
label_1b41b8:
    if (ctx->pc == 0x1B41B8u) {
        ctx->pc = 0x1B41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41B4u;
        // 0x1b41b8: 0xc6010964  lwc1        $f1, 0x964($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B41BCu;
        goto label_1b41bc;
    }
    ctx->pc = 0x1B41B4u;
    {
        const bool branch_taken_0x1b41b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b41b4) {
            ctx->pc = 0x1B41B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B41B4u;
            // 0x1b41b8: 0xc6010964  lwc1        $f1, 0x964($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4278u;
            goto label_1b4278;
        }
    }
    ctx->pc = 0x1B41BCu;
label_1b41bc:
    // 0x1b41bc: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1b41c0:
    if (ctx->pc == 0x1B41C0u) {
        ctx->pc = 0x1B41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41BCu;
        // 0x1b41c0: 0xae000964  sw          $zero, 0x964($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B41C4u;
        goto label_1b41c4;
    }
    ctx->pc = 0x1B41BCu;
    {
        const bool branch_taken_0x1b41bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41BCu;
        // 0x1b41c0: 0xae000964  sw          $zero, 0x964($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41bc) {
            ctx->pc = 0x1B436Cu;
            goto label_1b436c;
        }
    }
    ctx->pc = 0x1B41C4u;
label_1b41c4:
    // 0x1b41c4: 0xc6010964  lwc1        $f1, 0x964($s0)
    ctx->pc = 0x1b41c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b41c8:
    // 0x1b41c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b41c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b41cc:
    // 0x1b41cc: 0x0  nop
    ctx->pc = 0x1b41ccu;
    // NOP
label_1b41d0:
    // 0x1b41d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b41d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b41d4:
    // 0x1b41d4: 0x0  nop
    ctx->pc = 0x1b41d4u;
    // NOP
label_1b41d8:
    // 0x1b41d8: 0x45000064  bc1f        . + 4 + (0x64 << 2)
label_1b41dc:
    if (ctx->pc == 0x1B41DCu) {
        ctx->pc = 0x1B41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41D8u;
        // 0x1b41dc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B41E0u;
        goto label_1b41e0;
    }
    ctx->pc = 0x1B41D8u;
    {
        const bool branch_taken_0x1b41d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41D8u;
        // 0x1b41dc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41d8) {
            ctx->pc = 0x1B436Cu;
            goto label_1b436c;
        }
    }
    ctx->pc = 0x1B41E0u;
label_1b41e0:
    // 0x1b41e0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1b41e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b41e4:
    // 0x1b41e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b41e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b41e8:
    // 0x1b41e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b41ec:
    if (ctx->pc == 0x1B41ECu) {
        ctx->pc = 0x1B41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41E8u;
        // 0x1b41ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B41F0u;
        goto label_1b41f0;
    }
    ctx->pc = 0x1B41E8u;
    {
        const bool branch_taken_0x1b41e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41E8u;
        // 0x1b41ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41e8) {
            ctx->pc = 0x1B41FCu;
            goto label_1b41fc;
        }
    }
    ctx->pc = 0x1B41F0u;
label_1b41f0:
    // 0x1b41f0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1b41f4:
    // 0x1b41f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b41f8:
    if (ctx->pc == 0x1B41F8u) {
        ctx->pc = 0x1B41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41F4u;
        // 0x1b41f8: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B41FCu;
        goto label_1b41fc;
    }
    ctx->pc = 0x1B41F4u;
    {
        const bool branch_taken_0x1b41f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41F4u;
        // 0x1b41f8: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41f4) {
            ctx->pc = 0x1B4200u;
            goto label_1b4200;
        }
    }
    ctx->pc = 0x1B41FCu;
label_1b41fc:
    // 0x1b41fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b41fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4200:
    // 0x1b4200: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b4204:
    if (ctx->pc == 0x1B4204u) {
        ctx->pc = 0x1B4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4200u;
        // 0x1b4204: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4208u;
        goto label_1b4208;
    }
    ctx->pc = 0x1B4200u;
    {
        const bool branch_taken_0x1b4200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4200u;
        // 0x1b4204: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4200) {
            ctx->pc = 0x1B4234u;
            goto label_1b4234;
        }
    }
    ctx->pc = 0x1B4208u;
label_1b4208:
    // 0x1b4208: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1b4208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b420c:
    // 0x1b420c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b420cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b4210:
    // 0x1b4210: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b4214:
    if (ctx->pc == 0x1B4214u) {
        ctx->pc = 0x1B4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4210u;
        // 0x1b4214: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4218u;
        goto label_1b4218;
    }
    ctx->pc = 0x1B4210u;
    {
        const bool branch_taken_0x1b4210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4210u;
        // 0x1b4214: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4210) {
            ctx->pc = 0x1B4224u;
            goto label_1b4224;
        }
    }
    ctx->pc = 0x1B4218u;
label_1b4218:
    // 0x1b4218: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b4218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1b421c:
    // 0x1b421c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b4220:
    if (ctx->pc == 0x1B4220u) {
        ctx->pc = 0x1B4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B421Cu;
        // 0x1b4220: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4224u;
        goto label_1b4224;
    }
    ctx->pc = 0x1B421Cu;
    {
        const bool branch_taken_0x1b421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B421Cu;
        // 0x1b4220: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b421c) {
            ctx->pc = 0x1B4228u;
            goto label_1b4228;
        }
    }
    ctx->pc = 0x1B4224u;
label_1b4224:
    // 0x1b4224: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4228:
    // 0x1b4228: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x1b4228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_1b422c:
    // 0x1b422c: 0xc6000964  lwc1        $f0, 0x964($s0)
    ctx->pc = 0x1b422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4230:
    // 0x1b4230: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b4230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b4234:
    // 0x1b4234: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1b4234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b4238:
    // 0x1b4238: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b4238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b423c:
    // 0x1b423c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b423cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b4240:
    // 0x1b4240: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b4244:
    if (ctx->pc == 0x1B4244u) {
        ctx->pc = 0x1B4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4240u;
        // 0x1b4244: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4248u;
        goto label_1b4248;
    }
    ctx->pc = 0x1B4240u;
    {
        const bool branch_taken_0x1b4240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4240u;
        // 0x1b4244: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4240) {
            ctx->pc = 0x1B4254u;
            goto label_1b4254;
        }
    }
    ctx->pc = 0x1B4248u;
label_1b4248:
    // 0x1b4248: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b4248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1b424c:
    // 0x1b424c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b4250:
    if (ctx->pc == 0x1B4250u) {
        ctx->pc = 0x1B4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B424Cu;
        // 0x1b4250: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4254u;
        goto label_1b4254;
    }
    ctx->pc = 0x1B424Cu;
    {
        const bool branch_taken_0x1b424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B424Cu;
        // 0x1b4250: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b424c) {
            ctx->pc = 0x1B4258u;
            goto label_1b4258;
        }
    }
    ctx->pc = 0x1B4254u;
label_1b4254:
    // 0x1b4254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4258:
    // 0x1b4258: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_1b425c:
    if (ctx->pc == 0x1B425Cu) {
        ctx->pc = 0x1B425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4258u;
        // 0x1b425c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4260u;
        goto label_1b4260;
    }
    ctx->pc = 0x1B4258u;
    {
        const bool branch_taken_0x1b4258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4258u;
        // 0x1b425c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4258) {
            ctx->pc = 0x1B436Cu;
            goto label_1b436c;
        }
    }
    ctx->pc = 0x1B4260u;
label_1b4260:
    // 0x1b4260: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1b4260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b4264:
    // 0x1b4264: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b4264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b4268:
    // 0x1b4268: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_1b426c:
    if (ctx->pc == 0x1B426Cu) {
        ctx->pc = 0x1B426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4268u;
        // 0x1b426c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4270u;
        goto label_1b4270;
    }
    ctx->pc = 0x1B4268u;
    {
        const bool branch_taken_0x1b4268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4268u;
        // 0x1b426c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4268) {
            ctx->pc = 0x1B434Cu;
            goto label_1b434c;
        }
    }
    ctx->pc = 0x1B4270u;
label_1b4270:
    // 0x1b4270: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1b4274:
    if (ctx->pc == 0x1B4274u) {
        ctx->pc = 0x1B4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4270u;
        // 0x1b4274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4278u;
        goto label_1b4278;
    }
    ctx->pc = 0x1B4270u;
    {
        const bool branch_taken_0x1b4270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4270u;
        // 0x1b4274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4270) {
            ctx->pc = 0x1B435Cu;
            goto label_1b435c;
        }
    }
    ctx->pc = 0x1B4278u;
label_1b4278:
    // 0x1b4278: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b4278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b427c:
    // 0x1b427c: 0x0  nop
    ctx->pc = 0x1b427cu;
    // NOP
label_1b4280:
    // 0x1b4280: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b4280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4284:
    // 0x1b4284: 0x0  nop
    ctx->pc = 0x1b4284u;
    // NOP
label_1b4288:
    // 0x1b4288: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_1b428c:
    if (ctx->pc == 0x1B428Cu) {
        ctx->pc = 0x1B4290u;
        goto label_1b4290;
    }
    ctx->pc = 0x1B4288u;
    {
        const bool branch_taken_0x1b4288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b4288) {
            ctx->pc = 0x1B436Cu;
            goto label_1b436c;
        }
    }
    ctx->pc = 0x1B4290u;
label_1b4290:
    // 0x1b4290: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1b4290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1b4294:
    // 0x1b4294: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b4294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b4298:
    // 0x1b4298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b429c:
    // 0x1b429c: 0x0  nop
    ctx->pc = 0x1b429cu;
    // NOP
label_1b42a0:
    // 0x1b42a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b42a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b42a4:
    // 0x1b42a4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b42a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b42a8:
    // 0x1b42a8: 0x0  nop
    ctx->pc = 0x1b42a8u;
    // NOP
label_1b42ac:
    // 0x1b42ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b42b0:
    if (ctx->pc == 0x1B42B0u) {
        ctx->pc = 0x1B42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42ACu;
        // 0x1b42b0: 0xe6000964  swc1        $f0, 0x964($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2404), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B42B4u;
        goto label_1b42b4;
    }
    ctx->pc = 0x1B42ACu;
    {
        const bool branch_taken_0x1b42ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42ACu;
        // 0x1b42b0: 0xe6000964  swc1        $f0, 0x964($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42ac) {
            ctx->pc = 0x1B42B8u;
            goto label_1b42b8;
        }
    }
    ctx->pc = 0x1B42B4u;
label_1b42b4:
    // 0x1b42b4: 0xe6020964  swc1        $f2, 0x964($s0)
    ctx->pc = 0x1b42b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2404), bits); }
label_1b42b8:
    // 0x1b42b8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1b42b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b42bc:
    // 0x1b42bc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1b42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b42c0:
    // 0x1b42c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b42c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b42c4:
    // 0x1b42c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b42c8:
    if (ctx->pc == 0x1B42C8u) {
        ctx->pc = 0x1B42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42C4u;
        // 0x1b42c8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B42CCu;
        goto label_1b42cc;
    }
    ctx->pc = 0x1B42C4u;
    {
        const bool branch_taken_0x1b42c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42C4u;
        // 0x1b42c8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42c4) {
            ctx->pc = 0x1B42D8u;
            goto label_1b42d8;
        }
    }
    ctx->pc = 0x1B42CCu;
label_1b42cc:
    // 0x1b42cc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1b42d0:
    // 0x1b42d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b42d4:
    if (ctx->pc == 0x1B42D4u) {
        ctx->pc = 0x1B42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42D0u;
        // 0x1b42d4: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B42D8u;
        goto label_1b42d8;
    }
    ctx->pc = 0x1B42D0u;
    {
        const bool branch_taken_0x1b42d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42D0u;
        // 0x1b42d4: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42d0) {
            ctx->pc = 0x1B42DCu;
            goto label_1b42dc;
        }
    }
    ctx->pc = 0x1B42D8u;
label_1b42d8:
    // 0x1b42d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b42d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b42dc:
    // 0x1b42dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b42e0:
    if (ctx->pc == 0x1B42E0u) {
        ctx->pc = 0x1B42E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42DCu;
        // 0x1b42e0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B42E4u;
        goto label_1b42e4;
    }
    ctx->pc = 0x1B42DCu;
    {
        const bool branch_taken_0x1b42dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42DCu;
        // 0x1b42e0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42dc) {
            ctx->pc = 0x1B4310u;
            goto label_1b4310;
        }
    }
    ctx->pc = 0x1B42E4u;
label_1b42e4:
    // 0x1b42e4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1b42e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b42e8:
    // 0x1b42e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b42e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b42ec:
    // 0x1b42ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b42f0:
    if (ctx->pc == 0x1B42F0u) {
        ctx->pc = 0x1B42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42ECu;
        // 0x1b42f0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B42F4u;
        goto label_1b42f4;
    }
    ctx->pc = 0x1B42ECu;
    {
        const bool branch_taken_0x1b42ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42ECu;
        // 0x1b42f0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42ec) {
            ctx->pc = 0x1B4300u;
            goto label_1b4300;
        }
    }
    ctx->pc = 0x1B42F4u;
label_1b42f4:
    // 0x1b42f4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1b42f8:
    // 0x1b42f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b42fc:
    if (ctx->pc == 0x1B42FCu) {
        ctx->pc = 0x1B42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42F8u;
        // 0x1b42fc: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4300u;
        goto label_1b4300;
    }
    ctx->pc = 0x1B42F8u;
    {
        const bool branch_taken_0x1b42f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42F8u;
        // 0x1b42fc: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42f8) {
            ctx->pc = 0x1B4304u;
            goto label_1b4304;
        }
    }
    ctx->pc = 0x1B4300u;
label_1b4300:
    // 0x1b4300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4304:
    // 0x1b4304: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x1b4304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_1b4308:
    // 0x1b4308: 0xc6000964  lwc1        $f0, 0x964($s0)
    ctx->pc = 0x1b4308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b430c:
    // 0x1b430c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b4310:
    // 0x1b4310: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1b4310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b4314:
    // 0x1b4314: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b4314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b4318:
    // 0x1b4318: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b4318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b431c:
    // 0x1b431c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b4320:
    if (ctx->pc == 0x1B4320u) {
        ctx->pc = 0x1B4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B431Cu;
        // 0x1b4320: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4324u;
        goto label_1b4324;
    }
    ctx->pc = 0x1B431Cu;
    {
        const bool branch_taken_0x1b431c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B431Cu;
        // 0x1b4320: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b431c) {
            ctx->pc = 0x1B4330u;
            goto label_1b4330;
        }
    }
    ctx->pc = 0x1B4324u;
label_1b4324:
    // 0x1b4324: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b4324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1b4328:
    // 0x1b4328: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b432c:
    if (ctx->pc == 0x1B432Cu) {
        ctx->pc = 0x1B432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4328u;
        // 0x1b432c: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4330u;
        goto label_1b4330;
    }
    ctx->pc = 0x1B4328u;
    {
        const bool branch_taken_0x1b4328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4328u;
        // 0x1b432c: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4328) {
            ctx->pc = 0x1B4334u;
            goto label_1b4334;
        }
    }
    ctx->pc = 0x1B4330u;
label_1b4330:
    // 0x1b4330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4334:
    // 0x1b4334: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1b4338:
    if (ctx->pc == 0x1B4338u) {
        ctx->pc = 0x1B4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4334u;
        // 0x1b4338: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B433Cu;
        goto label_1b433c;
    }
    ctx->pc = 0x1B4334u;
    {
        const bool branch_taken_0x1b4334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4334u;
        // 0x1b4338: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4334) {
            ctx->pc = 0x1B436Cu;
            goto label_1b436c;
        }
    }
    ctx->pc = 0x1B433Cu;
label_1b433c:
    // 0x1b433c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1b433cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b4340:
    // 0x1b4340: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b4340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b4344:
    // 0x1b4344: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b4348:
    if (ctx->pc == 0x1B4348u) {
        ctx->pc = 0x1B4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4344u;
        // 0x1b4348: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B434Cu;
        goto label_1b434c;
    }
    ctx->pc = 0x1B4344u;
    {
        const bool branch_taken_0x1b4344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4344u;
        // 0x1b4348: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4344) {
            ctx->pc = 0x1B4358u;
            goto label_1b4358;
        }
    }
    ctx->pc = 0x1B434Cu;
label_1b434c:
    // 0x1b434c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b434cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1b4350:
    // 0x1b4350: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b4354:
    if (ctx->pc == 0x1B4354u) {
        ctx->pc = 0x1B4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4350u;
        // 0x1b4354: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4358u;
        goto label_1b4358;
    }
    ctx->pc = 0x1B4350u;
    {
        const bool branch_taken_0x1b4350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4350u;
        // 0x1b4354: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4350) {
            ctx->pc = 0x1B435Cu;
            goto label_1b435c;
        }
    }
    ctx->pc = 0x1B4358u;
label_1b4358:
    // 0x1b4358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b435c:
    // 0x1b435c: 0xc6000964  lwc1        $f0, 0x964($s0)
    ctx->pc = 0x1b435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4360:
    // 0x1b4360: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x1b4360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_1b4364:
    // 0x1b4364: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b4364u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b4368:
    // 0x1b4368: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b4368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b436c:
    // 0x1b436c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1b436cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_1b4370:
    // 0x1b4370: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1b4370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1b4374:
    // 0x1b4374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b4374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b4378:
    // 0x1b4378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b437c:
    // 0x1b437c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b4380:
    // 0x1b4380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4384:
    // 0x1b4384: 0xc04ca70  jal         func_1329C0
label_1b4388:
    if (ctx->pc == 0x1B4388u) {
        ctx->pc = 0x1B4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4384u;
        // 0x1b4388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B438Cu;
        goto label_1b438c;
    }
    ctx->pc = 0x1B4384u;
    SET_GPR_U32(ctx, 31, 0x1B438Cu);
    ctx->pc = 0x1B4388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4384u;
    // 0x1b4388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1329C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1329C0u, 0x1B4384u, 0x1B438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B438Cu;
label_1b438c:
    // 0x1b438c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b4390:
    if (ctx->pc == 0x1B4390u) {
        ctx->pc = 0x1B4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B438Cu;
        // 0x1b4390: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4394u;
        goto label_1b4394;
    }
    ctx->pc = 0x1B438Cu;
    {
        const bool branch_taken_0x1b438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B438Cu;
        // 0x1b4390: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b438c) {
            ctx->pc = 0x1B439Cu;
            goto label_1b439c;
        }
    }
    ctx->pc = 0x1B4394u;
label_1b4394:
    // 0x1b4394: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1b4394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1b4398:
    // 0x1b4398: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b4398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b439c:
    // 0x1b439c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b43a0:
    // 0x1b43a0: 0xc0aa1fa  jal         func_2A87E8
label_1b43a4:
    if (ctx->pc == 0x1B43A4u) {
        ctx->pc = 0x1B43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43A0u;
        // 0x1b43a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B43A8u;
        goto label_1b43a8;
    }
    ctx->pc = 0x1B43A0u;
    SET_GPR_U32(ctx, 31, 0x1B43A8u);
    ctx->pc = 0x1B43A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43A0u;
    // 0x1b43a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1B43A0u, 0x1B43A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43A8u;
label_1b43a8:
    // 0x1b43a8: 0xc06ddb6  jal         func_1B76D8
label_1b43ac:
    if (ctx->pc == 0x1B43ACu) {
        ctx->pc = 0x1B43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43A8u;
        // 0x1b43ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B43B0u;
        goto label_1b43b0;
    }
    ctx->pc = 0x1B43A8u;
    SET_GPR_U32(ctx, 31, 0x1B43B0u);
    ctx->pc = 0x1B43ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43A8u;
    // 0x1b43ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1B43A8u, 0x1B43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43B0u;
label_1b43b0:
    // 0x1b43b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b43b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b43b4:
    // 0x1b43b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b43b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b43b8:
    // 0x1b43b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b43b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b43bc:
    // 0x1b43bc: 0x3e00008  jr          $ra
label_1b43c0:
    if (ctx->pc == 0x1B43C0u) {
        ctx->pc = 0x1B43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43BCu;
        // 0x1b43c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B43C4u;
        goto label_1b43c4;
    }
    ctx->pc = 0x1B43BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43BCu;
        // 0x1b43c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B43BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B43C4u;
label_1b43c4:
    // 0x1b43c4: 0x0  nop
    ctx->pc = 0x1b43c4u;
    // NOP
    ctx->pc = 0x1b43c8u;
}
