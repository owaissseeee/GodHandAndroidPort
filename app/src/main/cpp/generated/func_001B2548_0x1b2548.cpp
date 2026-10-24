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

// Function: func_001B2548
// Address: 0x1b2548 - 0x1b2648
void func_001B2548_0x1b2548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B2548_0x1b2548");
#endif

    switch (ctx->pc) {
        case 0x1b255cu: goto label_1b255c;
        case 0x1b2570u: goto label_1b2570;
        case 0x1b25bcu: goto label_1b25bc;
        case 0x1b2620u: goto label_1b2620;
        case 0x1b2630u: goto label_1b2630;
        default: break;
    }

    ctx->pc = 0x1b2548u;

    // 0x1b2548: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b254c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b2550: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b2554: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1B2554u;
    SET_GPR_U32(ctx, 31, 0x1B255Cu);
    ctx->pc = 0x1B2558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2554u;
    // 0x1b2558: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B2554u, 0x1B255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B255Cu;
label_1b255c:
    // 0x1b255c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b255cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b2560: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2564: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1b2564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1b2568: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1B2568u;
    SET_GPR_U32(ctx, 31, 0x1B2570u);
    ctx->pc = 0x1B256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2568u;
    // 0x1b256c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1B2568u, 0x1B2570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2570u;
label_1b2570:
    // 0x1b2570: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B2570u;
    {
        const bool branch_taken_0x1b2570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2570u;
        // 0x1b2574: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2570) {
            ctx->pc = 0x1B25CCu;
            goto label_1b25cc;
        }
    }
    ctx->pc = 0x1B2578u;
    // 0x1b2578: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1b2578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1b257c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B257Cu;
    {
        const bool branch_taken_0x1b257c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B257Cu;
        // 0x1b2580: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b257c) {
            ctx->pc = 0x1B2590u;
            goto label_1b2590;
        }
    }
    ctx->pc = 0x1B2584u;
    // 0x1b2584: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b2584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1b2588: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2588u;
    {
        const bool branch_taken_0x1b2588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2588u;
        // 0x1b258c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2588) {
            ctx->pc = 0x1B2594u;
            goto label_1b2594;
        }
    }
    ctx->pc = 0x1B2590u;
label_1b2590:
    // 0x1b2590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2594:
    // 0x1b2594: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1b2594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1b2598: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1b2598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1b259c: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x1b259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x1b25a0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1b25a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b25a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b25a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD880u));
    // 0x1b25a8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b25a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b25ac: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x1b25acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x1b25b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b25b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b25b4: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1B25B4u;
    SET_GPR_U32(ctx, 31, 0x1B25BCu);
    ctx->pc = 0x1B25B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25B4u;
    // 0x1b25b8: 0x8e040600  lw          $a0, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1B25B4u, 0x1B25BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25BCu;
label_1b25bc:
    // 0x1b25bc: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1b25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b25c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b25c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b25c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1b25c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b25cc:
    // 0x1b25cc: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x1b25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1b25d0: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1b25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1b25d4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1b25d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1b25d8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b25d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1b25dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b25dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b25e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b25e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25e4: 0x3c013d13  lui         $at, 0x3D13
    ctx->pc = 0x1b25e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15635 << 16));
    // 0x1b25e8: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x1b25e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
    // 0x1b25ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b25ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b25f0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1b25f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1b25f4: 0xae000624  sw          $zero, 0x624($s0)
    ctx->pc = 0x1b25f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1572), GPR_U32(ctx, 0));
    // 0x1b25f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b25f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25fc: 0xa200062c  sb          $zero, 0x62C($s0)
    ctx->pc = 0x1b25fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1580), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2604: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1b2604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2608: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1b2608u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b260c: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x1b260cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
    // 0x1b2610: 0xe6010620  swc1        $f1, 0x620($s0)
    ctx->pc = 0x1b2610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x1b2614: 0xe6000628  swc1        $f0, 0x628($s0)
    ctx->pc = 0x1b2614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1576), bits); }
    // 0x1b2618: 0xc0528e6  jal         func_14A398
    ctx->pc = 0x1B2618u;
    SET_GPR_U32(ctx, 31, 0x1B2620u);
    ctx->pc = 0x1B261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2618u;
    // 0x1b261c: 0xa6030548  sh          $v1, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A398u, 0x1B2618u, 0x1B2620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2620u;
label_1b2620:
    // 0x1b2620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2624: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b2624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b2628: 0xc0528e6  jal         func_14A398
    ctx->pc = 0x1B2628u;
    SET_GPR_U32(ctx, 31, 0x1B2630u);
    ctx->pc = 0x1B262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2628u;
    // 0x1b262c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A398u, 0x1B2628u, 0x1B2630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2630u;
label_1b2630:
    // 0x1b2630: 0xa200062d  sb          $zero, 0x62D($s0)
    ctx->pc = 0x1b2630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1581), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2638: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b2638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b263c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b263cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2640: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2640u;
        // 0x1b2644: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2648u;
}
