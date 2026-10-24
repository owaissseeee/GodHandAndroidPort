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

// Function: Slot1_payoutLine4
// Address: 0x1e28d0 - 0x1e2ac8
void Slot1_payoutLine4_0x1e28d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot1_payoutLine4_0x1e28d0");
#endif

    switch (ctx->pc) {
        case 0x1e2940u: goto label_1e2940;
        case 0x1e2950u: goto label_1e2950;
        case 0x1e29b8u: goto label_1e29b8;
        case 0x1e29d8u: goto label_1e29d8;
        case 0x1e2a04u: goto label_1e2a04;
        case 0x1e2a38u: goto label_1e2a38;
        case 0x1e2a54u: goto label_1e2a54;
        case 0x1e2a68u: goto label_1e2a68;
        case 0x1e2a78u: goto label_1e2a78;
        case 0x1e2a94u: goto label_1e2a94;
        default: break;
    }

    ctx->pc = 0x1e28d0u;

    // 0x1e28d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e28d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e28d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e28d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e28d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e28dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e28dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e28e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e28e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e28e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e28e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e28e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e28e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e28ec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e28f0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E28F0u;
    {
        const bool branch_taken_0x1e28f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28F0u;
        // 0x1e28f4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28f0) {
            ctx->pc = 0x1E2960u;
            goto label_1e2960;
        }
    }
    ctx->pc = 0x1E28F8u;
    // 0x1e28f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E28F8u;
    {
        const bool branch_taken_0x1e28f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e28f8) {
            ctx->pc = 0x1E28FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E28F8u;
            // 0x1e28fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2910u;
            goto label_1e2910;
        }
    }
    ctx->pc = 0x1E2900u;
    // 0x1e2900: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2900u;
    {
        const bool branch_taken_0x1e2900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2900u;
        // 0x1e2904: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2900) {
            ctx->pc = 0x1E2928u;
            goto label_1e2928;
        }
    }
    ctx->pc = 0x1E2908u;
    // 0x1e2908: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1E2908u;
    {
        const bool branch_taken_0x1e2908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2908u;
        // 0x1e290c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2908) {
            ctx->pc = 0x1E2AB0u;
            goto label_1e2ab0;
        }
    }
    ctx->pc = 0x1E2910u;
label_1e2910:
    // 0x1e2910: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E2910u;
    {
        const bool branch_taken_0x1e2910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2910u;
        // 0x1e2914: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2910) {
            ctx->pc = 0x1E29ECu;
            goto label_1e29ec;
        }
    }
    ctx->pc = 0x1E2918u;
    // 0x1e2918: 0x50620062  beql        $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1E2918u;
    {
        const bool branch_taken_0x1e2918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e2918) {
            ctx->pc = 0x1E291Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2918u;
            // 0x1e291c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2AA4u;
            goto label_1e2aa4;
        }
    }
    ctx->pc = 0x1E2920u;
    // 0x1e2920: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1E2920u;
    {
        const bool branch_taken_0x1e2920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2920u;
        // 0x1e2924: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2920) {
            ctx->pc = 0x1E2AB0u;
            goto label_1e2ab0;
        }
    }
    ctx->pc = 0x1E2928u;
label_1e2928:
    // 0x1e2928: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e2928u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e292c: 0xae020490  sw          $v0, 0x490($s0)
    ctx->pc = 0x1e292cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 2));
    // 0x1e2930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2934: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2938: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E2938u;
    SET_GPR_U32(ctx, 31, 0x1E2940u);
    ctx->pc = 0x1E293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2938u;
    // 0x1e293c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E2938u, 0x1E2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2940u;
label_1e2940:
    // 0x1e2940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e2944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2948: 0xc078f5e  jal         func_1E3D78
    ctx->pc = 0x1E2948u;
    SET_GPR_U32(ctx, 31, 0x1E2950u);
    ctx->pc = 0x1E294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2948u;
    // 0x1e294c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3D78u, 0x1E2948u, 0x1E2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2950u;
label_1e2950:
    // 0x1e2950: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e2950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2954: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e2954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e2958: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1E2958u;
    {
        const bool branch_taken_0x1e2958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2958u;
        // 0x1e295c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2958) {
            ctx->pc = 0x1E2A7Cu;
            goto label_1e2a7c;
        }
    }
    ctx->pc = 0x1E2960u;
label_1e2960:
    // 0x1e2960: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e2960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e2964: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2964u;
    {
        const bool branch_taken_0x1e2964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2964u;
        // 0x1e2968: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2964) {
            ctx->pc = 0x1E2978u;
            goto label_1e2978;
        }
    }
    ctx->pc = 0x1E296Cu;
    // 0x1e296c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e296cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2970u;
    {
        const bool branch_taken_0x1e2970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2970u;
        // 0x1e2974: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2970) {
            ctx->pc = 0x1E297Cu;
            goto label_1e297c;
        }
    }
    ctx->pc = 0x1E2978u;
label_1e2978:
    // 0x1e2978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e297c:
    // 0x1e297c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e297cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2980: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1E2980u;
    {
        const bool branch_taken_0x1e2980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2980u;
        // 0x1e2984: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2980) {
            ctx->pc = 0x1E2AACu;
            goto label_1e2aac;
        }
    }
    ctx->pc = 0x1E2988u;
    // 0x1e2988: 0x8e0303d8  lw          $v1, 0x3D8($s0)
    ctx->pc = 0x1e2988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 984)));
    // 0x1e298c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e298cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e2990: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e2990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e2994: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e2994u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e2998: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E2998u;
    {
        const bool branch_taken_0x1e2998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2998) {
            ctx->pc = 0x1E299Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2998u;
            // 0x1e299c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E29A0u;
            goto label_1e29a0;
        }
    }
    ctx->pc = 0x1E29A0u;
label_1e29a0:
    // 0x1e29a0: 0x1812  mflo        $v1
    ctx->pc = 0x1e29a0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e29a4: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1e29a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1e29a8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1e29a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e29ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e29acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29b0: 0xc07a392  jal         func_1E8E48
    ctx->pc = 0x1E29B0u;
    SET_GPR_U32(ctx, 31, 0x1E29B8u);
    ctx->pc = 0x1E29B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E29B0u;
    // 0x1e29b4: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E48u, 0x1E29B0u, 0x1E29B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E29B8u;
label_1e29b8:
    // 0x1e29b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e29b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e29bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e29bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e29c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e29c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e29c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e29c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e29c8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e29c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e29ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29d0: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E29D0u;
    SET_GPR_U32(ctx, 31, 0x1E29D8u);
    ctx->pc = 0x1E29D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E29D0u;
    // 0x1e29d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E29D0u, 0x1E29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E29D8u;
label_1e29d8:
    // 0x1e29d8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e29d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e29dc: 0xae0204c8  sw          $v0, 0x4C8($s0)
    ctx->pc = 0x1e29dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 2));
    // 0x1e29e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e29e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e29e4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E29E4u;
    {
        const bool branch_taken_0x1e29e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29E4u;
        // 0x1e29e8: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29e4) {
            ctx->pc = 0x1E2AACu;
            goto label_1e2aac;
        }
    }
    ctx->pc = 0x1E29ECu;
label_1e29ec:
    // 0x1e29ec: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e29f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E29F0u;
    {
        const bool branch_taken_0x1e29f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29F0u;
        // 0x1e29f4: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29f0) {
            ctx->pc = 0x1E2A28u;
            goto label_1e2a28;
        }
    }
    ctx->pc = 0x1E29F8u;
    // 0x1e29f8: 0x26329b70  addiu       $s2, $s1, -0x6490
    ctx->pc = 0x1e29f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x1e29fc: 0xc07ea38  jal         func_1FA8E0
    ctx->pc = 0x1E29FCu;
    SET_GPR_U32(ctx, 31, 0x1E2A04u);
    ctx->pc = 0x1E2A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E29FCu;
    // 0x1e2a00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA8E0u, 0x1E29FCu, 0x1E2A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A04u;
label_1e2a04:
    // 0x1e2a04: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2A04u;
    {
        const bool branch_taken_0x1e2a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2a04) {
            ctx->pc = 0x1E2A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2A04u;
            // 0x1e2a08: 0x8e0504c8  lw          $a1, 0x4C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2A2Cu;
            goto label_1e2a2c;
        }
    }
    ctx->pc = 0x1E2A0Cu;
    // 0x1e2a0c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e2a10: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e2a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e2a14: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e2a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e2a18: 0xdc437650  ld          $v1, 0x7650($v0)
    ctx->pc = 0x1e2a18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30288)));
    // 0x1e2a1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e2a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e2a20: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2A20u;
    {
        const bool branch_taken_0x1e2a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2a20) {
            ctx->pc = 0x1E2A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2A20u;
            // 0x1e2a24: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2A88u;
            goto label_1e2a88;
        }
    }
    ctx->pc = 0x1E2A28u;
label_1e2a28:
    // 0x1e2a28: 0x8e0504c8  lw          $a1, 0x4C8($s0)
    ctx->pc = 0x1e2a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
label_1e2a2c:
    // 0x1e2a2c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e2a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e2a30: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1E2A30u;
    SET_GPR_U32(ctx, 31, 0x1E2A38u);
    ctx->pc = 0x1E2A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A30u;
    // 0x1e2a34: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1E2A30u, 0x1E2A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A38u;
label_1e2a38:
    // 0x1e2a38: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1e2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1e2a3c: 0x26249b70  addiu       $a0, $s1, -0x6490
    ctx->pc = 0x1e2a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x1e2a40: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x1e2a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e2a44: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1e2a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e2a48: 0x2812  mflo        $a1
    ctx->pc = 0x1e2a48u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1e2a4c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E2A4Cu;
    SET_GPR_U32(ctx, 31, 0x1E2A54u);
    ctx->pc = 0x1E2A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A4Cu;
    // 0x1e2a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E2A4Cu, 0x1E2A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A54u;
label_1e2a54:
    // 0x1e2a54: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e2a54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e2a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a60: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E2A60u;
    SET_GPR_U32(ctx, 31, 0x1E2A68u);
    ctx->pc = 0x1E2A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A60u;
    // 0x1e2a64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E2A60u, 0x1E2A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A68u;
label_1e2a68:
    // 0x1e2a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e2a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a70: 0xc078f5e  jal         func_1E3D78
    ctx->pc = 0x1E2A70u;
    SET_GPR_U32(ctx, 31, 0x1E2A78u);
    ctx->pc = 0x1E2A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A70u;
    // 0x1e2a74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3D78u, 0x1E2A70u, 0x1E2A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A78u;
label_1e2a78:
    // 0x1e2a78: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e2a7c:
    // 0x1e2a7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2a80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E2A80u;
    {
        const bool branch_taken_0x1e2a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A80u;
        // 0x1e2a84: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a80) {
            ctx->pc = 0x1E2AACu;
            goto label_1e2aac;
        }
    }
    ctx->pc = 0x1E2A88u;
label_1e2a88:
    // 0x1e2a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a8c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E2A8Cu;
    SET_GPR_U32(ctx, 31, 0x1E2A94u);
    ctx->pc = 0x1E2A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A8Cu;
    // 0x1e2a90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E2A8Cu, 0x1E2A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A94u;
label_1e2a94:
    // 0x1e2a94: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e2a98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e2a9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2A9Cu;
    {
        const bool branch_taken_0x1e2a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A9Cu;
        // 0x1e2aa0: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a9c) {
            ctx->pc = 0x1E2AACu;
            goto label_1e2aac;
        }
    }
    ctx->pc = 0x1E2AA4u;
label_1e2aa4:
    // 0x1e2aa4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e2aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e2aa8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e2aac:
    // 0x1e2aac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e2aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2ab0:
    // 0x1e2ab0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e2ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2ab4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2ab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ABCu;
        // 0x1e2ac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2AC4u;
    // 0x1e2ac4: 0x0  nop
    ctx->pc = 0x1e2ac4u;
    // NOP
    ctx->pc = 0x1e2ac8u;
}
