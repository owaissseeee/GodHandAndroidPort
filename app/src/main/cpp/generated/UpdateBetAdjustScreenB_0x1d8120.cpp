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

// Function: UpdateBetAdjustScreenB
// Address: 0x1d8120 - 0x1d8480
void UpdateBetAdjustScreenB_0x1d8120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateBetAdjustScreenB_0x1d8120");
#endif

    switch (ctx->pc) {
        case 0x1d815cu: goto label_1d815c;
        case 0x1d8168u: goto label_1d8168;
        case 0x1d81b8u: goto label_1d81b8;
        case 0x1d81c4u: goto label_1d81c4;
        case 0x1d8208u: goto label_1d8208;
        case 0x1d8214u: goto label_1d8214;
        case 0x1d8264u: goto label_1d8264;
        case 0x1d8274u: goto label_1d8274;
        case 0x1d82a4u: goto label_1d82a4;
        case 0x1d82d8u: goto label_1d82d8;
        case 0x1d82f0u: goto label_1d82f0;
        case 0x1d82fcu: goto label_1d82fc;
        case 0x1d8308u: goto label_1d8308;
        case 0x1d8320u: goto label_1d8320;
        case 0x1d832cu: goto label_1d832c;
        case 0x1d8364u: goto label_1d8364;
        case 0x1d8388u: goto label_1d8388;
        case 0x1d83acu: goto label_1d83ac;
        case 0x1d83d0u: goto label_1d83d0;
        case 0x1d83f4u: goto label_1d83f4;
        case 0x1d8414u: goto label_1d8414;
        case 0x1d842cu: goto label_1d842c;
        case 0x1d8450u: goto label_1d8450;
        case 0x1d846cu: goto label_1d846c;
        default: break;
    }

    ctx->pc = 0x1d8120u;

    // 0x1d8120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8124: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8128: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d8128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d812c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d812cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8134: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d8134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d8138: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8138u;
    {
        const bool branch_taken_0x1d8138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8138u;
        // 0x1d813c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8138) {
            ctx->pc = 0x1D8150u;
            goto label_1d8150;
        }
    }
    ctx->pc = 0x1D8140u;
    // 0x1d8140: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8140u;
    {
        const bool branch_taken_0x1d8140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8140u;
        // 0x1d8144: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8140) {
            ctx->pc = 0x1D8178u;
            goto label_1d8178;
        }
    }
    ctx->pc = 0x1D8148u;
    // 0x1d8148: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1D8148u;
    {
        const bool branch_taken_0x1d8148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8148u;
        // 0x1d814c: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8148) {
            ctx->pc = 0x1D8368u;
            goto label_1d8368;
        }
    }
    ctx->pc = 0x1D8150u;
label_1d8150:
    // 0x1d8150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8154: 0xc077678  jal         func_1DD9E0
    ctx->pc = 0x1D8154u;
    SET_GPR_U32(ctx, 31, 0x1D815Cu);
    ctx->pc = 0x1D8158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8154u;
    // 0x1d8158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9E0u, 0x1D8154u, 0x1D815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D815Cu;
label_1d815c:
    // 0x1d815c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d815cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8160: 0xc077742  jal         func_1DDD08
    ctx->pc = 0x1D8160u;
    SET_GPR_U32(ctx, 31, 0x1D8168u);
    ctx->pc = 0x1D8164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8160u;
    // 0x1d8164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDD08u, 0x1D8160u, 0x1D8168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8168u;
label_1d8168:
    // 0x1d8168: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d8168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d816c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8170: 0xa2223025  sb          $v0, 0x3025($s1)
    ctx->pc = 0x1d8170u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8174: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1d8174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1d8178:
    // 0x1d8178: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d8178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d817c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d817cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d8180: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d8180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d8184: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x1d8184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1d8188: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1d8188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1d818c: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x1d818cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1d8190: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d8190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d8194: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D8194u;
    {
        const bool branch_taken_0x1d8194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8194) {
            ctx->pc = 0x1D81E4u;
            goto label_1d81e4;
        }
    }
    ctx->pc = 0x1D819Cu;
    // 0x1d819c: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d81a0: 0x8e233030  lw          $v1, 0x3030($s1)
    ctx->pc = 0x1d81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12336)));
    // 0x1d81a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d81a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d81a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D81A8u;
    {
        const bool branch_taken_0x1d81a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81A8u;
        // 0x1d81ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81a8) {
            ctx->pc = 0x1D81D0u;
            goto label_1d81d0;
        }
    }
    ctx->pc = 0x1D81B0u;
    // 0x1d81b0: 0xc077678  jal         func_1DD9E0
    ctx->pc = 0x1D81B0u;
    SET_GPR_U32(ctx, 31, 0x1D81B8u);
    ctx->pc = 0x1D81B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D81B0u;
    // 0x1d81b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9E0u, 0x1D81B0u, 0x1D81B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D81B8u;
label_1d81b8:
    // 0x1d81b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d81b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81bc: 0xc077742  jal         func_1DDD08
    ctx->pc = 0x1D81BCu;
    SET_GPR_U32(ctx, 31, 0x1D81C4u);
    ctx->pc = 0x1D81C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D81BCu;
    // 0x1d81c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDD08u, 0x1D81BCu, 0x1D81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D81C4u;
label_1d81c4:
    // 0x1d81c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d81c8: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d81c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d81cc: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d81ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1d81d0:
    // 0x1d81d0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d81d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d81d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d81d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81d8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d81d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d81dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1D81DCu;
    {
        const bool branch_taken_0x1d81dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81DCu;
        // 0x1d81e0: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81dc) {
            ctx->pc = 0x1D8290u;
            goto label_1d8290;
        }
    }
    ctx->pc = 0x1D81E4u;
label_1d81e4:
    // 0x1d81e4: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d81e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d81e8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d81e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d81ec: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d81ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d81f0: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1d81f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1d81f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d81f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d81f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D81F8u;
    {
        const bool branch_taken_0x1d81f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81F8u;
        // 0x1d81fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81f8) {
            ctx->pc = 0x1D8240u;
            goto label_1d8240;
        }
    }
    ctx->pc = 0x1D8200u;
    // 0x1d8200: 0xc077678  jal         func_1DD9E0
    ctx->pc = 0x1D8200u;
    SET_GPR_U32(ctx, 31, 0x1D8208u);
    ctx->pc = 0x1D8204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8200u;
    // 0x1d8204: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9E0u, 0x1D8200u, 0x1D8208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8208u;
label_1d8208:
    // 0x1d8208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d820c: 0xc077742  jal         func_1DDD08
    ctx->pc = 0x1D820Cu;
    SET_GPR_U32(ctx, 31, 0x1D8214u);
    ctx->pc = 0x1D8210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D820Cu;
    // 0x1d8210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDD08u, 0x1D820Cu, 0x1D8214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8214u;
label_1d8214:
    // 0x1d8214: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d8214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d8218: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8218u;
    {
        const bool branch_taken_0x1d8218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8218u;
        // 0x1d821c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8218) {
            ctx->pc = 0x1D8224u;
            goto label_1d8224;
        }
    }
    ctx->pc = 0x1D8220u;
    // 0x1d8220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8224:
    // 0x1d8224: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d8224u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d8228: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d8228u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d822c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d822cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d8230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8234: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d8234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d8238: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8238u;
    {
        const bool branch_taken_0x1d8238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8238u;
        // 0x1d823c: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8238) {
            ctx->pc = 0x1D8290u;
            goto label_1d8290;
        }
    }
    ctx->pc = 0x1D8240u;
label_1d8240:
    // 0x1d8240: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x1d8240u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1d8244: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d8244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d8248: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d8248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d824c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D824Cu;
    {
        const bool branch_taken_0x1d824c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D824Cu;
        // 0x1d8250: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d824c) {
            ctx->pc = 0x1D82ACu;
            goto label_1d82ac;
        }
    }
    ctx->pc = 0x1D8254u;
    // 0x1d8254: 0x8e253034  lw          $a1, 0x3034($s1)
    ctx->pc = 0x1d8254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d8258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d825c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D825Cu;
    SET_GPR_U32(ctx, 31, 0x1D8264u);
    ctx->pc = 0x1D8260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D825Cu;
    // 0x1d8260: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D825Cu, 0x1D8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8264u;
label_1d8264:
    // 0x1d8264: 0xae203034  sw          $zero, 0x3034($s1)
    ctx->pc = 0x1d8264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 0));
    // 0x1d8268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d826c: 0xc077486  jal         func_1DD218
    ctx->pc = 0x1D826Cu;
    SET_GPR_U32(ctx, 31, 0x1D8274u);
    ctx->pc = 0x1D8270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D826Cu;
    // 0x1d8270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD218u, 0x1D826Cu, 0x1D8274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8274u;
label_1d8274:
    // 0x1d8274: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1d8274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d8278: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d8278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d827c: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d827cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d8280: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d8280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d8284: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d8284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d828c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d828cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_1d8290:
    // 0x1d8290: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d8290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8294: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d8294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8298: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d829c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D829Cu;
    SET_GPR_U32(ctx, 31, 0x1D82A4u);
    ctx->pc = 0x1D82A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D829Cu;
    // 0x1d82a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D829Cu, 0x1D82A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82A4u;
label_1d82a4:
    // 0x1d82a4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1D82A4u;
    {
        const bool branch_taken_0x1d82a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82A4u;
        // 0x1d82a8: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82a4) {
            ctx->pc = 0x1D8368u;
            goto label_1d8368;
        }
    }
    ctx->pc = 0x1D82ACu;
label_1d82ac:
    // 0x1d82ac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1d82acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1d82b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d82b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d82b4: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D82B4u;
    {
        const bool branch_taken_0x1d82b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d82b4) {
            ctx->pc = 0x1D82B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D82B4u;
            // 0x1d82b8: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8368u;
            goto label_1d8368;
        }
    }
    ctx->pc = 0x1D82BCu;
    // 0x1d82bc: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d82c0: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D82C0u;
    {
        const bool branch_taken_0x1d82c0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82C0u;
        // 0x1d82c4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82c0) {
            ctx->pc = 0x1D8334u;
            goto label_1d8334;
        }
    }
    ctx->pc = 0x1D82C8u;
    // 0x1d82c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d82c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82cc: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1d82ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d82d0: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D82D0u;
    SET_GPR_U32(ctx, 31, 0x1D82D8u);
    ctx->pc = 0x1D82D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82D0u;
    // 0x1d82d4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D82D0u, 0x1D82D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82D8u;
label_1d82d8:
    // 0x1d82d8: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d82dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d82dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82e0: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x1d82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x1d82e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d82e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82e8: 0xc077486  jal         func_1DD218
    ctx->pc = 0x1D82E8u;
    SET_GPR_U32(ctx, 31, 0x1D82F0u);
    ctx->pc = 0x1D82ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82E8u;
    // 0x1d82ec: 0xae223034  sw          $v0, 0x3034($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD218u, 0x1D82E8u, 0x1D82F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82F0u;
label_1d82f0:
    // 0x1d82f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d82f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82f4: 0xc0775dc  jal         func_1DD770
    ctx->pc = 0x1D82F4u;
    SET_GPR_U32(ctx, 31, 0x1D82FCu);
    ctx->pc = 0x1D82F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82F4u;
    // 0x1d82f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD770u, 0x1D82F4u, 0x1D82FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82FCu;
label_1d82fc:
    // 0x1d82fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d82fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8300: 0xc077610  jal         func_1DD840
    ctx->pc = 0x1D8300u;
    SET_GPR_U32(ctx, 31, 0x1D8308u);
    ctx->pc = 0x1D8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8300u;
    // 0x1d8304: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD840u, 0x1D8300u, 0x1D8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8308u;
label_1d8308:
    // 0x1d8308: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d8308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d830c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D830Cu;
    {
        const bool branch_taken_0x1d830c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D830Cu;
        // 0x1d8310: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d830c) {
            ctx->pc = 0x1D8344u;
            goto label_1d8344;
        }
    }
    ctx->pc = 0x1D8314u;
    // 0x1d8314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8318: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1D8318u;
    SET_GPR_U32(ctx, 31, 0x1D8320u);
    ctx->pc = 0x1D831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8318u;
    // 0x1d831c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1D8318u, 0x1D8320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8320u;
label_1d8320:
    // 0x1d8320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8324: 0xc077568  jal         func_1DD5A0
    ctx->pc = 0x1D8324u;
    SET_GPR_U32(ctx, 31, 0x1D832Cu);
    ctx->pc = 0x1D8328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8324u;
    // 0x1d8328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A0u, 0x1D8324u, 0x1D832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D832Cu;
label_1d832c:
    // 0x1d832c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D832Cu;
    {
        const bool branch_taken_0x1d832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D832Cu;
        // 0x1d8330: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d832c) {
            ctx->pc = 0x1D8344u;
            goto label_1d8344;
        }
    }
    ctx->pc = 0x1D8334u;
label_1d8334:
    // 0x1d8334: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1d8334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d8338: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d8338u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d833c: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d833cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8340: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d8340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d8344:
    // 0x1d8344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8348: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d8348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d834c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1d834cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1d8350: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d8350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8354: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d8354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8358: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d835c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D835Cu;
    SET_GPR_U32(ctx, 31, 0x1D8364u);
    ctx->pc = 0x1D8360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D835Cu;
    // 0x1d8360: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D835Cu, 0x1D8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8364u;
label_1d8364:
    // 0x1d8364: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d8364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
label_1d8368:
    // 0x1d8368: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8368u;
    {
        const bool branch_taken_0x1d8368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8368u;
        // 0x1d836c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8368) {
            ctx->pc = 0x1D8378u;
            goto label_1d8378;
        }
    }
    ctx->pc = 0x1D8370u;
    // 0x1d8370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8370u;
    {
        const bool branch_taken_0x1d8370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8370u;
        // 0x1d8374: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8370) {
            ctx->pc = 0x1D837Cu;
            goto label_1d837c;
        }
    }
    ctx->pc = 0x1D8378u;
label_1d8378:
    // 0x1d8378: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x1d8378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1d837c:
    // 0x1d837c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d837cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8380: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D8380u;
    SET_GPR_U32(ctx, 31, 0x1D8388u);
    ctx->pc = 0x1D8384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8380u;
    // 0x1d8384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D8380u, 0x1D8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8388u;
label_1d8388:
    // 0x1d8388: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d8388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d838c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D838Cu;
    {
        const bool branch_taken_0x1d838c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D838Cu;
        // 0x1d8390: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d838c) {
            ctx->pc = 0x1D839Cu;
            goto label_1d839c;
        }
    }
    ctx->pc = 0x1D8394u;
    // 0x1d8394: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8394u;
    {
        const bool branch_taken_0x1d8394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8394u;
        // 0x1d8398: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8394) {
            ctx->pc = 0x1D83A0u;
            goto label_1d83a0;
        }
    }
    ctx->pc = 0x1D839Cu;
label_1d839c:
    // 0x1d839c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1d839cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d83a0:
    // 0x1d83a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d83a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d83a4: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D83A4u;
    SET_GPR_U32(ctx, 31, 0x1D83ACu);
    ctx->pc = 0x1D83A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D83A4u;
    // 0x1d83a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D83A4u, 0x1D83ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D83ACu;
label_1d83ac:
    // 0x1d83ac: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d83acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d83b0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D83B0u;
    {
        const bool branch_taken_0x1d83b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83B0u;
        // 0x1d83b4: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83b0) {
            ctx->pc = 0x1D83C0u;
            goto label_1d83c0;
        }
    }
    ctx->pc = 0x1D83B8u;
    // 0x1d83b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D83B8u;
    {
        const bool branch_taken_0x1d83b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D83BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83B8u;
        // 0x1d83bc: 0x463023  subu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83b8) {
            ctx->pc = 0x1D83C4u;
            goto label_1d83c4;
        }
    }
    ctx->pc = 0x1D83C0u;
label_1d83c0:
    // 0x1d83c0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1d83c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d83c4:
    // 0x1d83c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d83c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d83c8: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D83C8u;
    SET_GPR_U32(ctx, 31, 0x1D83D0u);
    ctx->pc = 0x1D83CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D83C8u;
    // 0x1d83cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D83C8u, 0x1D83D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D83D0u;
label_1d83d0:
    // 0x1d83d0: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d83d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d83d4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D83D4u;
    {
        const bool branch_taken_0x1d83d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83D4u;
        // 0x1d83d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83d4) {
            ctx->pc = 0x1D83E4u;
            goto label_1d83e4;
        }
    }
    ctx->pc = 0x1D83DCu;
    // 0x1d83dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D83DCu;
    {
        const bool branch_taken_0x1d83dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83DCu;
        // 0x1d83e0: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83dc) {
            ctx->pc = 0x1D83E8u;
            goto label_1d83e8;
        }
    }
    ctx->pc = 0x1D83E4u;
label_1d83e4:
    // 0x1d83e4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d83e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d83e8:
    // 0x1d83e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d83e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d83ec: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D83ECu;
    SET_GPR_U32(ctx, 31, 0x1D83F4u);
    ctx->pc = 0x1D83F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D83ECu;
    // 0x1d83f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D83ECu, 0x1D83F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D83F4u;
label_1d83f4:
    // 0x1d83f4: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1d83f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d83f8: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d83fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d8400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8404: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d8404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8408: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1d8408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d840c: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D840Cu;
    SET_GPR_U32(ctx, 31, 0x1D8414u);
    ctx->pc = 0x1D8410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D840Cu;
    // 0x1d8410: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D840Cu, 0x1D8414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8414u;
label_1d8414:
    // 0x1d8414: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d8414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d8418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d841c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d8420: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1d8420u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d8424: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D8424u;
    SET_GPR_U32(ctx, 31, 0x1D842Cu);
    ctx->pc = 0x1D8428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8424u;
    // 0x1d8428: 0x202300a  movz        $a2, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D8424u, 0x1D842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D842Cu;
label_1d842c:
    // 0x1d842c: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d842cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d8430: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8430u;
    {
        const bool branch_taken_0x1d8430 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8430u;
        // 0x1d8434: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8430) {
            ctx->pc = 0x1D8440u;
            goto label_1d8440;
        }
    }
    ctx->pc = 0x1D8438u;
    // 0x1d8438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8438u;
    {
        const bool branch_taken_0x1d8438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8438u;
        // 0x1d843c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8438) {
            ctx->pc = 0x1D8444u;
            goto label_1d8444;
        }
    }
    ctx->pc = 0x1D8440u;
label_1d8440:
    // 0x1d8440: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d8440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8444:
    // 0x1d8444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8448: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D8448u;
    SET_GPR_U32(ctx, 31, 0x1D8450u);
    ctx->pc = 0x1D844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8448u;
    // 0x1d844c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D8448u, 0x1D8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8450u;
label_1d8450:
    // 0x1d8450: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d8450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d8454: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d8454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d845c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d845cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d8460: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1d8460u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d8464: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D8464u;
    SET_GPR_U32(ctx, 31, 0x1D846Cu);
    ctx->pc = 0x1D8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8464u;
    // 0x1d8468: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D8464u, 0x1D846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D846Cu;
label_1d846c:
    // 0x1d846c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d846cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8478: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8478u;
        // 0x1d847c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8480u;
}
