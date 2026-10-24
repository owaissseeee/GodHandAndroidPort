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

// Function: func_0011E1E0
// Address: 0x11e1e0 - 0x11e748
void func_0011E1E0_0x11e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011E1E0_0x11e1e0");
#endif

    switch (ctx->pc) {
        case 0x11e250u: goto label_11e250;
        case 0x11e25cu: goto label_11e25c;
        case 0x11e2a0u: goto label_11e2a0;
        case 0x11e2a8u: goto label_11e2a8;
        case 0x11e380u: goto label_11e380;
        case 0x11e390u: goto label_11e390;
        case 0x11e410u: goto label_11e410;
        case 0x11e478u: goto label_11e478;
        case 0x11e490u: goto label_11e490;
        case 0x11e4b8u: goto label_11e4b8;
        case 0x11e4c0u: goto label_11e4c0;
        case 0x11e4d4u: goto label_11e4d4;
        case 0x11e4f8u: goto label_11e4f8;
        case 0x11e504u: goto label_11e504;
        case 0x11e538u: goto label_11e538;
        case 0x11e560u: goto label_11e560;
        case 0x11e56cu: goto label_11e56c;
        case 0x11e588u: goto label_11e588;
        case 0x11e5a8u: goto label_11e5a8;
        case 0x11e5bcu: goto label_11e5bc;
        case 0x11e5c4u: goto label_11e5c4;
        case 0x11e5e4u: goto label_11e5e4;
        case 0x11e624u: goto label_11e624;
        case 0x11e630u: goto label_11e630;
        case 0x11e668u: goto label_11e668;
        case 0x11e690u: goto label_11e690;
        case 0x11e69cu: goto label_11e69c;
        case 0x11e6d8u: goto label_11e6d8;
        case 0x11e6e0u: goto label_11e6e0;
        case 0x11e6ecu: goto label_11e6ec;
        case 0x11e720u: goto label_11e720;
        default: break;
    }

    ctx->pc = 0x11e1e0u;

    // 0x11e1e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x11e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x11e1e4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x11e1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x11e1e8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x11e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x11e1ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e1f0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x11e1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x11e1f4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x11e1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x11e1f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11e1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11e1fc: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x11e1fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x11e200: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x11e200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x11e204: 0x8e330694  lw          $s3, 0x694($s1)
    ctx->pc = 0x11e204u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11e208: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x11e208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11e20c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x11e20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11e210: 0x8e2615f4  lw          $a2, 0x15F4($s1)
    ctx->pc = 0x11e210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x11e214: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11e214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11e218: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11e21c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11e220: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11e220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11e224: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e228: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x11e228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x11e22c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11e230: 0xae2615f4  sw          $a2, 0x15F4($s1)
    ctx->pc = 0x11e230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 6));
    // 0x11e234: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11e234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11e238: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x11e238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x11e23c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11e23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11e240: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e248: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11E248u;
    SET_GPR_U32(ctx, 31, 0x11E250u);
    ctx->pc = 0x11E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E248u;
    // 0x11e24c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11E248u, 0x11E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E250u;
label_11e250:
    // 0x11e250: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11e250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11e254: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11E254u;
    SET_GPR_U32(ctx, 31, 0x11E25Cu);
    ctx->pc = 0x11E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E254u;
    // 0x11e258: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11E254u, 0x11E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E25Cu;
label_11e25c:
    // 0x11e25c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11e25cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11e260: 0x10700093  beq         $v1, $s0, . + 4 + (0x93 << 2)
    ctx->pc = 0x11E260u;
    {
        const bool branch_taken_0x11e260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x11E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E260u;
        // 0x11e264: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e260) {
            ctx->pc = 0x11E4B0u;
            goto label_11e4b0;
        }
    }
    ctx->pc = 0x11E268u;
    // 0x11e268: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E268u;
    {
        const bool branch_taken_0x11e268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e268) {
            ctx->pc = 0x11E26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E268u;
            // 0x11e26c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E280u;
            goto label_11e280;
        }
    }
    ctx->pc = 0x11E270u;
    // 0x11e270: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E270u;
    {
        const bool branch_taken_0x11e270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E270u;
        // 0x11e274: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e270) {
            ctx->pc = 0x11E298u;
            goto label_11e298;
        }
    }
    ctx->pc = 0x11E278u;
    // 0x11e278: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x11E278u;
    {
        const bool branch_taken_0x11e278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E278u;
        // 0x11e27c: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e278) {
            ctx->pc = 0x11E728u;
            goto label_11e728;
        }
    }
    ctx->pc = 0x11E280u;
label_11e280:
    // 0x11e280: 0x106200bc  beq         $v1, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x11E280u;
    {
        const bool branch_taken_0x11e280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E280u;
        // 0x11e284: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e280) {
            ctx->pc = 0x11E574u;
            goto label_11e574;
        }
    }
    ctx->pc = 0x11E288u;
    // 0x11e288: 0x106200ca  beq         $v1, $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x11E288u;
    {
        const bool branch_taken_0x11e288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E288u;
        // 0x11e28c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e288) {
            ctx->pc = 0x11E5B4u;
            goto label_11e5b4;
        }
    }
    ctx->pc = 0x11E290u;
    // 0x11e290: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x11E290u;
    {
        const bool branch_taken_0x11e290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E290u;
        // 0x11e294: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e290) {
            ctx->pc = 0x11E728u;
            goto label_11e728;
        }
    }
    ctx->pc = 0x11E298u;
label_11e298:
    // 0x11e298: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11E298u;
    SET_GPR_U32(ctx, 31, 0x11E2A0u);
    ctx->pc = 0x11E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E298u;
    // 0x11e29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11E298u, 0x11E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2A0u;
label_11e2a0:
    // 0x11e2a0: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11E2A0u;
    SET_GPR_U32(ctx, 31, 0x11E2A8u);
    ctx->pc = 0x11E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E2A0u;
    // 0x11e2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11E2A0u, 0x11E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2A8u;
label_11e2a8:
    // 0x11e2a8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x11e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x11e2ac: 0x24030303  addiu       $v1, $zero, 0x303
    ctx->pc = 0x11e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x11e2b0: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x11e2b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x11e2b4: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E2B4u;
    {
        const bool branch_taken_0x11e2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x11E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2B4u;
        // 0x11e2b8: 0x28820304  slti        $v0, $a0, 0x304 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)772) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2b4) {
            ctx->pc = 0x11E30Cu;
            goto label_11e30c;
        }
    }
    ctx->pc = 0x11E2BCu;
    // 0x11e2bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E2BCu;
    {
        const bool branch_taken_0x11e2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2BCu;
        // 0x11e2c0: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2bc) {
            ctx->pc = 0x11E2D4u;
            goto label_11e2d4;
        }
    }
    ctx->pc = 0x11E2C4u;
    // 0x11e2c4: 0x50820022  beql        $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11E2C4u;
    {
        const bool branch_taken_0x11e2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e2c4) {
            ctx->pc = 0x11E2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E2C4u;
            // 0x11e2c8: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E350u;
            goto label_11e350;
        }
    }
    ctx->pc = 0x11E2CCu;
    // 0x11e2cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11E2CCu;
    {
        const bool branch_taken_0x11e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2CCu;
        // 0x11e2d0: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2cc) {
            ctx->pc = 0x11E2E4u;
            goto label_11e2e4;
        }
    }
    ctx->pc = 0x11E2D4u;
label_11e2d4:
    // 0x11e2d4: 0x24020804  addiu       $v0, $zero, 0x804
    ctx->pc = 0x11e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
    // 0x11e2d8: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11E2D8u;
    {
        const bool branch_taken_0x11e2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2D8u;
        // 0x11e2dc: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2d8) {
            ctx->pc = 0x11E338u;
            goto label_11e338;
        }
    }
    ctx->pc = 0x11E2E0u;
    // 0x11e2e0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_11e2e4:
    // 0x11e2e4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x11e2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11e2e8: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11E2E8u;
    {
        const bool branch_taken_0x11e2e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e2e8) {
            ctx->pc = 0x11E35Cu;
            goto label_11e35c;
        }
    }
    ctx->pc = 0x11E2F0u;
    // 0x11e2f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11e2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e2f4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x11e2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11e2f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x11e2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e2fc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x11e2fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x11e300: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11e300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e304: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11E304u;
    {
        const bool branch_taken_0x11e304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E304u;
        // 0x11e308: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e304) {
            ctx->pc = 0x11E35Cu;
            goto label_11e35c;
        }
    }
    ctx->pc = 0x11E30Cu;
label_11e30c:
    // 0x11e30c: 0x3c0142ae  lui         $at, 0x42AE
    ctx->pc = 0x11e30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17070 << 16));
    // 0x11e310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e314: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x11e314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11e318: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11e318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11e31c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e320: 0x3c01c21c  lui         $at, 0xC21C
    ctx->pc = 0x11e320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49692 << 16));
    // 0x11e324: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11e324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e328: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x11e328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11e32c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x11e32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x11e330: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11E330u;
    {
        const bool branch_taken_0x11e330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E330u;
        // 0x11e334: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e330) {
            ctx->pc = 0x11E35Cu;
            goto label_11e35c;
        }
    }
    ctx->pc = 0x11E338u;
label_11e338:
    // 0x11e338: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x11e338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
    // 0x11e33c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x11e33cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x11e340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e344: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x11e344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x11e348: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E348u;
    {
        const bool branch_taken_0x11e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E348u;
        // 0x11e34c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e348) {
            ctx->pc = 0x11E358u;
            goto label_11e358;
        }
    }
    ctx->pc = 0x11E350u;
label_11e350:
    // 0x11e350: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x11e350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11e354: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x11e354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_11e358:
    // 0x11e358: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x11e358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_11e35c:
    // 0x11e35c: 0x3c01c033  lui         $at, 0xC033
    ctx->pc = 0x11e35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49203 << 16));
    // 0x11e360: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x11e360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x11e364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e368: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e36c: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x11e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11e370: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x11e370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11e374: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x11e374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x11e378: 0xc051e62  jal         func_147988
    ctx->pc = 0x11E378u;
    SET_GPR_U32(ctx, 31, 0x11E380u);
    ctx->pc = 0x11E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E378u;
    // 0x11e37c: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x11E378u, 0x11E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E380u;
label_11e380:
    // 0x11e380: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11e380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11e384: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11e384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e388: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x11E388u;
    SET_GPR_U32(ctx, 31, 0x11E390u);
    ctx->pc = 0x11E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E388u;
    // 0x11e38c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x11E388u, 0x11E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E390u;
label_11e390:
    // 0x11e390: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x11e390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11e394: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x11e394u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x11e398: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x11e398u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11e39c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e3a0: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e3a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e3a4: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x11e3a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11e3a8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11e3a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11e3ac: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e3b0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x11e3b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11e3b4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11e3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e3b8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11e3bc: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x11e3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11e3c0: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E3C0u;
    {
        const bool branch_taken_0x11e3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x11E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3C0u;
        // 0x11e3c4: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3c0) {
            ctx->pc = 0x11E3DCu;
            goto label_11e3dc;
        }
    }
    ctx->pc = 0x11E3C8u;
    // 0x11e3c8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x11e3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11e3cc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x11e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e3d0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11e3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11e3d4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x11e3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e3d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x11e3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_11e3dc:
    // 0x11e3dc: 0x3c01be13  lui         $at, 0xBE13
    ctx->pc = 0x11e3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48659 << 16));
    // 0x11e3e0: 0x3421f7cf  ori         $at, $at, 0xF7CF
    ctx->pc = 0x11e3e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63439);
    // 0x11e3e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e3e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e3e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3ec: 0x3c013f7c  lui         $at, 0x3F7C
    ctx->pc = 0x11e3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16252 << 16));
    // 0x11e3f0: 0x3421c63f  ori         $at, $at, 0xC63F
    ctx->pc = 0x11e3f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50751);
    // 0x11e3f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e3f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11e3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3fc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x11e3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11e400: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11e400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e404: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x11e404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11e408: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x11E408u;
    SET_GPR_U32(ctx, 31, 0x11E410u);
    ctx->pc = 0x11E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E408u;
    // 0x11e40c: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x11E408u, 0x11E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E410u;
label_11e410:
    // 0x11e410: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11e414: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11e414u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e418: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e41c: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e41cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e420: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x11e420u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11e424: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11e424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11e428: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e42c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x11e42cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11e430: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11e430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e434: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x11e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11e438: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E438u;
    {
        const bool branch_taken_0x11e438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x11E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E438u;
        // 0x11e43c: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e438) {
            ctx->pc = 0x11E454u;
            goto label_11e454;
        }
    }
    ctx->pc = 0x11E440u;
    // 0x11e440: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x11e440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11e444: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x11e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e448: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11e448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11e44c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x11e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e450: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x11e450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_11e454:
    // 0x11e454: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x11e454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e458: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11e458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11e45c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11e45cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11e460: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e464: 0x0  nop
    ctx->pc = 0x11e464u;
    // NOP
    // 0x11e468: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11e468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11e46c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11e46cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x11e470: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x11E470u;
    SET_GPR_U32(ctx, 31, 0x11E478u);
    ctx->pc = 0x11E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E470u;
    // 0x11e474: 0xe6600104  swc1        $f0, 0x104($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x11E470u, 0x11E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E478u;
label_11e478:
    // 0x11e478: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11e478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11e47c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11e47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e480: 0xe6600104  swc1        $f0, 0x104($s3)
    ctx->pc = 0x11e480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
    // 0x11e484: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x11e484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11e488: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11E488u;
    SET_GPR_U32(ctx, 31, 0x11E490u);
    ctx->pc = 0x11E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E488u;
    // 0x11e48c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11E488u, 0x11E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E490u;
label_11e490:
    // 0x11e490: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11e490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11e494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e498: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11e498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11e49c: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11e4a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11e4a4: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x11e4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x11e4a8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11e4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x11e4ac: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x11e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_11e4b0:
    // 0x11e4b0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11E4B0u;
    SET_GPR_U32(ctx, 31, 0x11E4B8u);
    ctx->pc = 0x11E4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4B0u;
    // 0x11e4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11E4B0u, 0x11E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4B8u;
label_11e4b8:
    // 0x11e4b8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11E4B8u;
    SET_GPR_U32(ctx, 31, 0x11E4C0u);
    ctx->pc = 0x11E4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4B8u;
    // 0x11e4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11E4B8u, 0x11E4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4C0u;
label_11e4c0:
    // 0x11e4c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E4C0u;
    {
        const bool branch_taken_0x11e4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4C0u;
        // 0x11e4c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4c0) {
            ctx->pc = 0x11E4E4u;
            goto label_11e4e4;
        }
    }
    ctx->pc = 0x11E4C8u;
    // 0x11e4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e4cc: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11E4CCu;
    SET_GPR_U32(ctx, 31, 0x11E4D4u);
    ctx->pc = 0x11E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4CCu;
    // 0x11e4d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11E4CCu, 0x11E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4D4u;
label_11e4d4:
    // 0x11e4d4: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11e4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11e4d8: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11e4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11e4dc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11e4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11e4e0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11e4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11e4e4:
    // 0x11e4e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e4e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11e4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11e4ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e4f0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11E4F0u;
    SET_GPR_U32(ctx, 31, 0x11E4F8u);
    ctx->pc = 0x11E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4F0u;
    // 0x11e4f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11E4F0u, 0x11E4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4F8u;
label_11e4f8:
    // 0x11e4f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11e4f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11e4fc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11E4FCu;
    SET_GPR_U32(ctx, 31, 0x11E504u);
    ctx->pc = 0x11E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4FCu;
    // 0x11e500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11E4FCu, 0x11E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E504u;
label_11e504:
    // 0x11e504: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11e504u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11e508: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11e508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11e50c: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x11E50Cu;
    {
        const bool branch_taken_0x11e50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E50Cu;
        // 0x11e510: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e50c) {
            ctx->pc = 0x11E724u;
            goto label_11e724;
        }
    }
    ctx->pc = 0x11E514u;
    // 0x11e514: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11e518: 0x54400083  bnel        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x11E518u;
    {
        const bool branch_taken_0x11e518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e518) {
            ctx->pc = 0x11E51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E518u;
            // 0x11e51c: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E728u;
            goto label_11e728;
        }
    }
    ctx->pc = 0x11E520u;
    // 0x11e520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e524: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11e524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11e528: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x11e528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x11e52c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11e530: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11E530u;
    SET_GPR_U32(ctx, 31, 0x11E538u);
    ctx->pc = 0x11E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E530u;
    // 0x11e534: 0x2405ff60  addiu       $a1, $zero, -0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11E530u, 0x11E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E538u;
label_11e538:
    // 0x11e538: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x11E538u;
    {
        const bool branch_taken_0x11e538 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E538u;
        // 0x11e53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e538) {
            ctx->pc = 0x11E564u;
            goto label_11e564;
        }
    }
    ctx->pc = 0x11E540u;
    // 0x11e540: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11e540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11e544: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e548: 0xc660076c  lwc1        $f0, 0x76C($s3)
    ctx->pc = 0x11e548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e54c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e54cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e550: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11e550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11e554: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11e554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11e558: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11E558u;
    SET_GPR_U32(ctx, 31, 0x11E560u);
    ctx->pc = 0x11E55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E558u;
    // 0x11e55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11E558u, 0x11E560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E560u;
label_11e560:
    // 0x11e560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e564:
    // 0x11e564: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11E564u;
    SET_GPR_U32(ctx, 31, 0x11E56Cu);
    ctx->pc = 0x11E568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E564u;
    // 0x11e568: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11E564u, 0x11E56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E56Cu;
label_11e56c:
    // 0x11e56c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x11E56Cu;
    {
        const bool branch_taken_0x11e56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E56Cu;
        // 0x11e570: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e56c) {
            ctx->pc = 0x11E724u;
            goto label_11e724;
        }
    }
    ctx->pc = 0x11E574u;
label_11e574:
    // 0x11e574: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11e574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11e578: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11e578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e57c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11e580: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11E580u;
    SET_GPR_U32(ctx, 31, 0x11E588u);
    ctx->pc = 0x11E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E580u;
    // 0x11e584: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11E580u, 0x11E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E588u;
label_11e588:
    // 0x11e588: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x11e588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11e58c: 0xae3015b0  sw          $s0, 0x15B0($s1)
    ctx->pc = 0x11e58cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 16));
    // 0x11e590: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x11e590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x11e594: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11e594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11e598: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11e598u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11e59c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11e5a0: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11E5A0u;
    SET_GPR_U32(ctx, 31, 0x11E5A8u);
    ctx->pc = 0x11E5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5A0u;
    // 0x11e5a4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11E5A0u, 0x11E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5A8u;
label_11e5a8:
    // 0x11e5a8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11e5a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11e5ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11e5b0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11e5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11e5b4:
    // 0x11e5b4: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11E5B4u;
    SET_GPR_U32(ctx, 31, 0x11E5BCu);
    ctx->pc = 0x11E5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5B4u;
    // 0x11e5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11E5B4u, 0x11E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5BCu;
label_11e5bc:
    // 0x11e5bc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11E5BCu;
    SET_GPR_U32(ctx, 31, 0x11E5C4u);
    ctx->pc = 0x11E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5BCu;
    // 0x11e5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11E5BCu, 0x11E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5C4u;
label_11e5c4:
    // 0x11e5c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E5C4u;
    {
        const bool branch_taken_0x11e5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e5c4) {
            ctx->pc = 0x11E610u;
            goto label_11e610;
        }
    }
    ctx->pc = 0x11E5CCu;
    // 0x11e5cc: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11e5ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11e5d0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E5D0u;
    {
        const bool branch_taken_0x11e5d0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5D0u;
        // 0x11e5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5d0) {
            ctx->pc = 0x11E600u;
            goto label_11e600;
        }
    }
    ctx->pc = 0x11E5D8u;
    // 0x11e5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5dc: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11E5DCu;
    SET_GPR_U32(ctx, 31, 0x11E5E4u);
    ctx->pc = 0x11E5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5DCu;
    // 0x11e5e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11E5DCu, 0x11E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5E4u;
label_11e5e4:
    // 0x11e5e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e5e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11e5ec: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11e5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11e5f0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11e5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11e5f4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11e5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11e5f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11E5F8u;
    {
        const bool branch_taken_0x11e5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5F8u;
        // 0x11e5fc: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5f8) {
            ctx->pc = 0x11E610u;
            goto label_11e610;
        }
    }
    ctx->pc = 0x11E600u;
label_11e600:
    // 0x11e600: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11e600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11e604: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11e604u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11e608: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11e60c: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11e60cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11e610:
    // 0x11e610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e614: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11e614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11e618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e61c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11E61Cu;
    SET_GPR_U32(ctx, 31, 0x11E624u);
    ctx->pc = 0x11E620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E61Cu;
    // 0x11e620: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11E61Cu, 0x11E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E624u;
label_11e624:
    // 0x11e624: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11e624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11e628: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11E628u;
    SET_GPR_U32(ctx, 31, 0x11E630u);
    ctx->pc = 0x11E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E628u;
    // 0x11e62c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11E628u, 0x11E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E630u;
label_11e630:
    // 0x11e630: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11e630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11e634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11e634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11e638: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x11E638u;
    {
        const bool branch_taken_0x11e638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E638u;
        // 0x11e63c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e638) {
            ctx->pc = 0x11E724u;
            goto label_11e724;
        }
    }
    ctx->pc = 0x11E640u;
    // 0x11e640: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11e640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11e644: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x11E644u;
    {
        const bool branch_taken_0x11e644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e644) {
            ctx->pc = 0x11E648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E644u;
            // 0x11e648: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E728u;
            goto label_11e728;
        }
    }
    ctx->pc = 0x11E64Cu;
    // 0x11e64c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x11e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x11e650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e654: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x11e654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x11e658: 0xae2315b4  sw          $v1, 0x15B4($s1)
    ctx->pc = 0x11e658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 3));
    // 0x11e65c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e660: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11E660u;
    SET_GPR_U32(ctx, 31, 0x11E668u);
    ctx->pc = 0x11E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E660u;
    // 0x11e664: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11E660u, 0x11E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E668u;
label_11e668:
    // 0x11e668: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x11E668u;
    {
        const bool branch_taken_0x11e668 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E668u;
        // 0x11e66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e668) {
            ctx->pc = 0x11E694u;
            goto label_11e694;
        }
    }
    ctx->pc = 0x11E670u;
    // 0x11e670: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x11e670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x11e674: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e678: 0xc660076c  lwc1        $f0, 0x76C($s3)
    ctx->pc = 0x11e678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e67c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e680: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11e680u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11e684: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11e684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11e688: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11E688u;
    SET_GPR_U32(ctx, 31, 0x11E690u);
    ctx->pc = 0x11E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E688u;
    // 0x11e68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11E688u, 0x11E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E690u;
label_11e690:
    // 0x11e690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e694:
    // 0x11e694: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11E694u;
    SET_GPR_U32(ctx, 31, 0x11E69Cu);
    ctx->pc = 0x11E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E694u;
    // 0x11e698: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11E694u, 0x11E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E69Cu;
label_11e69c:
    // 0x11e69c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11e69cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11e6a0: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11E6A0u;
    {
        const bool branch_taken_0x11e6a0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6A0u;
        // 0x11e6a4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6a0) {
            ctx->pc = 0x11E6FCu;
            goto label_11e6fc;
        }
    }
    ctx->pc = 0x11E6A8u;
    // 0x11e6a8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11e6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11e6ac: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11e6acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11e6b0: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11e6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11e6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6b8: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x11e6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x11e6bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11e6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11e6c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11e6c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11e6c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11e6ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6d0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11E6D0u;
    SET_GPR_U32(ctx, 31, 0x11E6D8u);
    ctx->pc = 0x11E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6D0u;
    // 0x11e6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11E6D0u, 0x11E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6D8u;
label_11e6d8:
    // 0x11e6d8: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11E6D8u;
    SET_GPR_U32(ctx, 31, 0x11E6E0u);
    ctx->pc = 0x11E6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6D8u;
    // 0x11e6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11E6D8u, 0x11E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6E0u;
label_11e6e0:
    // 0x11e6e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6e4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11E6E4u;
    SET_GPR_U32(ctx, 31, 0x11E6ECu);
    ctx->pc = 0x11E6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6E4u;
    // 0x11e6e8: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11E6E4u, 0x11E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6ECu;
label_11e6ec:
    // 0x11e6ec: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11e6ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11e6f0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11e6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11e6f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11E6F4u;
    {
        const bool branch_taken_0x11e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6F4u;
        // 0x11e6f8: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6f4) {
            ctx->pc = 0x11E720u;
            goto label_11e720;
        }
    }
    ctx->pc = 0x11E6FCu;
label_11e6fc:
    // 0x11e6fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11e6fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e700: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11e700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11e704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e708: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11e708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11e70c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11e70cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e710: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11e710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e714: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11e714u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e718: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11E718u;
    SET_GPR_U32(ctx, 31, 0x11E720u);
    ctx->pc = 0x11E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E718u;
    // 0x11e71c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11E718u, 0x11E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E720u;
label_11e720:
    // 0x11e720: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x11e720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_11e724:
    // 0x11e724: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x11e724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_11e728:
    // 0x11e728: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x11e728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11e72c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x11e72cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11e730: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x11e730u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11e734: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11e734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11e738: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x11e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e73c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E73Cu;
        // 0x11e740: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E744u;
    // 0x11e744: 0x0  nop
    ctx->pc = 0x11e744u;
    // NOP
    ctx->pc = 0x11e748u;
}
