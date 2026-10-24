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

// Function: BlackJack_UpdateHitMenu
// Address: 0x1d2888 - 0x1d2a28
void BlackJack_UpdateHitMenu_0x1d2888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateHitMenu_0x1d2888");
#endif

    switch (ctx->pc) {
        case 0x1d28c0u: goto label_1d28c0;
        case 0x1d28ccu: goto label_1d28cc;
        case 0x1d290cu: goto label_1d290c;
        case 0x1d2918u: goto label_1d2918;
        case 0x1d293cu: goto label_1d293c;
        case 0x1d297cu: goto label_1d297c;
        case 0x1d2988u: goto label_1d2988;
        case 0x1d29acu: goto label_1d29ac;
        case 0x1d29ccu: goto label_1d29cc;
        case 0x1d29d8u: goto label_1d29d8;
        case 0x1d2a0cu: goto label_1d2a0c;
        default: break;
    }

    ctx->pc = 0x1d2888u;

    // 0x1d2888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d288c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2898: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d2898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d289c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D289Cu;
    {
        const bool branch_taken_0x1d289c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D289Cu;
        // 0x1d28a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d289c) {
            ctx->pc = 0x1D28B4u;
            goto label_1d28b4;
        }
    }
    ctx->pc = 0x1D28A4u;
    // 0x1d28a4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D28A4u;
    {
        const bool branch_taken_0x1d28a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28A4u;
        // 0x1d28a8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28a4) {
            ctx->pc = 0x1D28DCu;
            goto label_1d28dc;
        }
    }
    ctx->pc = 0x1D28ACu;
    // 0x1d28ac: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1D28ACu;
    {
        const bool branch_taken_0x1d28ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28ACu;
        // 0x1d28b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28ac) {
            ctx->pc = 0x1D2A1Cu;
            goto label_1d2a1c;
        }
    }
    ctx->pc = 0x1D28B4u;
label_1d28b4:
    // 0x1d28b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28b8: 0xc075584  jal         func_1D5610
    ctx->pc = 0x1D28B8u;
    SET_GPR_U32(ctx, 31, 0x1D28C0u);
    ctx->pc = 0x1D28BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28B8u;
    // 0x1d28bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5610u, 0x1D28B8u, 0x1D28C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28C0u;
label_1d28c0:
    // 0x1d28c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28c4: 0xc075690  jal         func_1D5A40
    ctx->pc = 0x1D28C4u;
    SET_GPR_U32(ctx, 31, 0x1D28CCu);
    ctx->pc = 0x1D28C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28C4u;
    // 0x1d28c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5A40u, 0x1D28C4u, 0x1D28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28CCu;
label_1d28cc:
    // 0x1d28cc: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d28d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d28d4: 0xae021808  sw          $v0, 0x1808($s0)
    ctx->pc = 0x1d28d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
    // 0x1d28d8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1d28d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1d28dc:
    // 0x1d28dc: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d28dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d28e0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d28e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d28e4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d28e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d28e8: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x1d28e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1d28ec: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1d28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1d28f0: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x1d28f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1d28f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d28f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d28f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D28F8u;
    {
        const bool branch_taken_0x1d28f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d28f8) {
            ctx->pc = 0x1D2944u;
            goto label_1d2944;
        }
    }
    ctx->pc = 0x1D2900u;
    // 0x1d2900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2904: 0xc075584  jal         func_1D5610
    ctx->pc = 0x1D2904u;
    SET_GPR_U32(ctx, 31, 0x1D290Cu);
    ctx->pc = 0x1D2908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2904u;
    // 0x1d2908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5610u, 0x1D2904u, 0x1D290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D290Cu;
label_1d290c:
    // 0x1d290c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2910: 0xc075690  jal         func_1D5A40
    ctx->pc = 0x1D2910u;
    SET_GPR_U32(ctx, 31, 0x1D2918u);
    ctx->pc = 0x1D2914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2910u;
    // 0x1d2914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5A40u, 0x1D2910u, 0x1D2918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2918u;
label_1d2918:
    // 0x1d2918: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d291c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d291cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2920: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d2920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d2924: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d2924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d2928: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d2928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d292c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d292cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2930: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2930u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2934: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D2934u;
    SET_GPR_U32(ctx, 31, 0x1D293Cu);
    ctx->pc = 0x1D2938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2934u;
    // 0x1d2938: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D2934u, 0x1D293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D293Cu;
label_1d293c:
    // 0x1d293c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1D293Cu;
    {
        const bool branch_taken_0x1d293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D293Cu;
        // 0x1d2940: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d293c) {
            ctx->pc = 0x1D2A10u;
            goto label_1d2a10;
        }
    }
    ctx->pc = 0x1D2944u;
label_1d2944:
    // 0x1d2944: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d2944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d2948: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d2948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d294c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d2950: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1d2950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1d2954: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d2954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d2958: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D2958u;
    {
        const bool branch_taken_0x1d2958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2958) {
            ctx->pc = 0x1D295Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2958u;
            // 0x1d295c: 0xdc6201a0  ld          $v0, 0x1A0($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D29B4u;
            goto label_1d29b4;
        }
    }
    ctx->pc = 0x1D2960u;
    // 0x1d2960: 0x9e021800  lwu         $v0, 0x1800($s0)
    ctx->pc = 0x1d2960u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x1d2964: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1d2964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1d2968: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d296c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D296Cu;
    {
        const bool branch_taken_0x1d296c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D296Cu;
        // 0x1d2970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d296c) {
            ctx->pc = 0x1D2A18u;
            goto label_1d2a18;
        }
    }
    ctx->pc = 0x1D2974u;
    // 0x1d2974: 0xc075584  jal         func_1D5610
    ctx->pc = 0x1D2974u;
    SET_GPR_U32(ctx, 31, 0x1D297Cu);
    ctx->pc = 0x1D2978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2974u;
    // 0x1d2978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5610u, 0x1D2974u, 0x1D297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D297Cu;
label_1d297c:
    // 0x1d297c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2980: 0xc075690  jal         func_1D5A40
    ctx->pc = 0x1D2980u;
    SET_GPR_U32(ctx, 31, 0x1D2988u);
    ctx->pc = 0x1D2984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2980u;
    // 0x1d2984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5A40u, 0x1D2980u, 0x1D2988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2988u;
label_1d2988:
    // 0x1d2988: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d298c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d298cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2990: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d2990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d2994: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d2994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d2998: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d2998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d299c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d299cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d29a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d29a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29a4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D29A4u;
    SET_GPR_U32(ctx, 31, 0x1D29ACu);
    ctx->pc = 0x1D29A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29A4u;
    // 0x1d29a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D29A4u, 0x1D29ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29ACu;
label_1d29ac:
    // 0x1d29ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D29ACu;
    {
        const bool branch_taken_0x1d29ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29ACu;
        // 0x1d29b0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29ac) {
            ctx->pc = 0x1D2A10u;
            goto label_1d2a10;
        }
    }
    ctx->pc = 0x1D29B4u;
label_1d29b4:
    // 0x1d29b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d29b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d29b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d29bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D29BCu;
    {
        const bool branch_taken_0x1d29bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29BCu;
        // 0x1d29c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29bc) {
            ctx->pc = 0x1D2A18u;
            goto label_1d2a18;
        }
    }
    ctx->pc = 0x1D29C4u;
    // 0x1d29c4: 0xc075690  jal         func_1D5A40
    ctx->pc = 0x1D29C4u;
    SET_GPR_U32(ctx, 31, 0x1D29CCu);
    ctx->pc = 0x1D29C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29C4u;
    // 0x1d29c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5A40u, 0x1D29C4u, 0x1D29CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29CCu;
label_1d29cc:
    // 0x1d29cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d29ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29d0: 0xc0755a4  jal         func_1D5690
    ctx->pc = 0x1D29D0u;
    SET_GPR_U32(ctx, 31, 0x1D29D8u);
    ctx->pc = 0x1D29D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29D0u;
    // 0x1d29d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5690u, 0x1D29D0u, 0x1D29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29D8u;
label_1d29d8:
    // 0x1d29d8: 0x8e021800  lw          $v0, 0x1800($s0)
    ctx->pc = 0x1d29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x1d29dc: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1d29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1d29e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d29e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d29e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d29e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d29ec: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d29ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d29f0: 0xae021800  sw          $v0, 0x1800($s0)
    ctx->pc = 0x1d29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6144), GPR_U32(ctx, 2));
    // 0x1d29f4: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d29f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1d29f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d29f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d29fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d29fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2a00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2a00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a04: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D2A04u;
    SET_GPR_U32(ctx, 31, 0x1D2A0Cu);
    ctx->pc = 0x1D2A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A04u;
    // 0x1d2a08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D2A04u, 0x1D2A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A0Cu;
label_1d2a0c:
    // 0x1d2a0c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d2a10:
    // 0x1d2a10: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d2a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d2a14: 0xae031804  sw          $v1, 0x1804($s0)
    ctx->pc = 0x1d2a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 3));
label_1d2a18:
    // 0x1d2a18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2a1c:
    // 0x1d2a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A20u;
        // 0x1d2a24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2A28u;
}
