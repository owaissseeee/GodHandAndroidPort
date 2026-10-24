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

// Function: func_001A4010
// Address: 0x1a4010 - 0x1a4218
void func_001A4010_0x1a4010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A4010_0x1a4010");
#endif

    switch (ctx->pc) {
        case 0x1a4010u: goto label_1a4010;
        case 0x1a4014u: goto label_1a4014;
        case 0x1a4018u: goto label_1a4018;
        case 0x1a401cu: goto label_1a401c;
        case 0x1a4020u: goto label_1a4020;
        case 0x1a4024u: goto label_1a4024;
        case 0x1a4028u: goto label_1a4028;
        case 0x1a402cu: goto label_1a402c;
        case 0x1a4030u: goto label_1a4030;
        case 0x1a4034u: goto label_1a4034;
        case 0x1a4038u: goto label_1a4038;
        case 0x1a403cu: goto label_1a403c;
        case 0x1a4040u: goto label_1a4040;
        case 0x1a4044u: goto label_1a4044;
        case 0x1a4048u: goto label_1a4048;
        case 0x1a404cu: goto label_1a404c;
        case 0x1a4050u: goto label_1a4050;
        case 0x1a4054u: goto label_1a4054;
        case 0x1a4058u: goto label_1a4058;
        case 0x1a405cu: goto label_1a405c;
        case 0x1a4060u: goto label_1a4060;
        case 0x1a4064u: goto label_1a4064;
        case 0x1a4068u: goto label_1a4068;
        case 0x1a406cu: goto label_1a406c;
        case 0x1a4070u: goto label_1a4070;
        case 0x1a4074u: goto label_1a4074;
        case 0x1a4078u: goto label_1a4078;
        case 0x1a407cu: goto label_1a407c;
        case 0x1a4080u: goto label_1a4080;
        case 0x1a4084u: goto label_1a4084;
        case 0x1a4088u: goto label_1a4088;
        case 0x1a408cu: goto label_1a408c;
        case 0x1a4090u: goto label_1a4090;
        case 0x1a4094u: goto label_1a4094;
        case 0x1a4098u: goto label_1a4098;
        case 0x1a409cu: goto label_1a409c;
        case 0x1a40a0u: goto label_1a40a0;
        case 0x1a40a4u: goto label_1a40a4;
        case 0x1a40a8u: goto label_1a40a8;
        case 0x1a40acu: goto label_1a40ac;
        case 0x1a40b0u: goto label_1a40b0;
        case 0x1a40b4u: goto label_1a40b4;
        case 0x1a40b8u: goto label_1a40b8;
        case 0x1a40bcu: goto label_1a40bc;
        case 0x1a40c0u: goto label_1a40c0;
        case 0x1a40c4u: goto label_1a40c4;
        case 0x1a40c8u: goto label_1a40c8;
        case 0x1a40ccu: goto label_1a40cc;
        case 0x1a40d0u: goto label_1a40d0;
        case 0x1a40d4u: goto label_1a40d4;
        case 0x1a40d8u: goto label_1a40d8;
        case 0x1a40dcu: goto label_1a40dc;
        case 0x1a40e0u: goto label_1a40e0;
        case 0x1a40e4u: goto label_1a40e4;
        case 0x1a40e8u: goto label_1a40e8;
        case 0x1a40ecu: goto label_1a40ec;
        case 0x1a40f0u: goto label_1a40f0;
        case 0x1a40f4u: goto label_1a40f4;
        case 0x1a40f8u: goto label_1a40f8;
        case 0x1a40fcu: goto label_1a40fc;
        case 0x1a4100u: goto label_1a4100;
        case 0x1a4104u: goto label_1a4104;
        case 0x1a4108u: goto label_1a4108;
        case 0x1a410cu: goto label_1a410c;
        case 0x1a4110u: goto label_1a4110;
        case 0x1a4114u: goto label_1a4114;
        case 0x1a4118u: goto label_1a4118;
        case 0x1a411cu: goto label_1a411c;
        case 0x1a4120u: goto label_1a4120;
        case 0x1a4124u: goto label_1a4124;
        case 0x1a4128u: goto label_1a4128;
        case 0x1a412cu: goto label_1a412c;
        case 0x1a4130u: goto label_1a4130;
        case 0x1a4134u: goto label_1a4134;
        case 0x1a4138u: goto label_1a4138;
        case 0x1a413cu: goto label_1a413c;
        case 0x1a4140u: goto label_1a4140;
        case 0x1a4144u: goto label_1a4144;
        case 0x1a4148u: goto label_1a4148;
        case 0x1a414cu: goto label_1a414c;
        case 0x1a4150u: goto label_1a4150;
        case 0x1a4154u: goto label_1a4154;
        case 0x1a4158u: goto label_1a4158;
        case 0x1a415cu: goto label_1a415c;
        case 0x1a4160u: goto label_1a4160;
        case 0x1a4164u: goto label_1a4164;
        case 0x1a4168u: goto label_1a4168;
        case 0x1a416cu: goto label_1a416c;
        case 0x1a4170u: goto label_1a4170;
        case 0x1a4174u: goto label_1a4174;
        case 0x1a4178u: goto label_1a4178;
        case 0x1a417cu: goto label_1a417c;
        case 0x1a4180u: goto label_1a4180;
        case 0x1a4184u: goto label_1a4184;
        case 0x1a4188u: goto label_1a4188;
        case 0x1a418cu: goto label_1a418c;
        case 0x1a4190u: goto label_1a4190;
        case 0x1a4194u: goto label_1a4194;
        case 0x1a4198u: goto label_1a4198;
        case 0x1a419cu: goto label_1a419c;
        case 0x1a41a0u: goto label_1a41a0;
        case 0x1a41a4u: goto label_1a41a4;
        case 0x1a41a8u: goto label_1a41a8;
        case 0x1a41acu: goto label_1a41ac;
        case 0x1a41b0u: goto label_1a41b0;
        case 0x1a41b4u: goto label_1a41b4;
        case 0x1a41b8u: goto label_1a41b8;
        case 0x1a41bcu: goto label_1a41bc;
        case 0x1a41c0u: goto label_1a41c0;
        case 0x1a41c4u: goto label_1a41c4;
        case 0x1a41c8u: goto label_1a41c8;
        case 0x1a41ccu: goto label_1a41cc;
        case 0x1a41d0u: goto label_1a41d0;
        case 0x1a41d4u: goto label_1a41d4;
        case 0x1a41d8u: goto label_1a41d8;
        case 0x1a41dcu: goto label_1a41dc;
        case 0x1a41e0u: goto label_1a41e0;
        case 0x1a41e4u: goto label_1a41e4;
        case 0x1a41e8u: goto label_1a41e8;
        case 0x1a41ecu: goto label_1a41ec;
        case 0x1a41f0u: goto label_1a41f0;
        case 0x1a41f4u: goto label_1a41f4;
        case 0x1a41f8u: goto label_1a41f8;
        case 0x1a41fcu: goto label_1a41fc;
        case 0x1a4200u: goto label_1a4200;
        case 0x1a4204u: goto label_1a4204;
        case 0x1a4208u: goto label_1a4208;
        case 0x1a420cu: goto label_1a420c;
        case 0x1a4210u: goto label_1a4210;
        case 0x1a4214u: goto label_1a4214;
        default: break;
    }

    ctx->pc = 0x1a4010u;

label_1a4010:
    // 0x1a4010: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a4010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1a4014:
    // 0x1a4014: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1a4014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1a4018:
    // 0x1a4018: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a4018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a401c:
    // 0x1a401c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1a401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1a4020:
    // 0x1a4020: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1a4020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1a4024:
    // 0x1a4024: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a4024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a4028:
    // 0x1a4028: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1a4028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1a402c:
    // 0x1a402c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1a402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1a4030:
    // 0x1a4030: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1a4030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
label_1a4034:
    // 0x1a4034: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a4038:
    if (ctx->pc == 0x1A4038u) {
        ctx->pc = 0x1A4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4034u;
        // 0x1a4038: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A403Cu;
        goto label_1a403c;
    }
    ctx->pc = 0x1A4034u;
    {
        const bool branch_taken_0x1a4034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4034u;
        // 0x1a4038: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4034) {
            ctx->pc = 0x1A4064u;
            goto label_1a4064;
        }
    }
    ctx->pc = 0x1A403Cu;
label_1a403c:
    // 0x1a403c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1a403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1a4040:
    // 0x1a4040: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a4040u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4044:
    // 0x1a4044: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a4044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a4048:
    // 0x1a4048: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
label_1a404c:
    if (ctx->pc == 0x1A404Cu) {
        ctx->pc = 0x1A404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4048u;
        // 0x1a404c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4050u;
        goto label_1a4050;
    }
    ctx->pc = 0x1A4048u;
    {
        const bool branch_taken_0x1a4048 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4048u;
        // 0x1a404c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4048) {
            ctx->pc = 0x1A4064u;
            goto label_1a4064;
        }
    }
    ctx->pc = 0x1A4050u;
label_1a4050:
    // 0x1a4050: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a4050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4054:
    // 0x1a4054: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1a4054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4058:
    // 0x1a4058: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a4058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a405c:
    // 0x1a405c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a405cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a4060:
    // 0x1a4060: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1a4060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a4064:
    // 0x1a4064: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1a4064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1a4068:
    // 0x1a4068: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a406c:
    // 0x1a406c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a406cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4070:
    // 0x1a4070: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1a4070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1a4074:
    // 0x1a4074: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1a4074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1a4078:
    // 0x1a4078: 0x40f809  jalr        $v0
label_1a407c:
    if (ctx->pc == 0x1A407Cu) {
        ctx->pc = 0x1A407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4078u;
        // 0x1a407c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4080u;
        goto label_1a4080;
    }
    ctx->pc = 0x1A4078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4080u);
        ctx->pc = 0x1A407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4078u;
        // 0x1a407c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4078u, 0x1A4080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4080u;
label_1a4080:
    // 0x1a4080: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1a4080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1a4084:
    // 0x1a4084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4088:
    // 0x1a4088: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1a4088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1a408c:
    // 0x1a408c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1a408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1a4090:
    // 0x1a4090: 0x40f809  jalr        $v0
label_1a4094:
    if (ctx->pc == 0x1A4094u) {
        ctx->pc = 0x1A4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4090u;
        // 0x1a4094: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4098u;
        goto label_1a4098;
    }
    ctx->pc = 0x1A4090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4098u);
        ctx->pc = 0x1A4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4090u;
        // 0x1a4094: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4090u, 0x1A4098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4098u;
label_1a4098:
    // 0x1a4098: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1a4098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a409c:
    // 0x1a409c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1a409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a40a0:
    // 0x1a40a0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1a40a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a40a4:
    // 0x1a40a4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1a40a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a40a8:
    // 0x1a40a8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a40a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a40ac:
    // 0x1a40ac: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a40acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a40b0:
    // 0x1a40b0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1a40b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1a40b4:
    // 0x1a40b4: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1a40b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1a40b8:
    // 0x1a40b8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1a40b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a40bc:
    // 0x1a40bc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1a40bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_1a40c0:
    // 0x1a40c0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a40c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a40c4:
    // 0x1a40c4: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1a40c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1a40c8:
    // 0x1a40c8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a40c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a40cc:
    // 0x1a40cc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1a40ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a40d0:
    // 0x1a40d0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a40d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a40d4:
    // 0x1a40d4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a40d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a40d8:
    // 0x1a40d8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1a40d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a40dc:
    // 0x1a40dc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1a40dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a40e0:
    // 0x1a40e0: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1a40e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a40e4:
    // 0x1a40e4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a40e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a40e8:
    // 0x1a40e8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1a40e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1a40ec:
    // 0x1a40ec: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1a40ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a40f0:
    // 0x1a40f0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1a40f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1a40f4:
    // 0x1a40f4: 0xc04078a  jal         func_101E28
label_1a40f8:
    if (ctx->pc == 0x1A40F8u) {
        ctx->pc = 0x1A40F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40F4u;
        // 0x1a40f8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40FCu;
        goto label_1a40fc;
    }
    ctx->pc = 0x1A40F4u;
    SET_GPR_U32(ctx, 31, 0x1A40FCu);
    ctx->pc = 0x1A40F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40F4u;
    // 0x1a40f8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1A40F4u, 0x1A40FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40FCu;
label_1a40fc:
    // 0x1a40fc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1a40fcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1a4100:
    // 0x1a4100: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4104:
    // 0x1a4104: 0x0  nop
    ctx->pc = 0x1a4104u;
    // NOP
label_1a4108:
    // 0x1a4108: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a4108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a410c:
    // 0x1a410c: 0x0  nop
    ctx->pc = 0x1a410cu;
    // NOP
label_1a4110:
    // 0x1a4110: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1a4114:
    if (ctx->pc == 0x1A4114u) {
        ctx->pc = 0x1A4114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4110u;
        // 0x1a4114: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4118u;
        goto label_1a4118;
    }
    ctx->pc = 0x1A4110u;
    {
        const bool branch_taken_0x1a4110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4110u;
        // 0x1a4114: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4110) {
            ctx->pc = 0x1A414Cu;
            goto label_1a414c;
        }
    }
    ctx->pc = 0x1A4118u;
label_1a4118:
    // 0x1a4118: 0x0  nop
    ctx->pc = 0x1a4118u;
    // NOP
label_1a411c:
    // 0x1a411c: 0x0  nop
    ctx->pc = 0x1a411cu;
    // NOP
label_1a4120:
    // 0x1a4120: 0x4601a083  div.s       $f2, $f20, $f1
    ctx->pc = 0x1a4120u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[1]);
label_1a4124:
    // 0x1a4124: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1a4124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a4128:
    // 0x1a4128: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a4128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a412c:
    // 0x1a412c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1a412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4130:
    // 0x1a4130: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1a4130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1a4134:
    // 0x1a4134: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a4134u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1a4138:
    // 0x1a4138: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1a4138u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1a413c:
    // 0x1a413c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1a413cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_1a4140:
    // 0x1a4140: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1a4140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1a4144:
    // 0x1a4144: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x1a4144u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1a4148:
    // 0x1a4148: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x1a4148u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1a414c:
    // 0x1a414c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1a414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a4150:
    // 0x1a4150: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a4150u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4154:
    // 0x1a4154: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1a4154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a4158:
    // 0x1a4158: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a4158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1a415c:
    // 0x1a415c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a415cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a4160:
    // 0x1a4160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4164:
    // 0x1a4164: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a4164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4168:
    // 0x1a4168: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1a4168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a416c:
    // 0x1a416c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1a416cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a4170:
    // 0x1a4170: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1a4170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1a4174:
    // 0x1a4174: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a4174u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1a4178:
    // 0x1a4178: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a4178u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a417c:
    // 0x1a417c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1a417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a4180:
    // 0x1a4180: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a4180u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4184:
    // 0x1a4184: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a4184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a4188:
    // 0x1a4188: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1a4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a418c:
    // 0x1a418c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1a418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a4190:
    // 0x1a4190: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1a4190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4194:
    // 0x1a4194: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1a4194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4198:
    // 0x1a4198: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1a4198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a419c:
    // 0x1a419c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1a419cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1a41a0:
    // 0x1a41a0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1a41a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a41a4:
    // 0x1a41a4: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a41a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a41a8:
    // 0x1a41a8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1a41a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a41ac:
    // 0x1a41ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a41acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a41b0:
    // 0x1a41b0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a41b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a41b4:
    // 0x1a41b4: 0x8e2505e4  lw          $a1, 0x5E4($s1)
    ctx->pc = 0x1a41b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1508)));
label_1a41b8:
    // 0x1a41b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a41b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1a41bc:
    // 0x1a41bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a41bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a41c0:
    // 0x1a41c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a41c4:
    // 0x1a41c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a41c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a41c8:
    // 0x1a41c8: 0xc0c1a0e  jal         func_306838
label_1a41cc:
    if (ctx->pc == 0x1A41CCu) {
        ctx->pc = 0x1A41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41C8u;
        // 0x1a41cc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41D0u;
        goto label_1a41d0;
    }
    ctx->pc = 0x1A41C8u;
    SET_GPR_U32(ctx, 31, 0x1A41D0u);
    ctx->pc = 0x1A41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41C8u;
    // 0x1a41cc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1A41C8u, 0x1A41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41D0u;
label_1a41d0:
    // 0x1a41d0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a41d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1a41d4:
    // 0x1a41d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1a41d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a41d8:
    // 0x1a41d8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1a41d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1a41dc:
    // 0x1a41dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a41dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a41e0:
    // 0x1a41e0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a41e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a41e4:
    // 0x1a41e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a41e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a41e8:
    // 0x1a41e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a41e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a41ec:
    // 0x1a41ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a41ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a41f0:
    // 0x1a41f0: 0xc0b2e92  jal         func_2CBA48
label_1a41f4:
    if (ctx->pc == 0x1A41F4u) {
        ctx->pc = 0x1A41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41F0u;
        // 0x1a41f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41F8u;
        goto label_1a41f8;
    }
    ctx->pc = 0x1A41F0u;
    SET_GPR_U32(ctx, 31, 0x1A41F8u);
    ctx->pc = 0x1A41F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41F0u;
    // 0x1a41f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1A41F0u, 0x1A41F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41F8u;
label_1a41f8:
    // 0x1a41f8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1a41f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a41fc:
    // 0x1a41fc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1a41fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a4200:
    // 0x1a4200: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1a4200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a4204:
    // 0x1a4204: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a4204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a4208:
    // 0x1a4208: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1a4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a420c:
    // 0x1a420c: 0x3e00008  jr          $ra
label_1a4210:
    if (ctx->pc == 0x1A4210u) {
        ctx->pc = 0x1A4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A420Cu;
        // 0x1a4210: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4214u;
        goto label_1a4214;
    }
    ctx->pc = 0x1A420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A420Cu;
        // 0x1a4210: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A420Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4214u;
label_1a4214:
    // 0x1a4214: 0x0  nop
    ctx->pc = 0x1a4214u;
    // NOP
    ctx->pc = 0x1a4218u;
}
