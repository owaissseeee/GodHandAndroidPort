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

// Function: Slot1_payoutLine1
// Address: 0x1e2008 - 0x1e2240
void Slot1_payoutLine1_0x1e2008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot1_payoutLine1_0x1e2008");
#endif

    switch (ctx->pc) {
        case 0x1e2088u: goto label_1e2088;
        case 0x1e209cu: goto label_1e209c;
        case 0x1e20acu: goto label_1e20ac;
        case 0x1e20fcu: goto label_1e20fc;
        case 0x1e2130u: goto label_1e2130;
        case 0x1e214cu: goto label_1e214c;
        case 0x1e2178u: goto label_1e2178;
        case 0x1e21acu: goto label_1e21ac;
        case 0x1e21c8u: goto label_1e21c8;
        case 0x1e21dcu: goto label_1e21dc;
        case 0x1e21ecu: goto label_1e21ec;
        case 0x1e2208u: goto label_1e2208;
        default: break;
    }

    ctx->pc = 0x1e2008u;

    // 0x1e2008: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e200c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2010: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e2010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e2014: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e2014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e2018: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e201c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e201cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e2020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2024: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e2024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e2028: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E2028u;
    {
        const bool branch_taken_0x1e2028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2028u;
        // 0x1e202c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2028) {
            ctx->pc = 0x1E20BCu;
            goto label_1e20bc;
        }
    }
    ctx->pc = 0x1E2030u;
    // 0x1e2030: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2030u;
    {
        const bool branch_taken_0x1e2030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2030) {
            ctx->pc = 0x1E2034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2030u;
            // 0x1e2034: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2048u;
            goto label_1e2048;
        }
    }
    ctx->pc = 0x1E2038u;
    // 0x1e2038: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2038u;
    {
        const bool branch_taken_0x1e2038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2038u;
        // 0x1e203c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2038) {
            ctx->pc = 0x1E2060u;
            goto label_1e2060;
        }
    }
    ctx->pc = 0x1E2040u;
    // 0x1e2040: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1E2040u;
    {
        const bool branch_taken_0x1e2040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2040u;
        // 0x1e2044: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2040) {
            ctx->pc = 0x1E222Cu;
            goto label_1e222c;
        }
    }
    ctx->pc = 0x1E2048u;
label_1e2048:
    // 0x1e2048: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1E2048u;
    {
        const bool branch_taken_0x1e2048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2048u;
        // 0x1e204c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2048) {
            ctx->pc = 0x1E2160u;
            goto label_1e2160;
        }
    }
    ctx->pc = 0x1E2050u;
    // 0x1e2050: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1E2050u;
    {
        const bool branch_taken_0x1e2050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2050u;
        // 0x1e2054: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2050) {
            ctx->pc = 0x1E2218u;
            goto label_1e2218;
        }
    }
    ctx->pc = 0x1E2058u;
    // 0x1e2058: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1E2058u;
    {
        const bool branch_taken_0x1e2058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2058u;
        // 0x1e205c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2058) {
            ctx->pc = 0x1E222Cu;
            goto label_1e222c;
        }
    }
    ctx->pc = 0x1E2060u;
label_1e2060:
    // 0x1e2060: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e2060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e2064: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1e2064u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1e2068: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e2068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e206c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1e206cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1e2070: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e2070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e2074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2078: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e207c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e207cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2080: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1E2080u;
    SET_GPR_U32(ctx, 31, 0x1E2088u);
    ctx->pc = 0x1E2084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2080u;
    // 0x1e2084: 0xae220490  sw          $v0, 0x490($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1E2080u, 0x1E2088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2088u;
label_1e2088:
    // 0x1e2088: 0x96250494  lhu         $a1, 0x494($s1)
    ctx->pc = 0x1e2088u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x1e208c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e208cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2090: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2094: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E2094u;
    SET_GPR_U32(ctx, 31, 0x1E209Cu);
    ctx->pc = 0x1E2098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2094u;
    // 0x1e2098: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E2094u, 0x1E209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E209Cu;
label_1e209c:
    // 0x1e209c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e20a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e20a4: 0xc078e4a  jal         func_1E3928
    ctx->pc = 0x1E20A4u;
    SET_GPR_U32(ctx, 31, 0x1E20ACu);
    ctx->pc = 0x1E20A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E20A4u;
    // 0x1e20a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3928u, 0x1E20A4u, 0x1E20ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E20ACu;
label_1e20ac:
    // 0x1e20ac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e20acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e20b0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e20b4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1E20B4u;
    {
        const bool branch_taken_0x1e20b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20B4u;
        // 0x1e20b8: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20b4) {
            ctx->pc = 0x1E21F0u;
            goto label_1e21f0;
        }
    }
    ctx->pc = 0x1E20BCu;
label_1e20bc:
    // 0x1e20bc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e20c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E20C0u;
    {
        const bool branch_taken_0x1e20c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20C0u;
        // 0x1e20c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20c0) {
            ctx->pc = 0x1E20D4u;
            goto label_1e20d4;
        }
    }
    ctx->pc = 0x1E20C8u;
    // 0x1e20c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e20c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E20CCu;
    {
        const bool branch_taken_0x1e20cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20CCu;
        // 0x1e20d0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20cc) {
            ctx->pc = 0x1E20D8u;
            goto label_1e20d8;
        }
    }
    ctx->pc = 0x1E20D4u;
label_1e20d4:
    // 0x1e20d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e20d8:
    // 0x1e20d8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e20d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e20dc: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1E20DCu;
    {
        const bool branch_taken_0x1e20dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20DCu;
        // 0x1e20e0: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20dc) {
            ctx->pc = 0x1E2224u;
            goto label_1e2224;
        }
    }
    ctx->pc = 0x1E20E4u;
    // 0x1e20e4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1e20e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1e20e8: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1e20e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1e20ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e20ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e20f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20f4: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1E20F4u;
    SET_GPR_U32(ctx, 31, 0x1E20FCu);
    ctx->pc = 0x1E20F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E20F4u;
    // 0x1e20f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1E20F4u, 0x1E20FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E20FCu;
label_1e20fc:
    // 0x1e20fc: 0x8e2303cc  lw          $v1, 0x3CC($s1)
    ctx->pc = 0x1e20fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 972)));
    // 0x1e2100: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1e2100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e2104: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1e2104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1e2108: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1e2108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e210c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e210cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e2110: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E2110u;
    {
        const bool branch_taken_0x1e2110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2110) {
            ctx->pc = 0x1E2114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2110u;
            // 0x1e2114: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2118u;
            goto label_1e2118;
        }
    }
    ctx->pc = 0x1E2118u;
label_1e2118:
    // 0x1e2118: 0x1812  mflo        $v1
    ctx->pc = 0x1e2118u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e211c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x1e211cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x1e2120: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1e2120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e2124: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e2124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2128: 0xc07a392  jal         func_1E8E48
    ctx->pc = 0x1E2128u;
    SET_GPR_U32(ctx, 31, 0x1E2130u);
    ctx->pc = 0x1E212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2128u;
    // 0x1e212c: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E48u, 0x1E2128u, 0x1E2130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2130u;
label_1e2130:
    // 0x1e2130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2134: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e2134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2138: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e2138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e213c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e213cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2140: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e2140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2144: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E2144u;
    SET_GPR_U32(ctx, 31, 0x1E214Cu);
    ctx->pc = 0x1E2148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2144u;
    // 0x1e2148: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E2144u, 0x1E214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E214Cu;
label_1e214c:
    // 0x1e214c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e2150: 0xae2204c8  sw          $v0, 0x4C8($s1)
    ctx->pc = 0x1e2150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1224), GPR_U32(ctx, 2));
    // 0x1e2154: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e2154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e2158: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1E2158u;
    {
        const bool branch_taken_0x1e2158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2158u;
        // 0x1e215c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2158) {
            ctx->pc = 0x1E2224u;
            goto label_1e2224;
        }
    }
    ctx->pc = 0x1E2160u;
label_1e2160:
    // 0x1e2160: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1e2160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e2164: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E2164u;
    {
        const bool branch_taken_0x1e2164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2164u;
        // 0x1e2168: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2164) {
            ctx->pc = 0x1E219Cu;
            goto label_1e219c;
        }
    }
    ctx->pc = 0x1E216Cu;
    // 0x1e216c: 0x26129b70  addiu       $s2, $s0, -0x6490
    ctx->pc = 0x1e216cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1e2170: 0xc07ea38  jal         func_1FA8E0
    ctx->pc = 0x1E2170u;
    SET_GPR_U32(ctx, 31, 0x1E2178u);
    ctx->pc = 0x1E2174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2170u;
    // 0x1e2174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA8E0u, 0x1E2170u, 0x1E2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2178u;
label_1e2178:
    // 0x1e2178: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2178u;
    {
        const bool branch_taken_0x1e2178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2178) {
            ctx->pc = 0x1E217Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2178u;
            // 0x1e217c: 0x8e2504c8  lw          $a1, 0x4C8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E21A0u;
            goto label_1e21a0;
        }
    }
    ctx->pc = 0x1E2180u;
    // 0x1e2180: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e2180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e2184: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e2184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e2188: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e2188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e218c: 0xdc437650  ld          $v1, 0x7650($v0)
    ctx->pc = 0x1e218cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30288)));
    // 0x1e2190: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e2190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e2194: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2194u;
    {
        const bool branch_taken_0x1e2194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2194) {
            ctx->pc = 0x1E2198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2194u;
            // 0x1e2198: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E21FCu;
            goto label_1e21fc;
        }
    }
    ctx->pc = 0x1E219Cu;
label_1e219c:
    // 0x1e219c: 0x8e2504c8  lw          $a1, 0x4C8($s1)
    ctx->pc = 0x1e219cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
label_1e21a0:
    // 0x1e21a0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e21a4: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1E21A4u;
    SET_GPR_U32(ctx, 31, 0x1E21ACu);
    ctx->pc = 0x1E21A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E21A4u;
    // 0x1e21a8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1E21A4u, 0x1E21ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21ACu;
label_1e21ac:
    // 0x1e21ac: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1e21acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1e21b0: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x1e21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1e21b4: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x1e21b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e21b8: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1e21b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e21bc: 0x2812  mflo        $a1
    ctx->pc = 0x1e21bcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1e21c0: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E21C0u;
    SET_GPR_U32(ctx, 31, 0x1E21C8u);
    ctx->pc = 0x1E21C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E21C0u;
    // 0x1e21c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E21C0u, 0x1E21C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21C8u;
label_1e21c8:
    // 0x1e21c8: 0x96250494  lhu         $a1, 0x494($s1)
    ctx->pc = 0x1e21c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x1e21cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e21ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e21d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21d4: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E21D4u;
    SET_GPR_U32(ctx, 31, 0x1E21DCu);
    ctx->pc = 0x1E21D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E21D4u;
    // 0x1e21d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E21D4u, 0x1E21DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21DCu;
label_1e21dc:
    // 0x1e21dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e21dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e21e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21e4: 0xc078e4a  jal         func_1E3928
    ctx->pc = 0x1E21E4u;
    SET_GPR_U32(ctx, 31, 0x1E21ECu);
    ctx->pc = 0x1E21E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E21E4u;
    // 0x1e21e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3928u, 0x1E21E4u, 0x1E21ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21ECu;
label_1e21ec:
    // 0x1e21ec: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e21f0:
    // 0x1e21f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e21f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E21F4u;
    {
        const bool branch_taken_0x1e21f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21F4u;
        // 0x1e21f8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21f4) {
            ctx->pc = 0x1E2224u;
            goto label_1e2224;
        }
    }
    ctx->pc = 0x1E21FCu;
label_1e21fc:
    // 0x1e21fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e21fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2200: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E2200u;
    SET_GPR_U32(ctx, 31, 0x1E2208u);
    ctx->pc = 0x1E2204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2200u;
    // 0x1e2204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E2200u, 0x1E2208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2208u;
label_1e2208:
    // 0x1e2208: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1e2208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e220c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e2210: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2210u;
    {
        const bool branch_taken_0x1e2210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2210u;
        // 0x1e2214: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2210) {
            ctx->pc = 0x1E2224u;
            goto label_1e2224;
        }
    }
    ctx->pc = 0x1E2218u;
label_1e2218:
    // 0x1e2218: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e2218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e221c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e221cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1e2220: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e2220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e2224:
    // 0x1e2224: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e2224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2228: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e2228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e222c:
    // 0x1e222c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e222cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2234: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2234u;
        // 0x1e2238: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E223Cu;
    // 0x1e223c: 0x0  nop
    ctx->pc = 0x1e223cu;
    // NOP
    ctx->pc = 0x1e2240u;
}
