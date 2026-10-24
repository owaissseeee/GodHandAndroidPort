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

// Function: func_002E25B0
// Address: 0x2e25b0 - 0x2e2800
void func_002E25B0_0x2e25b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E25B0_0x2e25b0");
#endif

    switch (ctx->pc) {
        case 0x2e26a8u: goto label_2e26a8;
        case 0x2e272cu: goto label_2e272c;
        case 0x2e2770u: goto label_2e2770;
        case 0x2e279cu: goto label_2e279c;
        default: break;
    }

    ctx->pc = 0x2e25b0u;

    // 0x2e25b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e25b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e25b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e25b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e25b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e25b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e25bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e25bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e25c0: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2e25c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2e25c4: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x2e25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
    // 0x2e25c8: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x2e25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
    // 0x2e25cc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2e25ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e25d0: 0x8c640170  lw          $a0, 0x170($v1)
    ctx->pc = 0x2e25d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 368)));
    // 0x2e25d4: 0xae0402c8  sw          $a0, 0x2C8($s0)
    ctx->pc = 0x2e25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 4));
    // 0x2e25d8: 0x90650174  lbu         $a1, 0x174($v1)
    ctx->pc = 0x2e25d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 372)));
    // 0x2e25dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E25DCu;
    {
        const bool branch_taken_0x2e25dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25DCu;
        // 0x2e25e0: 0xa20502d4  sb          $a1, 0x2D4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 724), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25dc) {
            ctx->pc = 0x2E25F0u;
            goto label_2e25f0;
        }
    }
    ctx->pc = 0x2E25E4u;
    // 0x2e25e4: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x2e25e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e25e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E25E8u;
    {
        const bool branch_taken_0x2e25e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25E8u;
        // 0x2e25ec: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25e8) {
            ctx->pc = 0x2E25F8u;
            goto label_2e25f8;
        }
    }
    ctx->pc = 0x2E25F0u;
label_2e25f0:
    // 0x2e25f0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2E25F0u;
    {
        const bool branch_taken_0x2e25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25F0u;
        // 0x2e25f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25f0) {
            ctx->pc = 0x2E27F0u;
            goto label_2e27f0;
        }
    }
    ctx->pc = 0x2E25F8u;
label_2e25f8:
    // 0x2e25f8: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2E25F8u;
    {
        const bool branch_taken_0x2e25f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25F8u;
        // 0x2e25fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25f8) {
            ctx->pc = 0x2E27F0u;
            goto label_2e27f0;
        }
    }
    ctx->pc = 0x2E2600u;
    // 0x2e2600: 0xc461013c  lwc1        $f1, 0x13C($v1)
    ctx->pc = 0x2e2600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2604: 0x260202b0  addiu       $v0, $s0, 0x2B0
    ctx->pc = 0x2e2604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x2e2608: 0xc4620140  lwc1        $f2, 0x140($v1)
    ctx->pc = 0x2e2608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e260c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e260cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2614: 0xe60102b0  swc1        $f1, 0x2B0($s0)
    ctx->pc = 0x2e2614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
    // 0x2e2618: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2e2618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e261c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2e261cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e2620: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e2620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e2624: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e2624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e2628: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e2628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e262c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e262cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2630: 0xda0402b0  lqc2        $vf4, 0x2B0($s0)
    ctx->pc = 0x2e2630u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2e2634: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e2634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e2638: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e2638u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e263c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e263cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e2640: 0xfa0402b0  sqc2        $vf4, 0x2B0($s0)
    ctx->pc = 0x2e2640u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 688), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e2644: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2e2644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2e2648: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e2648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e264c: 0x9082018c  lbu         $v0, 0x18C($a0)
    ctx->pc = 0x2e264cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x2e2650: 0xa20202c0  sb          $v0, 0x2C0($s0)
    ctx->pc = 0x2e2650u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 704), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2654: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e2654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e2658: 0x9083018d  lbu         $v1, 0x18D($a0)
    ctx->pc = 0x2e2658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 397)));
    // 0x2e265c: 0x23e03  sra         $a3, $v0, 24
    ctx->pc = 0x2e265cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2e2660: 0xa20302c1  sb          $v1, 0x2C1($s0)
    ctx->pc = 0x2e2660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 705), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2664: 0x9082018e  lbu         $v0, 0x18E($a0)
    ctx->pc = 0x2e2664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 398)));
    // 0x2e2668: 0xa20202c2  sb          $v0, 0x2C2($s0)
    ctx->pc = 0x2e2668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 706), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e266c: 0x9083018f  lbu         $v1, 0x18F($a0)
    ctx->pc = 0x2e266cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 399)));
    // 0x2e2670: 0xa20302c3  sb          $v1, 0x2C3($s0)
    ctx->pc = 0x2e2670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 707), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2674: 0x90820190  lbu         $v0, 0x190($a0)
    ctx->pc = 0x2e2674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x2e2678: 0xa20202d5  sb          $v0, 0x2D5($s0)
    ctx->pc = 0x2e2678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 725), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e267c: 0x90830191  lbu         $v1, 0x191($a0)
    ctx->pc = 0x2e267cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 401)));
    // 0x2e2680: 0xa20302d6  sb          $v1, 0x2D6($s0)
    ctx->pc = 0x2e2680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 726), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2684: 0x90820192  lbu         $v0, 0x192($a0)
    ctx->pc = 0x2e2684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 402)));
    // 0x2e2688: 0x10e50018  beq         $a3, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E2688u;
    {
        const bool branch_taken_0x2e2688 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2688u;
        // 0x2e268c: 0xa20202d7  sb          $v0, 0x2D7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 727), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2688) {
            ctx->pc = 0x2E26ECu;
            goto label_2e26ec;
        }
    }
    ctx->pc = 0x2E2690u;
    // 0x2e2690: 0x920602c1  lbu         $a2, 0x2C1($s0)
    ctx->pc = 0x2e2690u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 705)));
    // 0x2e2694: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2e2694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2e2698: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x2e2698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x2e269c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2e269cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e26a0: 0xc0c180c  jal         func_306030
    ctx->pc = 0x2E26A0u;
    SET_GPR_U32(ctx, 31, 0x2E26A8u);
    ctx->pc = 0x2E26A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E26A0u;
    // 0x2e26a4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306030u, 0x2E26A0u, 0x2E26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E26A8u;
label_2e26a8:
    // 0x2e26a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E26A8u;
    {
        const bool branch_taken_0x2e26a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e26a8) {
            ctx->pc = 0x2E26ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E26A8u;
            // 0x2e26ac: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E26C8u;
            goto label_2e26c8;
        }
    }
    ctx->pc = 0x2E26B0u;
    // 0x2e26b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e26b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e26b4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e26b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e26b8: 0x808602c0  lb          $a2, 0x2C0($a0)
    ctx->pc = 0x2e26b8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x2e26bc: 0x24a5e138  addiu       $a1, $a1, -0x1EC8
    ctx->pc = 0x2e26bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959416));
    // 0x2e26c0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2E26C0u;
    {
        const bool branch_taken_0x2e26c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26C0u;
        // 0x2e26c4: 0x908702c1  lbu         $a3, 0x2C1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 705)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26c0) {
            ctx->pc = 0x2E2768u;
            goto label_2e2768;
        }
    }
    ctx->pc = 0x2E26C8u;
label_2e26c8:
    // 0x2e26c8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2e26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2e26cc: 0x34425345  ori         $v0, $v0, 0x5345
    ctx->pc = 0x2e26ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21317);
    // 0x2e26d0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E26D0u;
    {
        const bool branch_taken_0x2e26d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26D0u;
        // 0x2e26d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26d0) {
            ctx->pc = 0x2E270Cu;
            goto label_2e270c;
        }
    }
    ctx->pc = 0x2E26D8u;
    // 0x2e26d8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e26d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e26dc: 0x808602c0  lb          $a2, 0x2C0($a0)
    ctx->pc = 0x2e26dcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x2e26e0: 0x24a5e160  addiu       $a1, $a1, -0x1EA0
    ctx->pc = 0x2e26e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959456));
    // 0x2e26e4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E26E4u;
    {
        const bool branch_taken_0x2e26e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26E4u;
        // 0x2e26e8: 0x908702c1  lbu         $a3, 0x2C1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 705)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26e4) {
            ctx->pc = 0x2E2768u;
            goto label_2e2768;
        }
    }
    ctx->pc = 0x2E26ECu;
label_2e26ec:
    // 0x2e26ec: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2e26ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e26f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E26F0u;
    {
        const bool branch_taken_0x2e26f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e26f0) {
            ctx->pc = 0x2E26F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E26F0u;
            // 0x2e26f4: 0x820502c2  lb          $a1, 0x2C2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 706)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2710u;
            goto label_2e2710;
        }
    }
    ctx->pc = 0x2E26F8u;
    // 0x2e26f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e26f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e26fc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e26fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e2700: 0x908602d6  lbu         $a2, 0x2D6($a0)
    ctx->pc = 0x2e2700u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 726)));
    // 0x2e2704: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2E2704u;
    {
        const bool branch_taken_0x2e2704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2704u;
        // 0x2e2708: 0x24a5e198  addiu       $a1, $a1, -0x1E68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2704) {
            ctx->pc = 0x2E2794u;
            goto label_2e2794;
        }
    }
    ctx->pc = 0x2E270Cu;
label_2e270c:
    // 0x2e270c: 0x820502c2  lb          $a1, 0x2C2($s0)
    ctx->pc = 0x2e270cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 706)));
label_2e2710:
    // 0x2e2710: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e2710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2714: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E2714u;
    {
        const bool branch_taken_0x2e2714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E2718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2714u;
        // 0x2e2718: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2714) {
            ctx->pc = 0x2E2778u;
            goto label_2e2778;
        }
    }
    ctx->pc = 0x2E271Cu;
    // 0x2e271c: 0x920602c3  lbu         $a2, 0x2C3($s0)
    ctx->pc = 0x2e271cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 707)));
    // 0x2e2720: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x2e2720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x2e2724: 0xc0c180c  jal         func_306030
    ctx->pc = 0x2E2724u;
    SET_GPR_U32(ctx, 31, 0x2E272Cu);
    ctx->pc = 0x2E2728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2724u;
    // 0x2e2728: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306030u, 0x2E2724u, 0x2E272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E272Cu;
label_2e272c:
    // 0x2e272c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E272Cu;
    {
        const bool branch_taken_0x2e272c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e272c) {
            ctx->pc = 0x2E2730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E272Cu;
            // 0x2e2730: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2748u;
            goto label_2e2748;
        }
    }
    ctx->pc = 0x2E2734u;
    // 0x2e2734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2738: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e2738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e273c: 0x808602c2  lb          $a2, 0x2C2($a0)
    ctx->pc = 0x2e273cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 706)));
    // 0x2e2740: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2740u;
    {
        const bool branch_taken_0x2e2740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2740u;
        // 0x2e2744: 0x24a5e1b8  addiu       $a1, $a1, -0x1E48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2740) {
            ctx->pc = 0x2E2764u;
            goto label_2e2764;
        }
    }
    ctx->pc = 0x2E2748u;
label_2e2748:
    // 0x2e2748: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2e2748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2e274c: 0x34425345  ori         $v0, $v0, 0x5345
    ctx->pc = 0x2e274cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21317);
    // 0x2e2750: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E2750u;
    {
        const bool branch_taken_0x2e2750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2750u;
        // 0x2e2754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2750) {
            ctx->pc = 0x2E27A4u;
            goto label_2e27a4;
        }
    }
    ctx->pc = 0x2E2758u;
    // 0x2e2758: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e2758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e275c: 0x808602c2  lb          $a2, 0x2C2($a0)
    ctx->pc = 0x2e275cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 706)));
    // 0x2e2760: 0x24a5e1e0  addiu       $a1, $a1, -0x1E20
    ctx->pc = 0x2e2760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959584));
label_2e2764:
    // 0x2e2764: 0x908702c3  lbu         $a3, 0x2C3($a0)
    ctx->pc = 0x2e2764u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 707)));
label_2e2768:
    // 0x2e2768: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2E2768u;
    SET_GPR_U32(ctx, 31, 0x2E2770u);
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2E2768u, 0x2E2770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2770u;
label_2e2770:
    // 0x2e2770: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E2770u;
    {
        const bool branch_taken_0x2e2770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2770u;
        // 0x2e2774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2770) {
            ctx->pc = 0x2E27F0u;
            goto label_2e27f0;
        }
    }
    ctx->pc = 0x2E2778u;
label_2e2778:
    // 0x2e2778: 0x920202d7  lbu         $v0, 0x2D7($s0)
    ctx->pc = 0x2e2778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 727)));
    // 0x2e277c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2E277Cu;
    {
        const bool branch_taken_0x2e277c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e277c) {
            ctx->pc = 0x2E2780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E277Cu;
            // 0x2e2780: 0x86020238  lh          $v0, 0x238($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E27A8u;
            goto label_2e27a8;
        }
    }
    ctx->pc = 0x2E2784u;
    // 0x2e2784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2788: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e2788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e278c: 0x908602d7  lbu         $a2, 0x2D7($a0)
    ctx->pc = 0x2e278cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 727)));
    // 0x2e2790: 0x24a5e218  addiu       $a1, $a1, -0x1DE8
    ctx->pc = 0x2e2790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959640));
label_2e2794:
    // 0x2e2794: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2E2794u;
    SET_GPR_U32(ctx, 31, 0x2E279Cu);
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2E2794u, 0x2E279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E279Cu;
label_2e279c:
    // 0x2e279c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E279Cu;
    {
        const bool branch_taken_0x2e279c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E279Cu;
        // 0x2e27a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e279c) {
            ctx->pc = 0x2E27F0u;
            goto label_2e27f0;
        }
    }
    ctx->pc = 0x2E27A4u;
label_2e27a4:
    // 0x2e27a4: 0x86020238  lh          $v0, 0x238($s0)
    ctx->pc = 0x2e27a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 568)));
label_2e27a8:
    // 0x2e27a8: 0x5c40000b  bgtzl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E27A8u;
    {
        const bool branch_taken_0x2e27a8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2e27a8) {
            ctx->pc = 0x2E27ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E27A8u;
            // 0x2e27ac: 0x920202d5  lbu         $v0, 0x2D5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 725)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E27D8u;
            goto label_2e27d8;
        }
    }
    ctx->pc = 0x2E27B0u;
    // 0x2e27b0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2e27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2e27b4: 0x90430293  lbu         $v1, 0x293($v0)
    ctx->pc = 0x2e27b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 659)));
    // 0x2e27b8: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E27B8u;
    {
        const bool branch_taken_0x2e27b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e27b8) {
            ctx->pc = 0x2E27BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E27B8u;
            // 0x2e27bc: 0x920202d5  lbu         $v0, 0x2D5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 725)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E27D8u;
            goto label_2e27d8;
        }
    }
    ctx->pc = 0x2E27C0u;
    // 0x2e27c0: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x2e27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x2e27c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2e27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e27c8: 0xa6030238  sh          $v1, 0x238($s0)
    ctx->pc = 0x2e27c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 568), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e27cc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e27ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e27d0: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x2e27d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
    // 0x2e27d4: 0x920202d5  lbu         $v0, 0x2D5($s0)
    ctx->pc = 0x2e27d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 725)));
label_2e27d8:
    // 0x2e27d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E27D8u;
    {
        const bool branch_taken_0x2e27d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27D8u;
        // 0x2e27dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27d8) {
            ctx->pc = 0x2E27F0u;
            goto label_2e27f0;
        }
    }
    ctx->pc = 0x2E27E0u;
    // 0x2e27e0: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x2e27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x2e27e4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e27e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e27e8: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x2e27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
    // 0x2e27ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e27f0:
    // 0x2e27f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e27f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e27f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e27f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e27f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E27F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27F8u;
        // 0x2e27fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E27F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2800u;
}
