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

// Function: func_0010FF80
// Address: 0x10ff80 - 0x1101a8
void func_0010FF80_0x10ff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010FF80_0x10ff80");
#endif

    switch (ctx->pc) {
        case 0x10ffccu: goto label_10ffcc;
        case 0x10ffd4u: goto label_10ffd4;
        case 0x10ffe4u: goto label_10ffe4;
        case 0x10ffecu: goto label_10ffec;
        case 0x11003cu: goto label_11003c;
        case 0x110114u: goto label_110114;
        case 0x110140u: goto label_110140;
        case 0x11015cu: goto label_11015c;
        case 0x110174u: goto label_110174;
        case 0x11018cu: goto label_11018c;
        default: break;
    }

    ctx->pc = 0x10ff80u;

    // 0x10ff80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10ff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10ff84: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10ff84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10ff88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ff88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff8c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10ff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10ff90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10ff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10ff94: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x10ff94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x10ff98: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10ff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10ff9c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x10ff9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10ffa0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FFA0u;
    {
        const bool branch_taken_0x10ffa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFA0u;
        // 0x10ffa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffa0) {
            ctx->pc = 0x10FFB8u;
            goto label_10ffb8;
        }
    }
    ctx->pc = 0x10FFA8u;
    // 0x10ffa8: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x10FFA8u;
    {
        const bool branch_taken_0x10ffa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10ffa8) {
            ctx->pc = 0x110090u;
            goto label_110090;
        }
    }
    ctx->pc = 0x10FFB0u;
    // 0x10ffb0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x10FFB0u;
    {
        const bool branch_taken_0x10ffb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFB0u;
        // 0x10ffb4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffb0) {
            ctx->pc = 0x110160u;
            goto label_110160;
        }
    }
    ctx->pc = 0x10FFB8u;
label_10ffb8:
    // 0x10ffb8: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x10ffb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10ffbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ffbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffc0: 0xa60005e2  sh          $zero, 0x5E2($s0)
    ctx->pc = 0x10ffc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x10ffc4: 0xc049396  jal         func_124E58
    ctx->pc = 0x10FFC4u;
    SET_GPR_U32(ctx, 31, 0x10FFCCu);
    ctx->pc = 0x10FFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFC4u;
    // 0x10ffc8: 0x26110580  addiu       $s1, $s0, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x10FFC4u, 0x10FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFCCu;
label_10ffcc:
    // 0x10ffcc: 0xc0499dc  jal         func_126770
    ctx->pc = 0x10FFCCu;
    SET_GPR_U32(ctx, 31, 0x10FFD4u);
    ctx->pc = 0x10FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFCCu;
    // 0x10ffd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x10FFCCu, 0x10FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFD4u;
label_10ffd4:
    // 0x10ffd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ffd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffdc: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x10FFDCu;
    SET_GPR_U32(ctx, 31, 0x10FFE4u);
    ctx->pc = 0x10FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFDCu;
    // 0x10ffe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10FFDCu, 0x10FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFE4u;
label_10ffe4:
    // 0x10ffe4: 0xc04a8b8  jal         func_12A2E0
    ctx->pc = 0x10FFE4u;
    SET_GPR_U32(ctx, 31, 0x10FFECu);
    ctx->pc = 0x10FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFE4u;
    // 0x10ffe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A2E0u, 0x10FFE4u, 0x10FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFECu;
label_10ffec:
    // 0x10ffec: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10FFECu;
    {
        const bool branch_taken_0x10ffec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x10ffec) {
            ctx->pc = 0x10FFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FFECu;
            // 0x10fff0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110010u;
            goto label_110010;
        }
    }
    ctx->pc = 0x10FFF4u;
    // 0x10fff4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x10fff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10fff8: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x10fff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x10fffc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x10fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x110000: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x110000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x110004: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x110004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x110008: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x110008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x11000c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_110010:
    // 0x110010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110014: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x110014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x110018: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x110018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11001c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x11001cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110020: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x110020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x110024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110028: 0x8c4606dc  lw          $a2, 0x6DC($v0)
    ctx->pc = 0x110028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
    // 0x11002c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11002cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110030: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x110030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x110034: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x110034u;
    SET_GPR_U32(ctx, 31, 0x11003Cu);
    ctx->pc = 0x110038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110034u;
    // 0x110038: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x110034u, 0x11003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11003Cu;
label_11003c:
    // 0x11003c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x11003cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x110040: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x110040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x110044: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x110044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x110048: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x110048u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11004c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11004cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110050: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x110050u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x110054: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x110054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x110058: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x110058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11005c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11005cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110060: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x110060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x110064: 0x26020590  addiu       $v0, $s0, 0x590
    ctx->pc = 0x110064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x110068: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x110068u;
    {
        const bool branch_taken_0x110068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x11006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110068u;
        // 0x11006c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x110068) {
            ctx->pc = 0x110084u;
            goto label_110084;
        }
    }
    ctx->pc = 0x110070u;
    // 0x110070: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x110070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x110074: 0xe6000590  swc1        $f0, 0x590($s0)
    ctx->pc = 0x110074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1424), bits); }
    // 0x110078: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x110078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11007c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x11007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x110080: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x110080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_110084:
    // 0x110084: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x110084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x110088: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11008c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11008cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_110090:
    // 0x110090: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x110090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x110094: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x110094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x110098: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x110098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11009c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x11009cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1100a0: 0x26020590  addiu       $v0, $s0, 0x590
    ctx->pc = 0x1100a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x1100a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1100a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1100a8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1100a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1100ac: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1100acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1100b0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1100b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1100b4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1100b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1100b8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1100b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1100bc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1100bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1100c0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1100c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1100c4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1100c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1100c8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1100c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1100cc: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1100CCu;
    {
        const bool branch_taken_0x1100cc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1100D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100CCu;
        // 0x1100d0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100cc) {
            ctx->pc = 0x1100E8u;
            goto label_1100e8;
        }
    }
    ctx->pc = 0x1100D4u;
    // 0x1100d4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1100d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1100d8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1100d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1100dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1100dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1100e0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1100e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1100e4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1100e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1100e8:
    // 0x1100e8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1100e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1100ec: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1100ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1100f0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1100f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1100f4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1100f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1100f8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1100f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1100fc: 0xda040590  lqc2        $vf4, 0x590($s0)
    ctx->pc = 0x1100fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x110100: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x110100u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110104: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x110104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x110108: 0xfa040590  sqc2        $vf4, 0x590($s0)
    ctx->pc = 0x110108u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11010c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11010Cu;
    SET_GPR_U32(ctx, 31, 0x110114u);
    ctx->pc = 0x110110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11010Cu;
    // 0x110110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11010Cu, 0x110114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110114u;
label_110114:
    // 0x110114: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110114u;
    {
        const bool branch_taken_0x110114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110114) {
            ctx->pc = 0x11012Cu;
            goto label_11012c;
        }
    }
    ctx->pc = 0x11011Cu;
    // 0x11011c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x11011cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x110120: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x110120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x110124: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x110124u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x110128: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x110128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_11012c:
    // 0x11012c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x110130: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x110130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x110134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110138: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x110138u;
    SET_GPR_U32(ctx, 31, 0x110140u);
    ctx->pc = 0x11013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110138u;
    // 0x11013c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x110138u, 0x110140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110140u;
label_110140:
    // 0x110140: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x110140u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x110144: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x110144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x110148: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x110148u;
    {
        const bool branch_taken_0x110148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110148) {
            ctx->pc = 0x11014Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110148u;
            // 0x11014c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110160u;
            goto label_110160;
        }
    }
    ctx->pc = 0x110150u;
    // 0x110150: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x110150u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x110154: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x110154u;
    SET_GPR_U32(ctx, 31, 0x11015Cu);
    ctx->pc = 0x110158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110154u;
    // 0x110158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x110154u, 0x11015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11015Cu;
label_11015c:
    // 0x11015c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x11015cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_110160:
    // 0x110160: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x110160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x110164: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x110164u;
    {
        const bool branch_taken_0x110164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110164) {
            ctx->pc = 0x110168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110164u;
            // 0x110168: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110178u;
            goto label_110178;
        }
    }
    ctx->pc = 0x11016Cu;
    // 0x11016c: 0xc04a8f0  jal         func_12A3C0
    ctx->pc = 0x11016Cu;
    SET_GPR_U32(ctx, 31, 0x110174u);
    ctx->pc = 0x110170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11016Cu;
    // 0x110170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3C0u, 0x11016Cu, 0x110174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110174u;
label_110174:
    // 0x110174: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x110174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_110178:
    // 0x110178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11017c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11017cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110180: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x110180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x110184: 0xc048e4e  jal         func_123938
    ctx->pc = 0x110184u;
    SET_GPR_U32(ctx, 31, 0x11018Cu);
    ctx->pc = 0x110188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110184u;
    // 0x110188: 0xa60203ac  sh          $v0, 0x3AC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x110184u, 0x11018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11018Cu;
label_11018c:
    // 0x11018c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11018cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x110190: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x110190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110194: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x110194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110198: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x110198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11019c: 0x3e00008  jr          $ra
    ctx->pc = 0x11019Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1101A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11019Cu;
        // 0x1101a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11019Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1101A4u;
    // 0x1101a4: 0x0  nop
    ctx->pc = 0x1101a4u;
    // NOP
    ctx->pc = 0x1101a8u;
}
