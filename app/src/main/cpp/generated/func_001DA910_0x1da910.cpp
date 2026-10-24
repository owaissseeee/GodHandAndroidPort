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

// Function: func_001DA910
// Address: 0x1da910 - 0x1dab00
void func_001DA910_0x1da910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DA910_0x1da910");
#endif

    switch (ctx->pc) {
        case 0x1da974u: goto label_1da974;
        case 0x1da988u: goto label_1da988;
        case 0x1da994u: goto label_1da994;
        case 0x1da9a0u: goto label_1da9a0;
        case 0x1da9f0u: goto label_1da9f0;
        case 0x1da9fcu: goto label_1da9fc;
        case 0x1daa08u: goto label_1daa08;
        case 0x1daa14u: goto label_1daa14;
        case 0x1daa30u: goto label_1daa30;
        case 0x1daa3cu: goto label_1daa3c;
        case 0x1daa48u: goto label_1daa48;
        case 0x1daa54u: goto label_1daa54;
        case 0x1daa78u: goto label_1daa78;
        case 0x1daab0u: goto label_1daab0;
        case 0x1daac0u: goto label_1daac0;
        case 0x1daaccu: goto label_1daacc;
        default: break;
    }

    ctx->pc = 0x1da910u;

    // 0x1da910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1da910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1da914: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1da914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1da918: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1da918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1da91c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da920: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1da920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1da924: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1da924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da92c: 0x92253025  lbu         $a1, 0x3025($s1)
    ctx->pc = 0x1da92cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1da930: 0x10b2001d  beq         $a1, $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DA930u;
    {
        const bool branch_taken_0x1da930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x1DA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA930u;
        // 0x1da934: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da930) {
            ctx->pc = 0x1DA9A8u;
            goto label_1da9a8;
        }
    }
    ctx->pc = 0x1DA938u;
    // 0x1da938: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA938u;
    {
        const bool branch_taken_0x1da938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da938) {
            ctx->pc = 0x1DA93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA938u;
            // 0x1da93c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA950u;
            goto label_1da950;
        }
    }
    ctx->pc = 0x1DA940u;
    // 0x1da940: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA940u;
    {
        const bool branch_taken_0x1da940 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA940u;
        // 0x1da944: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da940) {
            ctx->pc = 0x1DA960u;
            goto label_1da960;
        }
    }
    ctx->pc = 0x1DA948u;
    // 0x1da948: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1DA948u;
    {
        const bool branch_taken_0x1da948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA948u;
        // 0x1da94c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da948) {
            ctx->pc = 0x1DAAF0u;
            goto label_1daaf0;
        }
    }
    ctx->pc = 0x1DA950u;
label_1da950:
    // 0x1da950: 0x10a20062  beq         $a1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1DA950u;
    {
        const bool branch_taken_0x1da950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA950u;
        // 0x1da954: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da950) {
            ctx->pc = 0x1DAADCu;
            goto label_1daadc;
        }
    }
    ctx->pc = 0x1DA958u;
    // 0x1da958: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1DA958u;
    {
        const bool branch_taken_0x1da958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA958u;
        // 0x1da95c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da958) {
            ctx->pc = 0x1DAAF0u;
            goto label_1daaf0;
        }
    }
    ctx->pc = 0x1DA960u;
label_1da960:
    // 0x1da960: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1da960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1da964: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1da964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1da968: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1da968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1da96c: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x1DA96Cu;
    SET_GPR_U32(ctx, 31, 0x1DA974u);
    ctx->pc = 0x1DA970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA96Cu;
    // 0x1da970: 0x263025b0  addiu       $s0, $s1, 0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x1DA96Cu, 0x1DA974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA974u;
label_1da974:
    // 0x1da974: 0xa2323044  sb          $s2, 0x3044($s1)
    ctx->pc = 0x1da974u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12356), (uint8_t)GPR_U32(ctx, 18));
    // 0x1da978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da97c: 0xae203040  sw          $zero, 0x3040($s1)
    ctx->pc = 0x1da97cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 0));
    // 0x1da980: 0xc077bd2  jal         func_1DEF48
    ctx->pc = 0x1DA980u;
    SET_GPR_U32(ctx, 31, 0x1DA988u);
    ctx->pc = 0x1DA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA980u;
    // 0x1da984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEF48u, 0x1DA980u, 0x1DA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA988u;
label_1da988:
    // 0x1da988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da98c: 0xc077c12  jal         func_1DF048
    ctx->pc = 0x1DA98Cu;
    SET_GPR_U32(ctx, 31, 0x1DA994u);
    ctx->pc = 0x1DA990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA98Cu;
    // 0x1da990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF048u, 0x1DA98Cu, 0x1DA994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA994u;
label_1da994:
    // 0x1da994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da998: 0xc077bf2  jal         func_1DEFC8
    ctx->pc = 0x1DA998u;
    SET_GPR_U32(ctx, 31, 0x1DA9A0u);
    ctx->pc = 0x1DA99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA998u;
    // 0x1da99c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEFC8u, 0x1DA998u, 0x1DA9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9A0u;
label_1da9a0:
    // 0x1da9a0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1DA9A0u;
    {
        const bool branch_taken_0x1da9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9A0u;
        // 0x1da9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9a0) {
            ctx->pc = 0x1DAAC4u;
            goto label_1daac4;
        }
    }
    ctx->pc = 0x1DA9A8u;
label_1da9a8:
    // 0x1da9a8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1da9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1da9ac: 0x3404cc00  ori         $a0, $zero, 0xCC00
    ctx->pc = 0x1da9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1da9b0: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1da9b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1da9b4: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x1da9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x1da9b8: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x1da9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x1da9bc: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1da9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1da9c0: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x1da9c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1da9c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1da9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1da9c8: 0x5060002d  beql        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1DA9C8u;
    {
        const bool branch_taken_0x1da9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da9c8) {
            ctx->pc = 0x1DA9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA9C8u;
            // 0x1da9cc: 0xdc4201a0  ld          $v0, 0x1A0($v0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAA80u;
            goto label_1daa80;
        }
    }
    ctx->pc = 0x1DA9D0u;
    // 0x1da9d0: 0x8e223040  lw          $v0, 0x3040($s1)
    ctx->pc = 0x1da9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12352)));
    // 0x1da9d4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DA9D4u;
    {
        const bool branch_taken_0x1da9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9D4u;
        // 0x1da9d8: 0x263025b0  addiu       $s0, $s1, 0x25B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9d4) {
            ctx->pc = 0x1DAA1Cu;
            goto label_1daa1c;
        }
    }
    ctx->pc = 0x1DA9DCu;
    // 0x1da9dc: 0xae253040  sw          $a1, 0x3040($s1)
    ctx->pc = 0x1da9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 5));
    // 0x1da9e0: 0xa2203044  sb          $zero, 0x3044($s1)
    ctx->pc = 0x1da9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12356), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9e8: 0xc077bd2  jal         func_1DEF48
    ctx->pc = 0x1DA9E8u;
    SET_GPR_U32(ctx, 31, 0x1DA9F0u);
    ctx->pc = 0x1DA9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9E8u;
    // 0x1da9ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEF48u, 0x1DA9E8u, 0x1DA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9F0u;
label_1da9f0:
    // 0x1da9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9f4: 0xc077c12  jal         func_1DF048
    ctx->pc = 0x1DA9F4u;
    SET_GPR_U32(ctx, 31, 0x1DA9FCu);
    ctx->pc = 0x1DA9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9F4u;
    // 0x1da9f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF048u, 0x1DA9F4u, 0x1DA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9FCu;
label_1da9fc:
    // 0x1da9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa00: 0xc077bf2  jal         func_1DEFC8
    ctx->pc = 0x1DAA00u;
    SET_GPR_U32(ctx, 31, 0x1DAA08u);
    ctx->pc = 0x1DAA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA00u;
    // 0x1daa04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEFC8u, 0x1DAA00u, 0x1DAA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA08u;
label_1daa08:
    // 0x1daa08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa0c: 0xc077c3c  jal         func_1DF0F0
    ctx->pc = 0x1DAA0Cu;
    SET_GPR_U32(ctx, 31, 0x1DAA14u);
    ctx->pc = 0x1DAA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA0Cu;
    // 0x1daa10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF0F0u, 0x1DAA0Cu, 0x1DAA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA14u;
label_1daa14:
    // 0x1daa14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DAA14u;
    {
        const bool branch_taken_0x1daa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA14u;
        // 0x1daa18: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa14) {
            ctx->pc = 0x1DAA58u;
            goto label_1daa58;
        }
    }
    ctx->pc = 0x1DAA1Cu;
label_1daa1c:
    // 0x1daa1c: 0xa2253044  sb          $a1, 0x3044($s1)
    ctx->pc = 0x1daa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12356), (uint8_t)GPR_U32(ctx, 5));
    // 0x1daa20: 0xae203040  sw          $zero, 0x3040($s1)
    ctx->pc = 0x1daa20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 0));
    // 0x1daa24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa28: 0xc077bd2  jal         func_1DEF48
    ctx->pc = 0x1DAA28u;
    SET_GPR_U32(ctx, 31, 0x1DAA30u);
    ctx->pc = 0x1DAA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA28u;
    // 0x1daa2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEF48u, 0x1DAA28u, 0x1DAA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA30u;
label_1daa30:
    // 0x1daa30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa34: 0xc077c12  jal         func_1DF048
    ctx->pc = 0x1DAA34u;
    SET_GPR_U32(ctx, 31, 0x1DAA3Cu);
    ctx->pc = 0x1DAA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA34u;
    // 0x1daa38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF048u, 0x1DAA34u, 0x1DAA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA3Cu;
label_1daa3c:
    // 0x1daa3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa40: 0xc077bf2  jal         func_1DEFC8
    ctx->pc = 0x1DAA40u;
    SET_GPR_U32(ctx, 31, 0x1DAA48u);
    ctx->pc = 0x1DAA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA40u;
    // 0x1daa44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEFC8u, 0x1DAA40u, 0x1DAA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA48u;
label_1daa48:
    // 0x1daa48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa4c: 0xc077c3c  jal         func_1DF0F0
    ctx->pc = 0x1DAA4Cu;
    SET_GPR_U32(ctx, 31, 0x1DAA54u);
    ctx->pc = 0x1DAA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA4Cu;
    // 0x1daa50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF0F0u, 0x1DAA4Cu, 0x1DAA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA54u;
label_1daa54:
    // 0x1daa54: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1daa54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1daa58:
    // 0x1daa58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1daa58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa5c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1daa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1daa60: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1daa60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1daa64: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1daa64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1daa68: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1daa68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1daa6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1daa6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa70: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1DAA70u;
    SET_GPR_U32(ctx, 31, 0x1DAA78u);
    ctx->pc = 0x1DAA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA70u;
    // 0x1daa74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1DAA70u, 0x1DAA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA78u;
label_1daa78:
    // 0x1daa78: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1DAA78u;
    {
        const bool branch_taken_0x1daa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA78u;
        // 0x1daa7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa78) {
            ctx->pc = 0x1DAAECu;
            goto label_1daaec;
        }
    }
    ctx->pc = 0x1DAA80u;
label_1daa80:
    // 0x1daa80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1daa80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1daa84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1daa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1daa88: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DAA88u;
    {
        const bool branch_taken_0x1daa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA88u;
        // 0x1daa8c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa88) {
            ctx->pc = 0x1DAAE8u;
            goto label_1daae8;
        }
    }
    ctx->pc = 0x1DAA90u;
    // 0x1daa90: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1daa90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1daa94: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1daa94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1daa98: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1daa98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1daa9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1daa9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daaa0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1daaa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daaa4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1daaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1daaa8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1DAAA8u;
    SET_GPR_U32(ctx, 31, 0x1DAAB0u);
    ctx->pc = 0x1DAAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAAA8u;
    // 0x1daaac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1DAAA8u, 0x1DAAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAAB0u;
label_1daab0:
    // 0x1daab0: 0x263025b0  addiu       $s0, $s1, 0x25B0
    ctx->pc = 0x1daab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1daab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daab8: 0xc077c12  jal         func_1DF048
    ctx->pc = 0x1DAAB8u;
    SET_GPR_U32(ctx, 31, 0x1DAAC0u);
    ctx->pc = 0x1DAABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAAB8u;
    // 0x1daabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF048u, 0x1DAAB8u, 0x1DAAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAAC0u;
label_1daac0:
    // 0x1daac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1daac4:
    // 0x1daac4: 0xc077c3c  jal         func_1DF0F0
    ctx->pc = 0x1DAAC4u;
    SET_GPR_U32(ctx, 31, 0x1DAACCu);
    ctx->pc = 0x1DAAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAAC4u;
    // 0x1daac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF0F0u, 0x1DAAC4u, 0x1DAACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAACCu;
label_1daacc:
    // 0x1daacc: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1daaccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1daad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1daad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1daad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAAD4u;
    {
        const bool branch_taken_0x1daad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAD4u;
        // 0x1daad8: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daad4) {
            ctx->pc = 0x1DAAE8u;
            goto label_1daae8;
        }
    }
    ctx->pc = 0x1DAADCu;
label_1daadc:
    // 0x1daadc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1daadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1daae0: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1daae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1daae4: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1daae4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1daae8:
    // 0x1daae8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1daae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1daaec:
    // 0x1daaec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1daaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1daaf0:
    // 0x1daaf0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1daaf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1daaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1daaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAF8u;
        // 0x1daafc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAB00u;
}
