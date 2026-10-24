#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: checkDevilEvent__5cR409P7cEmWrap
// Address: 0x799500 - 0x799620
void checkDevilEvent__5cR409P7cEmWrap_0x799500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkDevilEvent__5cR409P7cEmWrap_0x799500");
#endif

    switch (ctx->pc) {
        case 0x799500u: goto label_799500;
        case 0x799504u: goto label_799504;
        case 0x799508u: goto label_799508;
        case 0x79950cu: goto label_79950c;
        case 0x799510u: goto label_799510;
        case 0x799514u: goto label_799514;
        case 0x799518u: goto label_799518;
        case 0x79951cu: goto label_79951c;
        case 0x799520u: goto label_799520;
        case 0x799524u: goto label_799524;
        case 0x799528u: goto label_799528;
        case 0x79952cu: goto label_79952c;
        case 0x799530u: goto label_799530;
        case 0x799534u: goto label_799534;
        case 0x799538u: goto label_799538;
        case 0x79953cu: goto label_79953c;
        case 0x799540u: goto label_799540;
        case 0x799544u: goto label_799544;
        case 0x799548u: goto label_799548;
        case 0x79954cu: goto label_79954c;
        case 0x799550u: goto label_799550;
        case 0x799554u: goto label_799554;
        case 0x799558u: goto label_799558;
        case 0x79955cu: goto label_79955c;
        case 0x799560u: goto label_799560;
        case 0x799564u: goto label_799564;
        case 0x799568u: goto label_799568;
        case 0x79956cu: goto label_79956c;
        case 0x799570u: goto label_799570;
        case 0x799574u: goto label_799574;
        case 0x799578u: goto label_799578;
        case 0x79957cu: goto label_79957c;
        case 0x799580u: goto label_799580;
        case 0x799584u: goto label_799584;
        case 0x799588u: goto label_799588;
        case 0x79958cu: goto label_79958c;
        case 0x799590u: goto label_799590;
        case 0x799594u: goto label_799594;
        case 0x799598u: goto label_799598;
        case 0x79959cu: goto label_79959c;
        case 0x7995a0u: goto label_7995a0;
        case 0x7995a4u: goto label_7995a4;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995acu: goto label_7995ac;
        case 0x7995b0u: goto label_7995b0;
        case 0x7995b4u: goto label_7995b4;
        case 0x7995b8u: goto label_7995b8;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995c0u: goto label_7995c0;
        case 0x7995c4u: goto label_7995c4;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995d0u: goto label_7995d0;
        case 0x7995d4u: goto label_7995d4;
        case 0x7995d8u: goto label_7995d8;
        case 0x7995dcu: goto label_7995dc;
        case 0x7995e0u: goto label_7995e0;
        case 0x7995e4u: goto label_7995e4;
        case 0x7995e8u: goto label_7995e8;
        case 0x7995ecu: goto label_7995ec;
        case 0x7995f0u: goto label_7995f0;
        case 0x7995f4u: goto label_7995f4;
        case 0x7995f8u: goto label_7995f8;
        case 0x7995fcu: goto label_7995fc;
        case 0x799600u: goto label_799600;
        case 0x799604u: goto label_799604;
        case 0x799608u: goto label_799608;
        case 0x79960cu: goto label_79960c;
        case 0x799610u: goto label_799610;
        case 0x799614u: goto label_799614;
        case 0x799618u: goto label_799618;
        case 0x79961cu: goto label_79961c;
        default: break;
    }

    ctx->pc = 0x799500u;

label_799500:
    // 0x799500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_799504:
    // 0x799504: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_799508:
    // 0x799508: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_79950c:
    // 0x79950c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79950cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_799510:
    // 0x799510: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_799514:
    // 0x799514: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_799518:
    // 0x799518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_79951c:
    // 0x79951c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79951cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_799520:
    // 0x799520: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_799524:
    // 0x799524: 0x10000005  b           . + 4 + (0x5 << 2)
label_799528:
    if (ctx->pc == 0x799528u) {
        ctx->pc = 0x799528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799524u;
        // 0x799528: 0x3c12005f  lui         $s2, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79952Cu;
        goto label_79952c;
    }
    ctx->pc = 0x799524u;
    {
        const bool branch_taken_0x799524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799524u;
        // 0x799528: 0x3c12005f  lui         $s2, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799524) {
            ctx->pc = 0x79953Cu;
            goto label_79953c;
        }
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0x0  nop
    ctx->pc = 0x79952cu;
    // NOP
label_799530:
    // 0x799530: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799534:
    // 0x799534: 0xc0b56a8  jal         func_2D5AA0
label_799538:
    if (ctx->pc == 0x799538u) {
        ctx->pc = 0x799538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799534u;
        // 0x799538: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79953Cu;
        goto label_79953c;
    }
    ctx->pc = 0x799534u;
    SET_GPR_U32(ctx, 31, 0x79953Cu);
    ctx->pc = 0x799538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799534u;
    // 0x799538: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799534u, 0x79953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79953Cu;
label_79953c:
    // 0x79953c: 0xc1e6512  jal         func_799448
label_799540:
    if (ctx->pc == 0x799540u) {
        ctx->pc = 0x799540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79953Cu;
        // 0x799540: 0x8e24c180  lw          $a0, -0x3E80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799544u;
        goto label_799544;
    }
    ctx->pc = 0x79953Cu;
    SET_GPR_U32(ctx, 31, 0x799544u);
    ctx->pc = 0x799540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79953Cu;
    // 0x799540: 0x8e24c180  lw          $a0, -0x3E80($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799448u, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799548:
    // 0x799548: 0x10c0fff9  beqz        $a2, . + 4 + (-0x7 << 2)
label_79954c:
    if (ctx->pc == 0x79954Cu) {
        ctx->pc = 0x79954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799548u;
        // 0x79954c: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799550u;
        goto label_799550;
    }
    ctx->pc = 0x799548u;
    {
        const bool branch_taken_0x799548 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799548u;
        // 0x79954c: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799548) {
            ctx->pc = 0x799530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799530;
        }
    }
    ctx->pc = 0x799550u;
label_799550:
    // 0x799550: 0xc09cd90  jal         func_273640
label_799554:
    if (ctx->pc == 0x799554u) {
        ctx->pc = 0x799554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799550u;
        // 0x799554: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799558u;
        goto label_799558;
    }
    ctx->pc = 0x799550u;
    SET_GPR_U32(ctx, 31, 0x799558u);
    ctx->pc = 0x799554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799550u;
    // 0x799554: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273640u, 0x799550u, 0x799558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799558u;
label_799558:
    // 0x799558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79955c:
    // 0x79955c: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
label_799560:
    if (ctx->pc == 0x799560u) {
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799564u;
        goto label_799564;
    }
    ctx->pc = 0x79955Cu;
    {
        const bool branch_taken_0x79955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79955c) {
            ctx->pc = 0x799530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799530;
        }
    }
    ctx->pc = 0x799564u;
label_799564:
    // 0x799564: 0x8e448658  lw          $a0, -0x79A8($s2)
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799568:
    // 0x799568: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_79956c:
    // 0x79956c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79956cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799570:
    // 0x799570: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_799574:
    // 0x799574: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_799578:
    // 0x799578: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_79957c:
    // 0x79957c: 0xc0b0e6c  jal         func_2C39B0
label_799580:
    if (ctx->pc == 0x799580u) {
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799584u;
        goto label_799584;
    }
    ctx->pc = 0x79957Cu;
    SET_GPR_U32(ctx, 31, 0x799584u);
    ctx->pc = 0x799580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79957Cu;
    // 0x799580: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79957Cu, 0x799584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799584u;
label_799584:
    // 0x799584: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799588:
    // 0x799588: 0xc0a56f0  jal         func_295BC0
label_79958c:
    if (ctx->pc == 0x79958Cu) {
        ctx->pc = 0x79958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799588u;
        // 0x79958c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799590u;
        goto label_799590;
    }
    ctx->pc = 0x799588u;
    SET_GPR_U32(ctx, 31, 0x799590u);
    ctx->pc = 0x79958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799588u;
    // 0x79958c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799588u, 0x799590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799590u;
label_799590:
    // 0x799590: 0xc1e6512  jal         func_799448
label_799594:
    if (ctx->pc == 0x799594u) {
        ctx->pc = 0x799594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799590u;
        // 0x799594: 0x8e24c180  lw          $a0, -0x3E80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799598u;
        goto label_799598;
    }
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x8e24c180  lw          $a0, -0x3E80($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799448u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79959c:
    // 0x79959c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_7995a0:
    if (ctx->pc == 0x7995A0u) {
        ctx->pc = 0x7995A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79959Cu;
        // 0x7995a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A4u;
        goto label_7995a4;
    }
    ctx->pc = 0x79959Cu;
    {
        const bool branch_taken_0x79959c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79959Cu;
        // 0x7995a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79959c) {
            ctx->pc = 0x7995CCu;
            goto label_7995cc;
        }
    }
    ctx->pc = 0x7995A4u;
label_7995a4:
    // 0x7995a4: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_7995a8:
    // 0x7995a8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_7995ac:
    // 0x7995ac: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_7995b0:
    // 0x7995b0: 0x60f809  jalr        $v1
label_7995b4:
    if (ctx->pc == 0x7995B4u) {
        ctx->pc = 0x7995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B0u;
        // 0x7995b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995B8u;
        goto label_7995b8;
    }
    ctx->pc = 0x7995B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7995B8u);
        ctx->pc = 0x7995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B0u;
        // 0x7995b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995B0u, 0x7995B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7995B8u;
label_7995b8:
    // 0x7995b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_7995bc:
    if (ctx->pc == 0x7995BCu) {
        ctx->pc = 0x7995C0u;
        goto label_7995c0;
    }
    ctx->pc = 0x7995B8u;
    {
        const bool branch_taken_0x7995b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7995b8) {
            ctx->pc = 0x7995CCu;
            goto label_7995cc;
        }
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7995c4:
    // 0x7995c4: 0xc0b56a8  jal         func_2D5AA0
label_7995c8:
    if (ctx->pc == 0x7995C8u) {
        ctx->pc = 0x7995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C4u;
        // 0x7995c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995CCu;
        goto label_7995cc;
    }
    ctx->pc = 0x7995C4u;
    SET_GPR_U32(ctx, 31, 0x7995CCu);
    ctx->pc = 0x7995C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C4u;
    // 0x7995c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7995C4u, 0x7995CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0xc1e6512  jal         func_799448
label_7995d0:
    if (ctx->pc == 0x7995D0u) {
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0x8e24c180  lw          $a0, -0x3E80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995D4u;
        goto label_7995d4;
    }
    ctx->pc = 0x7995CCu;
    SET_GPR_U32(ctx, 31, 0x7995D4u);
    ctx->pc = 0x7995D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995CCu;
    // 0x7995d0: 0x8e24c180  lw          $a0, -0x3E80($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799448u, 0x7995CCu, 0x7995D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7995d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7995d8:
    // 0x7995d8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_7995dc:
    if (ctx->pc == 0x7995DCu) {
        ctx->pc = 0x7995E0u;
        goto label_7995e0;
    }
    ctx->pc = 0x7995D8u;
    {
        const bool branch_taken_0x7995d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x7995d8) {
            ctx->pc = 0x7995F0u;
            goto label_7995f0;
        }
    }
    ctx->pc = 0x7995E0u;
label_7995e0:
    // 0x7995e0: 0xc09cd90  jal         func_273640
label_7995e4:
    if (ctx->pc == 0x7995E4u) {
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E8u;
        goto label_7995e8;
    }
    ctx->pc = 0x7995E0u;
    SET_GPR_U32(ctx, 31, 0x7995E8u);
    ctx->pc = 0x7995E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E0u;
    // 0x7995e4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273640u, 0x7995E0u, 0x7995E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E8u;
label_7995e8:
    // 0x7995e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_7995ec:
    if (ctx->pc == 0x7995ECu) {
        ctx->pc = 0x7995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E8u;
        // 0x7995ec: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995F0u;
        goto label_7995f0;
    }
    ctx->pc = 0x7995E8u;
    {
        const bool branch_taken_0x7995e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E8u;
        // 0x7995ec: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995e8) {
            ctx->pc = 0x7995C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995c0;
        }
    }
    ctx->pc = 0x7995F0u;
label_7995f0:
    // 0x7995f0: 0xc0b0f04  jal         func_2C3C10
label_7995f4:
    if (ctx->pc == 0x7995F4u) {
        ctx->pc = 0x7995F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F0u;
        // 0x7995f4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995F8u;
        goto label_7995f8;
    }
    ctx->pc = 0x7995F0u;
    SET_GPR_U32(ctx, 31, 0x7995F8u);
    ctx->pc = 0x7995F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F0u;
    // 0x7995f4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7995F0u, 0x7995F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F8u;
label_7995f8:
    // 0x7995f8: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_7995fc:
    // 0x7995fc: 0xc0b5692  jal         func_2D5A48
label_799600:
    if (ctx->pc == 0x799600u) {
        ctx->pc = 0x799600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995FCu;
        // 0x799600: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799604u;
        goto label_799604;
    }
    ctx->pc = 0x7995FCu;
    SET_GPR_U32(ctx, 31, 0x799604u);
    ctx->pc = 0x799600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995FCu;
    // 0x799600: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995FCu, 0x799604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799604u;
label_799604:
    // 0x799604: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799608:
    // 0x799608: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79960c:
    // 0x79960c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79960cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799610:
    // 0x799610: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x799610u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799614:
    // 0x799614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799618:
    // 0x799618: 0x3e00008  jr          $ra
label_79961c:
    if (ctx->pc == 0x79961Cu) {
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799620u;
        goto label_fallthrough_0x799618;
    }
    ctx->pc = 0x799618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799618:
    ctx->pc = 0x799620u;
}
} // namespace gh_r409
