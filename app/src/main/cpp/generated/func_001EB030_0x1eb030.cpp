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

// Function: func_001EB030
// Address: 0x1eb030 - 0x1eb648
void func_001EB030_0x1eb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EB030_0x1eb030");
#endif

    switch (ctx->pc) {
        case 0x1eb114u: goto label_1eb114;
        case 0x1eb120u: goto label_1eb120;
        case 0x1eb250u: goto label_1eb250;
        case 0x1eb288u: goto label_1eb288;
        case 0x1eb290u: goto label_1eb290;
        case 0x1eb29cu: goto label_1eb29c;
        case 0x1eb2acu: goto label_1eb2ac;
        case 0x1eb2ccu: goto label_1eb2cc;
        case 0x1eb2dcu: goto label_1eb2dc;
        case 0x1eb2e4u: goto label_1eb2e4;
        case 0x1eb2f0u: goto label_1eb2f0;
        case 0x1eb300u: goto label_1eb300;
        case 0x1eb340u: goto label_1eb340;
        case 0x1eb370u: goto label_1eb370;
        case 0x1eb37cu: goto label_1eb37c;
        case 0x1eb388u: goto label_1eb388;
        case 0x1eb3a4u: goto label_1eb3a4;
        case 0x1eb420u: goto label_1eb420;
        case 0x1eb440u: goto label_1eb440;
        case 0x1eb460u: goto label_1eb460;
        case 0x1eb480u: goto label_1eb480;
        case 0x1eb524u: goto label_1eb524;
        case 0x1eb52cu: goto label_1eb52c;
        case 0x1eb550u: goto label_1eb550;
        case 0x1eb57cu: goto label_1eb57c;
        case 0x1eb584u: goto label_1eb584;
        case 0x1eb590u: goto label_1eb590;
        case 0x1eb5d0u: goto label_1eb5d0;
        case 0x1eb610u: goto label_1eb610;
        case 0x1eb618u: goto label_1eb618;
        default: break;
    }

    ctx->pc = 0x1eb030u;

    // 0x1eb030: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1eb030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1eb034: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1eb034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1eb038: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1eb038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1eb03c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb040: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1eb040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1eb044: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1eb044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1eb048: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1eb048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1eb04c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1eb04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1eb050: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1eb050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1eb054: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1eb054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1eb058: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1eb058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1eb05c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eb05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eb060: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1eb060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eb064: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1eb064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1eb068: 0x10400166  beqz        $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x1EB068u;
    {
        const bool branch_taken_0x1eb068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB068u;
        // 0x1eb06c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb068) {
            ctx->pc = 0x1EB604u;
            goto label_1eb604;
        }
    }
    ctx->pc = 0x1EB070u;
    // 0x1eb070: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eb070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eb074: 0x2442bd20  addiu       $v0, $v0, -0x42E0
    ctx->pc = 0x1eb074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950176));
    // 0x1eb078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1eb078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb07c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1eb07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eb080: 0x800008  jr          $a0
    ctx->pc = 0x1EB080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB088u: goto label_1eb088;
            case 0x1EB3D4u: goto label_1eb3d4;
            case 0x1EB490u: goto label_1eb490;
            case 0x1EB4E0u: goto label_1eb4e0;
            case 0x1EB598u: goto label_1eb598;
            case 0x1EB5E0u: goto label_1eb5e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EB088u;
label_1eb088:
    // 0x1eb088: 0x3c090074  lui         $t1, 0x74
    ctx->pc = 0x1eb088u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)116 << 16));
    // 0x1eb08c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1eb08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1eb090: 0x8d227a80  lw          $v0, 0x7A80($t1)
    ctx->pc = 0x1eb090u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x1eb094: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x1eb094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x1eb098: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1eb098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1eb09c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1eb09cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1eb0a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1eb0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eb0a4: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x1eb0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x1eb0a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1eb0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1eb0ac: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1eb0acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1eb0b0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1eb0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1eb0b4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1eb0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1eb0b8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1eb0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1eb0bc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1eb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1eb0c0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1eb0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1eb0c4: 0x24638200  addiu       $v1, $v1, -0x7E00
    ctx->pc = 0x1eb0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935040));
    // 0x1eb0c8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1eb0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1eb0cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1eb0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1eb0d0: 0xad227a80  sw          $v0, 0x7A80($t1)
    ctx->pc = 0x1eb0d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
    // 0x1eb0d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1eb0d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x568200u));
    // 0x1eb0d8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1eb0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eb0dc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1eb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1eb0e0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1eb0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eb0e4: 0x24428210  addiu       $v0, $v0, -0x7DF0
    ctx->pc = 0x1eb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935056));
    // 0x1eb0e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1eb0e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x568210u));
    // 0x1eb0ec: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1eb0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eb0f0: 0x2637019c  addiu       $s7, $s1, 0x19C
    ctx->pc = 0x1eb0f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    // 0x1eb0f4: 0x26351b90  addiu       $s5, $s1, 0x1B90
    ctx->pc = 0x1eb0f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 7056));
    // 0x1eb0f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eb0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1eb0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb100: 0x2416000a  addiu       $s6, $zero, 0xA
    ctx->pc = 0x1eb100u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eb104: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1eb104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb108: 0x3c1e0057  lui         $fp, 0x57
    ctx->pc = 0x1eb108u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)87 << 16));
    // 0x1eb10c: 0xc07adc6  jal         func_1EB718
    ctx->pc = 0x1EB10Cu;
    SET_GPR_U32(ctx, 31, 0x1EB114u);
    ctx->pc = 0x1EB110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB10Cu;
    // 0x1eb110: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB718u, 0x1EB10Cu, 0x1EB114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB114u;
label_1eb114:
    // 0x1eb114: 0x2632005c  addiu       $s2, $s1, 0x5C
    ctx->pc = 0x1eb114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x1eb118: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x1eb118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb11c: 0x0  nop
    ctx->pc = 0x1eb11cu;
    // NOP
label_1eb120:
    // 0x1eb120: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x1eb120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1eb124: 0x56820078  bnel        $s4, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1EB124u;
    {
        const bool branch_taken_0x1eb124 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb124) {
            ctx->pc = 0x1EB128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB124u;
            // 0x1eb128: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB308u;
            goto label_1eb308;
        }
    }
    ctx->pc = 0x1EB12Cu;
    // 0x1eb12c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1eb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1eb130: 0x244281e0  addiu       $v0, $v0, -0x7E20
    ctx->pc = 0x1eb130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935008));
    // 0x1eb134: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1eb134u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x5681E0u));
    // 0x1eb138: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1eb138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eb13c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1eb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1eb140: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EB140u;
    {
        const bool branch_taken_0x1eb140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB140u;
        // 0x1eb144: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb140) {
            ctx->pc = 0x1EB16Cu;
            goto label_1eb16c;
        }
    }
    ctx->pc = 0x1EB148u;
    // 0x1eb148: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1eb148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1eb14c: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB14Cu;
    {
        const bool branch_taken_0x1eb14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1EB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB14Cu;
        // 0x1eb150: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb14c) {
            ctx->pc = 0x1EB16Cu;
            goto label_1eb16c;
        }
    }
    ctx->pc = 0x1EB154u;
    // 0x1eb154: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1eb154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1eb158: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1eb158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb15c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1eb15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1eb160: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1eb160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb164: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1eb164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1eb168: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1eb168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1eb16c:
    // 0x1eb16c: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x1eb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1eb170: 0x246381f0  addiu       $v1, $v1, -0x7E10
    ctx->pc = 0x1eb170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935024));
    // 0x1eb174: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1eb174u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eb178: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1eb178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eb17c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1eb17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1eb180: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eb180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb184: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1eb184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1eb188: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB188u;
    {
        const bool branch_taken_0x1eb188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB188u;
        // 0x1eb18c: 0x24430100  addiu       $v1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb188) {
            ctx->pc = 0x1EB1ACu;
            goto label_1eb1ac;
        }
    }
    ctx->pc = 0x1EB190u;
    // 0x1eb190: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB190u;
    {
        const bool branch_taken_0x1eb190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x1EB194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB190u;
        // 0x1eb194: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb190) {
            ctx->pc = 0x1EB1ACu;
            goto label_1eb1ac;
        }
    }
    ctx->pc = 0x1EB198u;
    // 0x1eb198: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1eb198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1eb19c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1eb19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb1a0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1eb1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1eb1a4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1eb1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb1a8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1eb1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1eb1ac:
    // 0x1eb1ac: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x1eb1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1eb1b0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1eb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1eb1b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eb1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb1b8: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x1eb1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1eb1bc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB1BCu;
    {
        const bool branch_taken_0x1eb1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb1bc) {
            ctx->pc = 0x1EB1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB1BCu;
            // 0x1eb1c0: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB1DCu;
            goto label_1eb1dc;
        }
    }
    ctx->pc = 0x1EB1C4u;
    // 0x1eb1c4: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x1eb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x1eb1c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1eb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1eb1cc: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1eb1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1eb1d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1eb1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1eb1d4: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x1eb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
    // 0x1eb1d8: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x1eb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_1eb1dc:
    // 0x1eb1dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1eb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1eb1e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb1e4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1eb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1eb1e8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB1E8u;
    {
        const bool branch_taken_0x1eb1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb1e8) {
            ctx->pc = 0x1EB1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB1E8u;
            // 0x1eb1ec: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB200u;
            goto label_1eb200;
        }
    }
    ctx->pc = 0x1EB1F0u;
    // 0x1eb1f0: 0x8c620600  lw          $v0, 0x600($v1)
    ctx->pc = 0x1eb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1536)));
    // 0x1eb1f4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1eb1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1eb1f8: 0xac620600  sw          $v0, 0x600($v1)
    ctx->pc = 0x1eb1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1536), GPR_U32(ctx, 2));
    // 0x1eb1fc: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x1eb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_1eb200:
    // 0x1eb200: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1eb200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1eb204: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1eb204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1eb208: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x1eb208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1eb20c: 0x8c830600  lw          $v1, 0x600($a0)
    ctx->pc = 0x1eb20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1536)));
    // 0x1eb210: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1eb210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1eb214: 0xac830600  sw          $v1, 0x600($a0)
    ctx->pc = 0x1eb214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1536), GPR_U32(ctx, 3));
    // 0x1eb218: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eb218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1eb21c: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x1EB21Cu;
    {
        const bool branch_taken_0x1eb21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb21c) {
            ctx->pc = 0x1EB220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB21Cu;
            // 0x1eb220: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB31Cu;
            goto label_1eb31c;
        }
    }
    ctx->pc = 0x1EB224u;
    // 0x1eb224: 0x8e23019c  lw          $v1, 0x19C($s1)
    ctx->pc = 0x1eb224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x1eb228: 0x8e2401b4  lw          $a0, 0x1B4($s1)
    ctx->pc = 0x1eb228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1eb22c: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x1eb22cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1eb230: 0x14440020  bne         $v0, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EB230u;
    {
        const bool branch_taken_0x1eb230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB230u;
        // 0x1eb234: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb230) {
            ctx->pc = 0x1EB2B4u;
            goto label_1eb2b4;
        }
    }
    ctx->pc = 0x1EB238u;
    // 0x1eb238: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eb238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb23c: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x1eb23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1eb240: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB240u;
    {
        const bool branch_taken_0x1eb240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb240) {
            ctx->pc = 0x1EB244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB240u;
            // 0x1eb244: 0x8e2301b4  lw          $v1, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB254u;
            goto label_1eb254;
        }
    }
    ctx->pc = 0x1EB248u;
    // 0x1eb248: 0xc06c82a  jal         func_1B20A8
    ctx->pc = 0x1EB248u;
    SET_GPR_U32(ctx, 31, 0x1EB250u);
    ctx->pc = 0x1B20A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20A8u, 0x1EB248u, 0x1EB250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB250u;
label_1eb250:
    // 0x1eb250: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x1eb250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_1eb254:
    // 0x1eb254: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EB254u;
    {
        const bool branch_taken_0x1eb254 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb254) {
            ctx->pc = 0x1EB258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB254u;
            // 0x1eb258: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB25Cu;
            goto label_1eb25c;
        }
    }
    ctx->pc = 0x1EB25Cu;
label_1eb25c:
    // 0x1eb25c: 0x8e2701b8  lw          $a3, 0x1B8($s1)
    ctx->pc = 0x1eb25cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1eb260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb264: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1eb264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1eb268: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1eb268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1eb26c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x1eb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1eb270: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1eb270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb274: 0x56001a  div         $zero, $v0, $s6
    ctx->pc = 0x1eb274u;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1eb278: 0x1012  mflo        $v0
    ctx->pc = 0x1eb278u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1eb27c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eb27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb280: 0xc07b8aa  jal         func_1EE2A8
    ctx->pc = 0x1EB280u;
    SET_GPR_U32(ctx, 31, 0x1EB288u);
    ctx->pc = 0x1EB284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB280u;
    // 0x1eb284: 0xae2201c0  sw          $v0, 0x1C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE2A8u, 0x1EB280u, 0x1EB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB288u;
label_1eb288:
    // 0x1eb288: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1EB288u;
    SET_GPR_U32(ctx, 31, 0x1EB290u);
    ctx->pc = 0x1EB28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB288u;
    // 0x1eb28c: 0x27c49b70  addiu       $a0, $fp, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EB288u, 0x1EB290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB290u;
label_1eb290:
    // 0x1eb290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eb290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb294: 0xc07b8b2  jal         func_1EE2C8
    ctx->pc = 0x1EB294u;
    SET_GPR_U32(ctx, 31, 0x1EB29Cu);
    ctx->pc = 0x1EB298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB294u;
    // 0x1eb298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE2C8u, 0x1EB294u, 0x1EB29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB29Cu;
label_1eb29c:
    // 0x1eb29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eb2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb2a4: 0xc07b8ba  jal         func_1EE2E8
    ctx->pc = 0x1EB2A4u;
    SET_GPR_U32(ctx, 31, 0x1EB2ACu);
    ctx->pc = 0x1EB2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB2A4u;
    // 0x1eb2a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE2E8u, 0x1EB2A4u, 0x1EB2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2ACu;
label_1eb2ac:
    // 0x1eb2ac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1EB2ACu;
    {
        const bool branch_taken_0x1eb2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2ACu;
        // 0x1eb2b0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2ac) {
            ctx->pc = 0x1EB31Cu;
            goto label_1eb31c;
        }
    }
    ctx->pc = 0x1EB2B4u;
label_1eb2b4:
    // 0x1eb2b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eb2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb2b8: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x1eb2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1eb2bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB2BCu;
    {
        const bool branch_taken_0x1eb2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb2bc) {
            ctx->pc = 0x1EB2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB2BCu;
            // 0x1eb2c0: 0xae2001c0  sw          $zero, 0x1C0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB2D0u;
            goto label_1eb2d0;
        }
    }
    ctx->pc = 0x1EB2C4u;
    // 0x1eb2c4: 0xc06c838  jal         func_1B20E0
    ctx->pc = 0x1EB2C4u;
    SET_GPR_U32(ctx, 31, 0x1EB2CCu);
    ctx->pc = 0x1B20E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20E0u, 0x1EB2C4u, 0x1EB2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2CCu;
label_1eb2cc:
    // 0x1eb2cc: 0xae2001c0  sw          $zero, 0x1C0($s1)
    ctx->pc = 0x1eb2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 0));
label_1eb2d0:
    // 0x1eb2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2d4: 0xc07b8aa  jal         func_1EE2A8
    ctx->pc = 0x1EB2D4u;
    SET_GPR_U32(ctx, 31, 0x1EB2DCu);
    ctx->pc = 0x1EB2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB2D4u;
    // 0x1eb2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE2A8u, 0x1EB2D4u, 0x1EB2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2DCu;
label_1eb2dc:
    // 0x1eb2dc: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1EB2DCu;
    SET_GPR_U32(ctx, 31, 0x1EB2E4u);
    ctx->pc = 0x1EB2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB2DCu;
    // 0x1eb2e0: 0x27c49b70  addiu       $a0, $fp, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EB2DCu, 0x1EB2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2E4u;
label_1eb2e4:
    // 0x1eb2e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eb2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2e8: 0xc07b8b2  jal         func_1EE2C8
    ctx->pc = 0x1EB2E8u;
    SET_GPR_U32(ctx, 31, 0x1EB2F0u);
    ctx->pc = 0x1EB2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB2E8u;
    // 0x1eb2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE2C8u, 0x1EB2E8u, 0x1EB2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2F0u;
label_1eb2f0:
    // 0x1eb2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eb2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb2f8: 0xc07b8ba  jal         func_1EE2E8
    ctx->pc = 0x1EB2F8u;
    SET_GPR_U32(ctx, 31, 0x1EB300u);
    ctx->pc = 0x1EB2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB2F8u;
    // 0x1eb2fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE2E8u, 0x1EB2F8u, 0x1EB300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB300u;
label_1eb300:
    // 0x1eb300: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB300u;
    {
        const bool branch_taken_0x1eb300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB300u;
        // 0x1eb304: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb300) {
            ctx->pc = 0x1EB31Cu;
            goto label_1eb31c;
        }
    }
    ctx->pc = 0x1EB308u;
label_1eb308:
    // 0x1eb308: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB308u;
    {
        const bool branch_taken_0x1eb308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB308u;
        // 0x1eb30c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb308) {
            ctx->pc = 0x1EB31Cu;
            goto label_1eb31c;
        }
    }
    ctx->pc = 0x1EB310u;
    // 0x1eb310: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1eb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x1eb314: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1eb314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1eb318: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x1eb318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_1eb31c:
    // 0x1eb31c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1eb31cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1eb320: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1eb320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1eb324: 0x1440ff7e  bnez        $v0, . + 4 + (-0x82 << 2)
    ctx->pc = 0x1EB324u;
    {
        const bool branch_taken_0x1eb324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB324u;
        // 0x1eb328: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb324) {
            ctx->pc = 0x1EB120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb120;
        }
    }
    ctx->pc = 0x1EB32Cu;
    // 0x1eb32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb330: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1eb330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb334: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB334u;
    {
        const bool branch_taken_0x1eb334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB334u;
        // 0x1eb338: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb334) {
            ctx->pc = 0x1EB344u;
            goto label_1eb344;
        }
    }
    ctx->pc = 0x1EB33Cu;
    // 0x1eb33c: 0x0  nop
    ctx->pc = 0x1eb33cu;
    // NOP
label_1eb340:
    // 0x1eb340: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1eb340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1eb344:
    // 0x1eb344: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1eb344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1eb348: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EB348u;
    {
        const bool branch_taken_0x1eb348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB348u;
        // 0x1eb34c: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb348) {
            ctx->pc = 0x1EB380u;
            goto label_1eb380;
        }
    }
    ctx->pc = 0x1EB350u;
    // 0x1eb350: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1eb350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1eb354: 0x8e2401b4  lw          $a0, 0x1B4($s1)
    ctx->pc = 0x1eb354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1eb358: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x1eb358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eb35c: 0x1464fff8  bne         $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EB35Cu;
    {
        const bool branch_taken_0x1eb35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB35Cu;
        // 0x1eb360: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb35c) {
            ctx->pc = 0x1EB340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb340;
        }
    }
    ctx->pc = 0x1EB364u;
    // 0x1eb364: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1eb364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1eb368: 0xc07b9b2  jal         func_1EE6C8
    ctx->pc = 0x1EB368u;
    SET_GPR_U32(ctx, 31, 0x1EB370u);
    ctx->pc = 0x1EB36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB368u;
    // 0x1eb36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE6C8u, 0x1EB368u, 0x1EB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB370u;
label_1eb370:
    // 0x1eb370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb374: 0xc07b9cc  jal         func_1EE730
    ctx->pc = 0x1EB374u;
    SET_GPR_U32(ctx, 31, 0x1EB37Cu);
    ctx->pc = 0x1EB378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB374u;
    // 0x1eb378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE730u, 0x1EB374u, 0x1EB37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB37Cu;
label_1eb37c:
    // 0x1eb37c: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x1eb37cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1eb380:
    // 0x1eb380: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eb380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb384: 0x0  nop
    ctx->pc = 0x1eb384u;
    // NOP
label_1eb388:
    // 0x1eb388: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1eb388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1eb38c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB38Cu;
    {
        const bool branch_taken_0x1eb38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB38Cu;
        // 0x1eb390: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb38c) {
            ctx->pc = 0x1EB3A4u;
            goto label_1eb3a4;
        }
    }
    ctx->pc = 0x1EB394u;
    // 0x1eb394: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1eb394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eb398: 0x90460004  lbu         $a2, 0x4($v0)
    ctx->pc = 0x1eb398u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eb39c: 0xc07b97c  jal         func_1EE5F0
    ctx->pc = 0x1EB39Cu;
    SET_GPR_U32(ctx, 31, 0x1EB3A4u);
    ctx->pc = 0x1EB3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB39Cu;
    // 0x1eb3a0: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5F0u, 0x1EB39Cu, 0x1EB3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB3A4u;
label_1eb3a4:
    // 0x1eb3a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1eb3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1eb3a8: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1eb3a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1eb3ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EB3ACu;
    {
        const bool branch_taken_0x1eb3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3ACu;
        // 0x1eb3b0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3ac) {
            ctx->pc = 0x1EB388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb388;
        }
    }
    ctx->pc = 0x1EB3B4u;
    // 0x1eb3b4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1eb3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1eb3b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb3bc: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1eb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1eb3c0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1eb3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eb3c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb3c8: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1eb3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1eb3cc: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1EB3CCu;
    {
        const bool branch_taken_0x1eb3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3CCu;
        // 0x1eb3d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3cc) {
            ctx->pc = 0x1EB5C8u;
            goto label_1eb5c8;
        }
    }
    ctx->pc = 0x1EB3D4u;
label_1eb3d4:
    // 0x1eb3d4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1eb3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1eb3d8: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1eb3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1eb3dc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1eb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1eb3e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eb3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eb3e4: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1EB3E4u;
    {
        const bool branch_taken_0x1eb3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3E4u;
        // 0x1eb3e8: 0x26301b90  addiu       $s0, $s1, 0x1B90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 7056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3e4) {
            ctx->pc = 0x1EB608u;
            goto label_1eb608;
        }
    }
    ctx->pc = 0x1EB3ECu;
    // 0x1eb3ec: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x1eb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x1eb3f0: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EB3F0u;
    {
        const bool branch_taken_0x1eb3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb3f0) {
            ctx->pc = 0x1EB3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB3F0u;
            // 0x1eb3f4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB484u;
            goto label_1eb484;
        }
    }
    ctx->pc = 0x1EB3F8u;
    // 0x1eb3f8: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x1eb3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eb3fc: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x1eb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1eb400: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EB400u;
    {
        const bool branch_taken_0x1eb400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB400u;
        // 0x1eb404: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb400) {
            ctx->pc = 0x1EB448u;
            goto label_1eb448;
        }
    }
    ctx->pc = 0x1EB408u;
    // 0x1eb408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb40c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1eb40cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1eb410: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x1eb410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1eb414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb418: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1EB418u;
    SET_GPR_U32(ctx, 31, 0x1EB420u);
    ctx->pc = 0x1EB41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB418u;
    // 0x1eb41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1EB418u, 0x1EB420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB420u;
label_1eb420:
    // 0x1eb420: 0x8e270200  lw          $a3, 0x200($s1)
    ctx->pc = 0x1eb420u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1eb424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb42c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1eb42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1eb430: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x1eb430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x1eb434: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb434u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb438: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1EB438u;
    SET_GPR_U32(ctx, 31, 0x1EB440u);
    ctx->pc = 0x1EB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB438u;
    // 0x1eb43c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1EB438u, 0x1EB440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB440u;
label_1eb440:
    // 0x1eb440: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EB440u;
    {
        const bool branch_taken_0x1eb440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB440u;
        // 0x1eb444: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb440) {
            ctx->pc = 0x1EB484u;
            goto label_1eb484;
        }
    }
    ctx->pc = 0x1EB448u;
label_1eb448:
    // 0x1eb448: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb44c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1eb44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1eb450: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1eb450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1eb454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb458: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1EB458u;
    SET_GPR_U32(ctx, 31, 0x1EB460u);
    ctx->pc = 0x1EB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB458u;
    // 0x1eb45c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1EB458u, 0x1EB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB460u;
label_1eb460:
    // 0x1eb460: 0x8e270200  lw          $a3, 0x200($s1)
    ctx->pc = 0x1eb460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1eb464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb46c: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1eb46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1eb470: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x1eb470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x1eb474: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb478: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1EB478u;
    SET_GPR_U32(ctx, 31, 0x1EB480u);
    ctx->pc = 0x1EB47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB478u;
    // 0x1eb47c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1EB478u, 0x1EB480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB480u;
label_1eb480:
    // 0x1eb480: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1eb480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1eb484:
    // 0x1eb484: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1eb484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1eb488: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1EB488u;
    {
        const bool branch_taken_0x1eb488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB488u;
        // 0x1eb48c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb488) {
            ctx->pc = 0x1EB5D4u;
            goto label_1eb5d4;
        }
    }
    ctx->pc = 0x1EB490u;
label_1eb490:
    // 0x1eb490: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1eb490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1eb494: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB494u;
    {
        const bool branch_taken_0x1eb494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB494u;
        // 0x1eb498: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb494) {
            ctx->pc = 0x1EB4A8u;
            goto label_1eb4a8;
        }
    }
    ctx->pc = 0x1EB49Cu;
    // 0x1eb49c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eb49cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb4a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EB4A0u;
    {
        const bool branch_taken_0x1eb4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4A0u;
        // 0x1eb4a4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4a0) {
            ctx->pc = 0x1EB4ACu;
            goto label_1eb4ac;
        }
    }
    ctx->pc = 0x1EB4A8u;
label_1eb4a8:
    // 0x1eb4a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eb4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb4ac:
    // 0x1eb4ac: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1eb4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eb4b0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1EB4B0u;
    {
        const bool branch_taken_0x1eb4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4B0u;
        // 0x1eb4b4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4b0) {
            ctx->pc = 0x1EB604u;
            goto label_1eb604;
        }
    }
    ctx->pc = 0x1EB4B8u;
    // 0x1eb4b8: 0x8e2401c0  lw          $a0, 0x1C0($s1)
    ctx->pc = 0x1eb4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x1eb4bc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EB4BCu;
    {
        const bool branch_taken_0x1eb4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb4bc) {
            ctx->pc = 0x1EB4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB4BCu;
            // 0x1eb4c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB4C4u;
            goto label_1eb4c4;
        }
    }
    ctx->pc = 0x1EB4C4u;
label_1eb4c4:
    // 0x1eb4c4: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1eb4c4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1eb4c8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1eb4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eb4cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eb4d0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1eb4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1eb4d4: 0x2012  mflo        $a0
    ctx->pc = 0x1eb4d4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1eb4d8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1EB4D8u;
    {
        const bool branch_taken_0x1eb4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4D8u;
        // 0x1eb4dc: 0xae240058  sw          $a0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4d8) {
            ctx->pc = 0x1EB604u;
            goto label_1eb604;
        }
    }
    ctx->pc = 0x1EB4E0u;
label_1eb4e0:
    // 0x1eb4e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1eb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1eb4e4: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1eb4e8: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1eb4e8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1eb4ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1eb4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1eb4f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB4F0u;
    {
        const bool branch_taken_0x1eb4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4F0u;
        // 0x1eb4f4: 0x8e260058  lw          $a2, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4f0) {
            ctx->pc = 0x1EB500u;
            goto label_1eb500;
        }
    }
    ctx->pc = 0x1EB4F8u;
    // 0x1eb4f8: 0x14c00011  bnez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EB4F8u;
    {
        const bool branch_taken_0x1eb4f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4F8u;
        // 0x1eb4fc: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4f8) {
            ctx->pc = 0x1EB540u;
            goto label_1eb540;
        }
    }
    ctx->pc = 0x1EB500u;
label_1eb500:
    // 0x1eb500: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1eb500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eb504: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1eb504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1eb508: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x1eb508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1eb50c: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x1eb50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1eb510: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1eb510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb518: 0x2812  mflo        $a1
    ctx->pc = 0x1eb518u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1eb51c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1EB51Cu;
    SET_GPR_U32(ctx, 31, 0x1EB524u);
    ctx->pc = 0x1EB520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB51Cu;
    // 0x1eb520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1EB51Cu, 0x1EB524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB524u;
label_1eb524:
    // 0x1eb524: 0xc07ea08  jal         func_1FA820
    ctx->pc = 0x1EB524u;
    SET_GPR_U32(ctx, 31, 0x1EB52Cu);
    ctx->pc = 0x1EB528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB524u;
    // 0x1eb528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA820u, 0x1EB524u, 0x1EB52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB52Cu;
label_1eb52c:
    // 0x1eb52c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1eb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eb530: 0xae2001c0  sw          $zero, 0x1C0($s1)
    ctx->pc = 0x1eb530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 0));
    // 0x1eb534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eb534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb538: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EB538u;
    {
        const bool branch_taken_0x1eb538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB538u;
        // 0x1eb53c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb538) {
            ctx->pc = 0x1EB56Cu;
            goto label_1eb56c;
        }
    }
    ctx->pc = 0x1EB540u;
label_1eb540:
    // 0x1eb540: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1eb540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eb544: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x1eb544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1eb548: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1EB548u;
    SET_GPR_U32(ctx, 31, 0x1EB550u);
    ctx->pc = 0x1EB54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB548u;
    // 0x1eb54c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1EB548u, 0x1EB550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB550u;
label_1eb550:
    // 0x1eb550: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1eb550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb554: 0x8e2201c0  lw          $v0, 0x1C0($s1)
    ctx->pc = 0x1eb554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x1eb558: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x1eb558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1eb55c: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x1eb55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x1eb560: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eb560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eb564: 0xae2201c0  sw          $v0, 0x1C0($s1)
    ctx->pc = 0x1eb564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 2));
    // 0x1eb568: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x1eb568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
label_1eb56c:
    // 0x1eb56c: 0x8e2501c0  lw          $a1, 0x1C0($s1)
    ctx->pc = 0x1eb56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x1eb570: 0x26301b90  addiu       $s0, $s1, 0x1B90
    ctx->pc = 0x1eb570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 7056));
    // 0x1eb574: 0xc07b8aa  jal         func_1EE2A8
    ctx->pc = 0x1EB574u;
    SET_GPR_U32(ctx, 31, 0x1EB57Cu);
    ctx->pc = 0x1EB578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB574u;
    // 0x1eb578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE2A8u, 0x1EB574u, 0x1EB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB57Cu;
label_1eb57c:
    // 0x1eb57c: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1EB57Cu;
    SET_GPR_U32(ctx, 31, 0x1EB584u);
    ctx->pc = 0x1EB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB57Cu;
    // 0x1eb580: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EB57Cu, 0x1EB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB584u;
label_1eb584:
    // 0x1eb584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb588: 0xc07b8b2  jal         func_1EE2C8
    ctx->pc = 0x1EB588u;
    SET_GPR_U32(ctx, 31, 0x1EB590u);
    ctx->pc = 0x1EB58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB588u;
    // 0x1eb58c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE2C8u, 0x1EB588u, 0x1EB590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB590u;
label_1eb590:
    // 0x1eb590: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1EB590u;
    {
        const bool branch_taken_0x1eb590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB590u;
        // 0x1eb594: 0x26301b90  addiu       $s0, $s1, 0x1B90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 7056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb590) {
            ctx->pc = 0x1EB608u;
            goto label_1eb608;
        }
    }
    ctx->pc = 0x1EB598u;
label_1eb598:
    // 0x1eb598: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1eb598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1eb59c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1eb59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1eb5a0: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1eb5a0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1eb5a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1eb5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1eb5a8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EB5A8u;
    {
        const bool branch_taken_0x1eb5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5A8u;
        // 0x1eb5ac: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5a8) {
            ctx->pc = 0x1EB604u;
            goto label_1eb604;
        }
    }
    ctx->pc = 0x1EB5B0u;
    // 0x1eb5b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5b4: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1eb5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1eb5b8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1eb5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eb5bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb5c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5c4: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1eb5c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_1eb5c8:
    // 0x1eb5c8: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1EB5C8u;
    SET_GPR_U32(ctx, 31, 0x1EB5D0u);
    ctx->pc = 0x1EB5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB5C8u;
    // 0x1eb5cc: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1EB5C8u, 0x1EB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB5D0u;
label_1eb5d0:
    // 0x1eb5d0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1eb5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1eb5d4:
    // 0x1eb5d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb5d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EB5D8u;
    {
        const bool branch_taken_0x1eb5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5D8u;
        // 0x1eb5dc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5d8) {
            ctx->pc = 0x1EB604u;
            goto label_1eb604;
        }
    }
    ctx->pc = 0x1EB5E0u;
label_1eb5e0:
    // 0x1eb5e0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1eb5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1eb5e4: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1eb5e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1eb5e8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1eb5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1eb5ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eb5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eb5f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB5F0u;
    {
        const bool branch_taken_0x1eb5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5F0u;
        // 0x1eb5f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5f0) {
            ctx->pc = 0x1EB604u;
            goto label_1eb604;
        }
    }
    ctx->pc = 0x1EB5F8u;
    // 0x1eb5f8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1eb5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1eb5fc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1eb5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1eb600: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1eb600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1eb604:
    // 0x1eb604: 0x26301b90  addiu       $s0, $s1, 0x1B90
    ctx->pc = 0x1eb604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 7056));
label_1eb608:
    // 0x1eb608: 0xc07b7e0  jal         func_1EDF80
    ctx->pc = 0x1EB608u;
    SET_GPR_U32(ctx, 31, 0x1EB610u);
    ctx->pc = 0x1EB60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB608u;
    // 0x1eb60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDF80u, 0x1EB608u, 0x1EB610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB610u;
label_1eb610:
    // 0x1eb610: 0xc07b7f6  jal         func_1EDFD8
    ctx->pc = 0x1EB610u;
    SET_GPR_U32(ctx, 31, 0x1EB618u);
    ctx->pc = 0x1EB614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB610u;
    // 0x1eb614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDFD8u, 0x1EB610u, 0x1EB618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB618u;
label_1eb618:
    // 0x1eb618: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1eb618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eb61c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1eb61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1eb620: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1eb620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eb624: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1eb624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eb628: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1eb628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eb62c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1eb62cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eb630: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1eb630u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eb634: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1eb634u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eb638: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1eb638u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb63c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eb63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb640: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB640u;
        // 0x1eb644: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB648u;
}
