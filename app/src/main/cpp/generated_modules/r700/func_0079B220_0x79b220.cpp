#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_0079B220
// Address: 0x79b220 - 0x79b378
void func_0079B220_0x79b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B220_0x79b220");
#endif

    switch (ctx->pc) {
        case 0x79b220u: goto label_79b220;
        case 0x79b224u: goto label_79b224;
        case 0x79b228u: goto label_79b228;
        case 0x79b22cu: goto label_79b22c;
        case 0x79b230u: goto label_79b230;
        case 0x79b234u: goto label_79b234;
        case 0x79b238u: goto label_79b238;
        case 0x79b23cu: goto label_79b23c;
        case 0x79b240u: goto label_79b240;
        case 0x79b244u: goto label_79b244;
        case 0x79b248u: goto label_79b248;
        case 0x79b24cu: goto label_79b24c;
        case 0x79b250u: goto label_79b250;
        case 0x79b254u: goto label_79b254;
        case 0x79b258u: goto label_79b258;
        case 0x79b25cu: goto label_79b25c;
        case 0x79b260u: goto label_79b260;
        case 0x79b264u: goto label_79b264;
        case 0x79b268u: goto label_79b268;
        case 0x79b26cu: goto label_79b26c;
        case 0x79b270u: goto label_79b270;
        case 0x79b274u: goto label_79b274;
        case 0x79b278u: goto label_79b278;
        case 0x79b27cu: goto label_79b27c;
        case 0x79b280u: goto label_79b280;
        case 0x79b284u: goto label_79b284;
        case 0x79b288u: goto label_79b288;
        case 0x79b28cu: goto label_79b28c;
        case 0x79b290u: goto label_79b290;
        case 0x79b294u: goto label_79b294;
        case 0x79b298u: goto label_79b298;
        case 0x79b29cu: goto label_79b29c;
        case 0x79b2a0u: goto label_79b2a0;
        case 0x79b2a4u: goto label_79b2a4;
        case 0x79b2a8u: goto label_79b2a8;
        case 0x79b2acu: goto label_79b2ac;
        case 0x79b2b0u: goto label_79b2b0;
        case 0x79b2b4u: goto label_79b2b4;
        case 0x79b2b8u: goto label_79b2b8;
        case 0x79b2bcu: goto label_79b2bc;
        case 0x79b2c0u: goto label_79b2c0;
        case 0x79b2c4u: goto label_79b2c4;
        case 0x79b2c8u: goto label_79b2c8;
        case 0x79b2ccu: goto label_79b2cc;
        case 0x79b2d0u: goto label_79b2d0;
        case 0x79b2d4u: goto label_79b2d4;
        case 0x79b2d8u: goto label_79b2d8;
        case 0x79b2dcu: goto label_79b2dc;
        case 0x79b2e0u: goto label_79b2e0;
        case 0x79b2e4u: goto label_79b2e4;
        case 0x79b2e8u: goto label_79b2e8;
        case 0x79b2ecu: goto label_79b2ec;
        case 0x79b2f0u: goto label_79b2f0;
        case 0x79b2f4u: goto label_79b2f4;
        case 0x79b2f8u: goto label_79b2f8;
        case 0x79b2fcu: goto label_79b2fc;
        case 0x79b300u: goto label_79b300;
        case 0x79b304u: goto label_79b304;
        case 0x79b308u: goto label_79b308;
        case 0x79b30cu: goto label_79b30c;
        case 0x79b310u: goto label_79b310;
        case 0x79b314u: goto label_79b314;
        case 0x79b318u: goto label_79b318;
        case 0x79b31cu: goto label_79b31c;
        case 0x79b320u: goto label_79b320;
        case 0x79b324u: goto label_79b324;
        case 0x79b328u: goto label_79b328;
        case 0x79b32cu: goto label_79b32c;
        case 0x79b330u: goto label_79b330;
        case 0x79b334u: goto label_79b334;
        case 0x79b338u: goto label_79b338;
        case 0x79b33cu: goto label_79b33c;
        case 0x79b340u: goto label_79b340;
        case 0x79b344u: goto label_79b344;
        case 0x79b348u: goto label_79b348;
        case 0x79b34cu: goto label_79b34c;
        case 0x79b350u: goto label_79b350;
        case 0x79b354u: goto label_79b354;
        case 0x79b358u: goto label_79b358;
        case 0x79b35cu: goto label_79b35c;
        case 0x79b360u: goto label_79b360;
        case 0x79b364u: goto label_79b364;
        case 0x79b368u: goto label_79b368;
        case 0x79b36cu: goto label_79b36c;
        case 0x79b370u: goto label_79b370;
        case 0x79b374u: goto label_79b374;
        default: break;
    }

    ctx->pc = 0x79b220u;

label_79b220:
    // 0x79b220: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79b224:
    // 0x79b224: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_79b228:
    // 0x79b228: 0x2442c300  addiu       $v0, $v0, -0x3D00
    ctx->pc = 0x79b228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951680));
label_79b22c:
    // 0x79b22c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x79b22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_79b230:
    // 0x79b230: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x79b230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_79b234:
    // 0x79b234: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79b234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_79b238:
    // 0x79b238: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_79b23c:
    // 0x79b23c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x79b23cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_79b240:
    // 0x79b240: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79b240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_79b244:
    // 0x79b244: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x79b244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_79b248:
    // 0x79b248: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b24c:
    // 0x79b24c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x79b24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79b250:
    // 0x79b250: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x79b250u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_79b254:
    // 0x79b254: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79b254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b258:
    // 0x79b258: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x79b258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79b25c:
    // 0x79b25c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79b260:
    // 0x79b260: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x79b260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79b264:
    // 0x79b264: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x79b264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_79b268:
    // 0x79b268: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x79b268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_79b26c:
    // 0x79b26c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79b270:
    // 0x79b270: 0x0  nop
    ctx->pc = 0x79b270u;
    // NOP
label_79b274:
    // 0x79b274: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79b274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_79b278:
    // 0x79b278: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x79b278u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_79b27c:
    // 0x79b27c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x79b27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_79b280:
    // 0x79b280: 0xc0a4230  jal         func_2908C0
label_79b284:
    if (ctx->pc == 0x79B284u) {
        ctx->pc = 0x79B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B280u;
        // 0x79b284: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B288u;
        goto label_79b288;
    }
    ctx->pc = 0x79B280u;
    SET_GPR_U32(ctx, 31, 0x79B288u);
    ctx->pc = 0x79B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B280u;
    // 0x79b284: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x79B280u, 0x79B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B288u;
label_79b288:
    // 0x79b288: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79b28c:
    // 0x79b28c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x79b28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79b290:
    // 0x79b290: 0x24506ab0  addiu       $s0, $v0, 0x6AB0
    ctx->pc = 0x79b290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
label_79b294:
    // 0x79b294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b298:
    // 0x79b298: 0xc0a54e0  jal         func_295380
label_79b29c:
    if (ctx->pc == 0x79B29Cu) {
        ctx->pc = 0x79B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B298u;
        // 0x79b29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2A0u;
        goto label_79b2a0;
    }
    ctx->pc = 0x79B298u;
    SET_GPR_U32(ctx, 31, 0x79B2A0u);
    ctx->pc = 0x79B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B298u;
    // 0x79b29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x79B298u, 0x79B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2A0u;
label_79b2a0:
    // 0x79b2a0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x79b2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_79b2a4:
    // 0x79b2a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79b2a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_79b2a8:
    // 0x79b2a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79b2ac:
    // 0x79b2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79b2b0:
    // 0x79b2b0: 0xc0a5500  jal         func_295400
label_79b2b4:
    if (ctx->pc == 0x79B2B4u) {
        ctx->pc = 0x79B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2B0u;
        // 0x79b2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2B8u;
        goto label_79b2b8;
    }
    ctx->pc = 0x79B2B0u;
    SET_GPR_U32(ctx, 31, 0x79B2B8u);
    ctx->pc = 0x79B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2B0u;
    // 0x79b2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295400u, 0x79B2B0u, 0x79B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2B8u;
label_79b2b8:
    // 0x79b2b8: 0xc0b6dac  jal         func_2DB6B0
label_79b2bc:
    if (ctx->pc == 0x79B2BCu) {
        ctx->pc = 0x79B2C0u;
        goto label_79b2c0;
    }
    ctx->pc = 0x79B2B8u;
    SET_GPR_U32(ctx, 31, 0x79B2C0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B2B8u, 0x79B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2C0u;
label_79b2c0:
    // 0x79b2c0: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79b2c4:
    // 0x79b2c4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x79b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79b2c8:
    // 0x79b2c8: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x79b2c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_79b2cc:
    // 0x79b2cc: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x79b2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_79b2d0:
    // 0x79b2d0: 0xc0f809  jalr        $a2
label_79b2d4:
    if (ctx->pc == 0x79B2D4u) {
        ctx->pc = 0x79B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2D0u;
        // 0x79b2d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2D8u;
        goto label_79b2d8;
    }
    ctx->pc = 0x79B2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79B2D8u);
        ctx->pc = 0x79B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2D0u;
        // 0x79b2d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2D0u, 0x79B2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B2D8u;
label_79b2d8:
    // 0x79b2d8: 0xc0b6dac  jal         func_2DB6B0
label_79b2dc:
    if (ctx->pc == 0x79B2DCu) {
        ctx->pc = 0x79B2E0u;
        goto label_79b2e0;
    }
    ctx->pc = 0x79B2D8u;
    SET_GPR_U32(ctx, 31, 0x79B2E0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B2D8u, 0x79B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2E0u;
label_79b2e0:
    // 0x79b2e0: 0xc0b6dac  jal         func_2DB6B0
label_79b2e4:
    if (ctx->pc == 0x79B2E4u) {
        ctx->pc = 0x79B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2E0u;
        // 0x79b2e4: 0xe4540104  swc1        $f20, 0x104($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2E8u;
        goto label_79b2e8;
    }
    ctx->pc = 0x79B2E0u;
    SET_GPR_U32(ctx, 31, 0x79B2E8u);
    ctx->pc = 0x79B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2E0u;
    // 0x79b2e4: 0xe4540104  swc1        $f20, 0x104($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B2E0u, 0x79B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2E8u;
label_79b2e8:
    // 0x79b2e8: 0xc04b106  jal         func_12C418
label_79b2ec:
    if (ctx->pc == 0x79B2ECu) {
        ctx->pc = 0x79B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2E8u;
        // 0x79b2ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2F0u;
        goto label_79b2f0;
    }
    ctx->pc = 0x79B2E8u;
    SET_GPR_U32(ctx, 31, 0x79B2F0u);
    ctx->pc = 0x79B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2E8u;
    // 0x79b2ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x79B2E8u, 0x79B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2F0u;
label_79b2f0:
    // 0x79b2f0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79b2f4:
    // 0x79b2f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_79b2f8:
    // 0x79b2f8: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x79b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_79b2fc:
    // 0x79b2fc: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x79b2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
label_79b300:
    // 0x79b300: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x79b300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_79b304:
    // 0x79b304: 0x8c821f20  lw          $v0, 0x1F20($a0)
    ctx->pc = 0x79b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7968)));
label_79b308:
    // 0x79b308: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79b308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79b30c:
    // 0x79b30c: 0xac821f20  sw          $v0, 0x1F20($a0)
    ctx->pc = 0x79b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7968), GPR_U32(ctx, 2));
label_79b310:
    // 0x79b310: 0x8ca37a8c  lw          $v1, 0x7A8C($a1)
    ctx->pc = 0x79b310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31372)));
label_79b314:
    // 0x79b314: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x79b314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_79b318:
    // 0x79b318: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_79b31c:
    if (ctx->pc == 0x79B31Cu) {
        ctx->pc = 0x79B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B318u;
        // 0x79b31c: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B320u;
        goto label_79b320;
    }
    ctx->pc = 0x79B318u;
    {
        const bool branch_taken_0x79b318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b318) {
            ctx->pc = 0x79B31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B318u;
            // 0x79b31c: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B33Cu;
            goto label_79b33c;
        }
    }
    ctx->pc = 0x79B320u;
label_79b320:
    // 0x79b320: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79b324:
    // 0x79b324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b328:
    // 0x79b328: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
label_79b32c:
    // 0x79b32c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b330:
    // 0x79b330: 0xc0b016c  jal         func_2C05B0
label_79b334:
    if (ctx->pc == 0x79B334u) {
        ctx->pc = 0x79B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B330u;
        // 0x79b334: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B338u;
        goto label_79b338;
    }
    ctx->pc = 0x79B330u;
    SET_GPR_U32(ctx, 31, 0x79B338u);
    ctx->pc = 0x79B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B330u;
    // 0x79b334: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79B330u, 0x79B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B338u;
label_79b338:
    // 0x79b338: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79b338u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79b33c:
    // 0x79b33c: 0xc0a54b4  jal         func_2952D0
label_79b340:
    if (ctx->pc == 0x79B340u) {
        ctx->pc = 0x79B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B33Cu;
        // 0x79b340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B344u;
        goto label_79b344;
    }
    ctx->pc = 0x79B33Cu;
    SET_GPR_U32(ctx, 31, 0x79B344u);
    ctx->pc = 0x79B340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B33Cu;
    // 0x79b340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B33Cu, 0x79B344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B344u;
label_79b344:
    // 0x79b344: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b348:
    // 0x79b348: 0xc0a578e  jal         func_295E38
label_79b34c:
    if (ctx->pc == 0x79B34Cu) {
        ctx->pc = 0x79B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B348u;
        // 0x79b34c: 0x240509c2  addiu       $a1, $zero, 0x9C2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2498));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B350u;
        goto label_79b350;
    }
    ctx->pc = 0x79B348u;
    SET_GPR_U32(ctx, 31, 0x79B350u);
    ctx->pc = 0x79B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B348u;
    // 0x79b34c: 0x240509c2  addiu       $a1, $zero, 0x9C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2498));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79B348u, 0x79B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B350u;
label_79b350:
    // 0x79b350: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79b354:
    // 0x79b354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b358:
    // 0x79b358: 0xc0b42ae  jal         func_2D0AB8
label_79b35c:
    if (ctx->pc == 0x79B35Cu) {
        ctx->pc = 0x79B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B358u;
        // 0x79b35c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B360u;
        goto label_79b360;
    }
    ctx->pc = 0x79B358u;
    SET_GPR_U32(ctx, 31, 0x79B360u);
    ctx->pc = 0x79B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B358u;
    // 0x79b35c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79B358u, 0x79B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B360u;
label_79b360:
    // 0x79b360: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79b360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79b364:
    // 0x79b364: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79b364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_79b368:
    // 0x79b368: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x79b368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79b36c:
    // 0x79b36c: 0x3e00008  jr          $ra
label_79b370:
    if (ctx->pc == 0x79B370u) {
        ctx->pc = 0x79B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B36Cu;
        // 0x79b370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B374u;
        goto label_79b374;
    }
    ctx->pc = 0x79B36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B36Cu;
        // 0x79b370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B374u;
label_79b374:
    // 0x79b374: 0x0  nop
    ctx->pc = 0x79b374u;
    // NOP
    ctx->pc = 0x79b378u;
}
} // namespace gh_r700
