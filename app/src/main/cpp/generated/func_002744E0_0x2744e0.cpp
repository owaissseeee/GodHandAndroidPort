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

// Function: func_002744E0
// Address: 0x2744e0 - 0x274d18
void func_002744E0_0x2744e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002744E0_0x2744e0");
#endif

    switch (ctx->pc) {
        case 0x274528u: goto label_274528;
        case 0x274540u: goto label_274540;
        case 0x274554u: goto label_274554;
        case 0x274564u: goto label_274564;
        case 0x27459cu: goto label_27459c;
        case 0x2745b0u: goto label_2745b0;
        case 0x2745c0u: goto label_2745c0;
        case 0x2745d0u: goto label_2745d0;
        case 0x2745f0u: goto label_2745f0;
        case 0x274614u: goto label_274614;
        case 0x274624u: goto label_274624;
        case 0x274634u: goto label_274634;
        case 0x27464cu: goto label_27464c;
        case 0x27465cu: goto label_27465c;
        case 0x274680u: goto label_274680;
        case 0x274690u: goto label_274690;
        case 0x2746a0u: goto label_2746a0;
        case 0x2746e8u: goto label_2746e8;
        case 0x274700u: goto label_274700;
        case 0x274718u: goto label_274718;
        case 0x274730u: goto label_274730;
        case 0x274748u: goto label_274748;
        case 0x274758u: goto label_274758;
        case 0x2747a0u: goto label_2747a0;
        case 0x2747b8u: goto label_2747b8;
        case 0x2747d0u: goto label_2747d0;
        case 0x2747e8u: goto label_2747e8;
        case 0x2747f8u: goto label_2747f8;
        case 0x274840u: goto label_274840;
        case 0x274858u: goto label_274858;
        case 0x274870u: goto label_274870;
        case 0x274888u: goto label_274888;
        case 0x2748b0u: goto label_2748b0;
        case 0x2748c8u: goto label_2748c8;
        case 0x2748dcu: goto label_2748dc;
        case 0x2748ecu: goto label_2748ec;
        case 0x274924u: goto label_274924;
        case 0x274938u: goto label_274938;
        case 0x274948u: goto label_274948;
        case 0x274958u: goto label_274958;
        case 0x274968u: goto label_274968;
        case 0x2749a4u: goto label_2749a4;
        case 0x2749b8u: goto label_2749b8;
        case 0x2749c8u: goto label_2749c8;
        case 0x2749d8u: goto label_2749d8;
        case 0x274a14u: goto label_274a14;
        case 0x274a28u: goto label_274a28;
        case 0x274a38u: goto label_274a38;
        case 0x274a48u: goto label_274a48;
        case 0x274a84u: goto label_274a84;
        case 0x274a98u: goto label_274a98;
        case 0x274aa8u: goto label_274aa8;
        case 0x274ab8u: goto label_274ab8;
        case 0x274af4u: goto label_274af4;
        case 0x274b08u: goto label_274b08;
        case 0x274b18u: goto label_274b18;
        case 0x274b28u: goto label_274b28;
        case 0x274b64u: goto label_274b64;
        case 0x274b78u: goto label_274b78;
        case 0x274b88u: goto label_274b88;
        case 0x274b98u: goto label_274b98;
        case 0x274bbcu: goto label_274bbc;
        case 0x274bccu: goto label_274bcc;
        case 0x274bf0u: goto label_274bf0;
        case 0x274c00u: goto label_274c00;
        case 0x274c48u: goto label_274c48;
        case 0x274c60u: goto label_274c60;
        case 0x274c78u: goto label_274c78;
        case 0x274c90u: goto label_274c90;
        case 0x274cbcu: goto label_274cbc;
        case 0x274cd4u: goto label_274cd4;
        case 0x274d00u: goto label_274d00;
        default: break;
    }

    ctx->pc = 0x2744e0u;

    // 0x2744e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2744e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2744e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2744e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2744e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2744e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2744ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2744ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2744f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2744f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2744f4: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2744f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2744f8: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x2744f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x2744fc: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x2744fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x274500: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x274500u;
    {
        const bool branch_taken_0x274500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274500u;
        // 0x274504: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274500) {
            ctx->pc = 0x274520u;
            goto label_274520;
        }
    }
    ctx->pc = 0x274508u;
    // 0x274508: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x274508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27450c: 0x24427380  addiu       $v0, $v0, 0x7380
    ctx->pc = 0x27450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29568));
    // 0x274510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274514: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x274514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274518: 0x800008  jr          $a0
    ctx->pc = 0x274518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274520u: goto label_274520;
            case 0x27455Cu: goto label_27455c;
            case 0x2745D8u: goto label_2745d8;
            case 0x274698u: goto label_274698;
            case 0x274750u: goto label_274750;
            case 0x2747F0u: goto label_2747f0;
            case 0x2748A8u: goto label_2748a8;
            case 0x2748E4u: goto label_2748e4;
            case 0x274960u: goto label_274960;
            case 0x2749D0u: goto label_2749d0;
            case 0x274A40u: goto label_274a40;
            case 0x274AB0u: goto label_274ab0;
            case 0x274B20u: goto label_274b20;
            case 0x274B90u: goto label_274b90;
            case 0x274BD4u: goto label_274bd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274518u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274520u;
label_274520:
    // 0x274520: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x274520u;
    SET_GPR_U32(ctx, 31, 0x274528u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x274520u, 0x274528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274528u;
label_274528:
    // 0x274528: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x274528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27452c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27452Cu;
    {
        const bool branch_taken_0x27452c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27452Cu;
        // 0x274530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27452c) {
            ctx->pc = 0x274548u;
            goto label_274548;
        }
    }
    ctx->pc = 0x274534u;
    // 0x274534: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274534u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x274538: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274538u;
    SET_GPR_U32(ctx, 31, 0x274540u);
    ctx->pc = 0x27453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274538u;
    // 0x27453c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274538u, 0x274540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274540u;
label_274540:
    // 0x274540: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x274540u;
    {
        const bool branch_taken_0x274540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274540u;
        // 0x274544: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274540) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274548u;
label_274548:
    // 0x274548: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274548u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x27454c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x27454Cu;
    SET_GPR_U32(ctx, 31, 0x274554u);
    ctx->pc = 0x274550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27454Cu;
    // 0x274550: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x27454Cu, 0x274554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274554u;
label_274554:
    // 0x274554: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x274554u;
    {
        const bool branch_taken_0x274554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274554u;
        // 0x274558: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274554) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x27455Cu;
label_27455c:
    // 0x27455c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x27455Cu;
    SET_GPR_U32(ctx, 31, 0x274564u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x27455Cu, 0x274564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274564u;
label_274564:
    // 0x274564: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x274564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x274568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27456c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27456Cu;
    {
        const bool branch_taken_0x27456c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27456Cu;
        // 0x274570: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27456c) {
            ctx->pc = 0x2745A4u;
            goto label_2745a4;
        }
    }
    ctx->pc = 0x274574u;
    // 0x274574: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x274574u;
    {
        const bool branch_taken_0x274574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274574u;
        // 0x274578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274574) {
            ctx->pc = 0x274594u;
            goto label_274594;
        }
    }
    ctx->pc = 0x27457Cu;
    // 0x27457c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274580: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x274580u;
    {
        const bool branch_taken_0x274580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x274580) {
            ctx->pc = 0x2745B8u;
            goto label_2745b8;
        }
    }
    ctx->pc = 0x274588u;
    // 0x274588: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x274588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27458c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27458Cu;
    {
        const bool branch_taken_0x27458c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27458c) {
            ctx->pc = 0x2745C8u;
            goto label_2745c8;
        }
    }
    ctx->pc = 0x274594u;
label_274594:
    // 0x274594: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274594u;
    SET_GPR_U32(ctx, 31, 0x27459Cu);
    ctx->pc = 0x274598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274594u;
    // 0x274598: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274594u, 0x27459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27459Cu;
label_27459c:
    // 0x27459c: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x27459Cu;
    {
        const bool branch_taken_0x27459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27459Cu;
        // 0x2745a0: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27459c) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2745A4u;
label_2745a4:
    // 0x2745a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2745a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745a8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2745A8u;
    SET_GPR_U32(ctx, 31, 0x2745B0u);
    ctx->pc = 0x2745ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745A8u;
    // 0x2745ac: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2745A8u, 0x2745B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2745B0u;
label_2745b0:
    // 0x2745b0: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x2745B0u;
    {
        const bool branch_taken_0x2745b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745B0u;
        // 0x2745b4: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745b0) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2745B8u;
label_2745b8:
    // 0x2745b8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2745B8u;
    SET_GPR_U32(ctx, 31, 0x2745C0u);
    ctx->pc = 0x2745BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745B8u;
    // 0x2745bc: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2745B8u, 0x2745C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2745C0u;
label_2745c0:
    // 0x2745c0: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x2745C0u;
    {
        const bool branch_taken_0x2745c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745C0u;
        // 0x2745c4: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745c0) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2745C8u;
label_2745c8:
    // 0x2745c8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2745C8u;
    SET_GPR_U32(ctx, 31, 0x2745D0u);
    ctx->pc = 0x2745CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745C8u;
    // 0x2745cc: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2745C8u, 0x2745D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2745D0u;
label_2745d0:
    // 0x2745d0: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x2745D0u;
    {
        const bool branch_taken_0x2745d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745D0u;
        // 0x2745d4: 0x2442000f  addiu       $v0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745d0) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2745D8u;
label_2745d8:
    // 0x2745d8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2745d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2745dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2745dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2745e0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2745E0u;
    {
        const bool branch_taken_0x2745e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2745e0) {
            ctx->pc = 0x27462Cu;
            goto label_27462c;
        }
    }
    ctx->pc = 0x2745E8u;
    // 0x2745e8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2745E8u;
    SET_GPR_U32(ctx, 31, 0x2745F0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2745E8u, 0x2745F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2745F0u;
label_2745f0:
    // 0x2745f0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2745f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2745f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2745F4u;
    {
        const bool branch_taken_0x2745f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745F4u;
        // 0x2745f8: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745f4) {
            ctx->pc = 0x274608u;
            goto label_274608;
        }
    }
    ctx->pc = 0x2745FCu;
    // 0x2745fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2745fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274600: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274600u;
    {
        const bool branch_taken_0x274600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274600u;
        // 0x274604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274600) {
            ctx->pc = 0x27461Cu;
            goto label_27461c;
        }
    }
    ctx->pc = 0x274608u;
label_274608:
    // 0x274608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27460c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x27460Cu;
    SET_GPR_U32(ctx, 31, 0x274614u);
    ctx->pc = 0x274610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27460Cu;
    // 0x274610: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x27460Cu, 0x274614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274614u;
label_274614:
    // 0x274614: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x274614u;
    {
        const bool branch_taken_0x274614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274614u;
        // 0x274618: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274614) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x27461Cu;
label_27461c:
    // 0x27461c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x27461Cu;
    SET_GPR_U32(ctx, 31, 0x274624u);
    ctx->pc = 0x274620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27461Cu;
    // 0x274620: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x27461Cu, 0x274624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274624u;
label_274624:
    // 0x274624: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x274624u;
    {
        const bool branch_taken_0x274624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274624u;
        // 0x274628: 0x2442000f  addiu       $v0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274624) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x27462Cu;
label_27462c:
    // 0x27462c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x27462Cu;
    SET_GPR_U32(ctx, 31, 0x274634u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x27462Cu, 0x274634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274634u;
label_274634:
    // 0x274634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x274634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x274638: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274638u;
    {
        const bool branch_taken_0x274638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274638u;
        // 0x27463c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274638) {
            ctx->pc = 0x274654u;
            goto label_274654;
        }
    }
    ctx->pc = 0x274640u;
    // 0x274640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274644: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274644u;
    SET_GPR_U32(ctx, 31, 0x27464Cu);
    ctx->pc = 0x274648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274644u;
    // 0x274648: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274644u, 0x27464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27464Cu;
label_27464c:
    // 0x27464c: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x27464Cu;
    {
        const bool branch_taken_0x27464c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27464Cu;
        // 0x274650: 0x2442000f  addiu       $v0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27464c) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274654u;
label_274654:
    // 0x274654: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x274654u;
    SET_GPR_U32(ctx, 31, 0x27465Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x274654u, 0x27465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27465Cu;
label_27465c:
    // 0x27465c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x27465cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x274660: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x274660u;
    {
        const bool branch_taken_0x274660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274660u;
        // 0x274664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274660) {
            ctx->pc = 0x274678u;
            goto label_274678;
        }
    }
    ctx->pc = 0x274668u;
    // 0x274668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27466c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27466Cu;
    {
        const bool branch_taken_0x27466c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27466c) {
            ctx->pc = 0x274688u;
            goto label_274688;
        }
    }
    ctx->pc = 0x274674u;
    // 0x274674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_274678:
    // 0x274678: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274678u;
    SET_GPR_U32(ctx, 31, 0x274680u);
    ctx->pc = 0x27467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274678u;
    // 0x27467c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274678u, 0x274680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274680u;
label_274680:
    // 0x274680: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x274680u;
    {
        const bool branch_taken_0x274680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274680u;
        // 0x274684: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274680) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274688u;
label_274688:
    // 0x274688: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274688u;
    SET_GPR_U32(ctx, 31, 0x274690u);
    ctx->pc = 0x27468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274688u;
    // 0x27468c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274688u, 0x274690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274690u;
label_274690:
    // 0x274690: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x274690u;
    {
        const bool branch_taken_0x274690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274690u;
        // 0x274694: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274690) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274698u;
label_274698:
    // 0x274698: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x274698u;
    SET_GPR_U32(ctx, 31, 0x2746A0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x274698u, 0x2746A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2746A0u;
label_2746a0:
    // 0x2746a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2746a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2746a4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2746a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2746a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2746A8u;
    {
        const bool branch_taken_0x2746a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2746a8) {
            ctx->pc = 0x2746ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2746A8u;
            // 0x2746ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2746B0u;
            goto label_2746b0;
        }
    }
    ctx->pc = 0x2746B0u;
label_2746b0:
    // 0x2746b0: 0x2010  mfhi        $a0
    ctx->pc = 0x2746b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2746b4: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x2746b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2746b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2746B8u;
    {
        const bool branch_taken_0x2746b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746B8u;
        // 0x2746bc: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746b8) {
            ctx->pc = 0x2746D8u;
            goto label_2746d8;
        }
    }
    ctx->pc = 0x2746C0u;
    // 0x2746c0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2746c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x2746c4: 0x24427580  addiu       $v0, $v0, 0x7580
    ctx->pc = 0x2746c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30080));
    // 0x2746c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2746c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2746cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2746ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2746d0: 0x800008  jr          $a0
    ctx->pc = 0x2746D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2746D8u: goto label_2746d8;
            case 0x2746F0u: goto label_2746f0;
            case 0x274708u: goto label_274708;
            case 0x274720u: goto label_274720;
            case 0x274738u: goto label_274738;
            case 0x274C80u: goto label_274c80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2746D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2746D8u;
label_2746d8:
    // 0x2746d8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2746d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2746dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2746dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746e0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2746E0u;
    SET_GPR_U32(ctx, 31, 0x2746E8u);
    ctx->pc = 0x2746E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2746E0u;
    // 0x2746e4: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2746E0u, 0x2746E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2746E8u;
label_2746e8:
    // 0x2746e8: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x2746E8u;
    {
        const bool branch_taken_0x2746e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746E8u;
        // 0x2746ec: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746e8) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2746F0u;
label_2746f0:
    // 0x2746f0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2746f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2746f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2746f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746f8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2746F8u;
    SET_GPR_U32(ctx, 31, 0x274700u);
    ctx->pc = 0x2746FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2746F8u;
    // 0x2746fc: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2746F8u, 0x274700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274700u;
label_274700:
    // 0x274700: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x274700u;
    {
        const bool branch_taken_0x274700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274700u;
        // 0x274704: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274700) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274708u;
label_274708:
    // 0x274708: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274708u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x27470c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274710: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274710u;
    SET_GPR_U32(ctx, 31, 0x274718u);
    ctx->pc = 0x274714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274710u;
    // 0x274714: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274710u, 0x274718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274718u;
label_274718:
    // 0x274718: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x274718u;
    {
        const bool branch_taken_0x274718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274718u;
        // 0x27471c: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274718) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274720u;
label_274720:
    // 0x274720: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274720u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x274724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274728: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274728u;
    SET_GPR_U32(ctx, 31, 0x274730u);
    ctx->pc = 0x27472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274728u;
    // 0x27472c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274728u, 0x274730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274730u;
label_274730:
    // 0x274730: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x274730u;
    {
        const bool branch_taken_0x274730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274730u;
        // 0x274734: 0x2442000f  addiu       $v0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274730) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274738u;
label_274738:
    // 0x274738: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274738u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x27473c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27473cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274740: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274740u;
    SET_GPR_U32(ctx, 31, 0x274748u);
    ctx->pc = 0x274744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274740u;
    // 0x274744: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274740u, 0x274748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274748u;
label_274748:
    // 0x274748: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x274748u;
    {
        const bool branch_taken_0x274748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274748u;
        // 0x27474c: 0x24420011  addiu       $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274748) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274750u;
label_274750:
    // 0x274750: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x274750u;
    SET_GPR_U32(ctx, 31, 0x274758u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x274750u, 0x274758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274758u;
label_274758:
    // 0x274758: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x274758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27475c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x27475cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274760: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274760u;
    {
        const bool branch_taken_0x274760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274760) {
            ctx->pc = 0x274764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274760u;
            // 0x274764: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x274768u;
            goto label_274768;
        }
    }
    ctx->pc = 0x274768u;
label_274768:
    // 0x274768: 0x2010  mfhi        $a0
    ctx->pc = 0x274768u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x27476c: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x27476cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x274770: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274770u;
    {
        const bool branch_taken_0x274770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274770u;
        // 0x274774: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274770) {
            ctx->pc = 0x274790u;
            goto label_274790;
        }
    }
    ctx->pc = 0x274778u;
    // 0x274778: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x274778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x27477c: 0x244275a0  addiu       $v0, $v0, 0x75A0
    ctx->pc = 0x27477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30112));
    // 0x274780: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274784: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x274784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274788: 0x800008  jr          $a0
    ctx->pc = 0x274788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274790u: goto label_274790;
            case 0x2747A8u: goto label_2747a8;
            case 0x2747C0u: goto label_2747c0;
            case 0x2747D8u: goto label_2747d8;
            case 0x274C80u: goto label_274c80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274788u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274790u;
label_274790:
    // 0x274790: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274790u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x274794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274798: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274798u;
    SET_GPR_U32(ctx, 31, 0x2747A0u);
    ctx->pc = 0x27479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274798u;
    // 0x27479c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274798u, 0x2747A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747A0u;
label_2747a0:
    // 0x2747a0: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x2747A0u;
    {
        const bool branch_taken_0x2747a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747A0u;
        // 0x2747a4: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747a0) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2747A8u;
label_2747a8:
    // 0x2747a8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2747a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2747ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2747acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747b0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2747B0u;
    SET_GPR_U32(ctx, 31, 0x2747B8u);
    ctx->pc = 0x2747B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2747B0u;
    // 0x2747b4: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2747B0u, 0x2747B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747B8u;
label_2747b8:
    // 0x2747b8: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x2747B8u;
    {
        const bool branch_taken_0x2747b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747B8u;
        // 0x2747bc: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747b8) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2747C0u;
label_2747c0:
    // 0x2747c0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2747c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2747c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2747c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747c8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2747C8u;
    SET_GPR_U32(ctx, 31, 0x2747D0u);
    ctx->pc = 0x2747CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2747C8u;
    // 0x2747cc: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2747C8u, 0x2747D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747D0u;
label_2747d0:
    // 0x2747d0: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x2747D0u;
    {
        const bool branch_taken_0x2747d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747D0u;
        // 0x2747d4: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747d0) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2747D8u;
label_2747d8:
    // 0x2747d8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2747d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2747dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2747dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747e0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2747E0u;
    SET_GPR_U32(ctx, 31, 0x2747E8u);
    ctx->pc = 0x2747E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2747E0u;
    // 0x2747e4: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2747E0u, 0x2747E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747E8u;
label_2747e8:
    // 0x2747e8: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x2747E8u;
    {
        const bool branch_taken_0x2747e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747E8u;
        // 0x2747ec: 0x2442000f  addiu       $v0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747e8) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2747F0u;
label_2747f0:
    // 0x2747f0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2747F0u;
    SET_GPR_U32(ctx, 31, 0x2747F8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2747F0u, 0x2747F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747F8u;
label_2747f8:
    // 0x2747f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2747f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2747fc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2747fcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274800: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274800u;
    {
        const bool branch_taken_0x274800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274800) {
            ctx->pc = 0x274804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274800u;
            // 0x274804: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x274808u;
            goto label_274808;
        }
    }
    ctx->pc = 0x274808u;
label_274808:
    // 0x274808: 0x2010  mfhi        $a0
    ctx->pc = 0x274808u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x27480c: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x27480cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x274810: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274810u;
    {
        const bool branch_taken_0x274810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274810u;
        // 0x274814: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274810) {
            ctx->pc = 0x274830u;
            goto label_274830;
        }
    }
    ctx->pc = 0x274818u;
    // 0x274818: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x274818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x27481c: 0x244275c0  addiu       $v0, $v0, 0x75C0
    ctx->pc = 0x27481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30144));
    // 0x274820: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274824: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x274824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274828: 0x800008  jr          $a0
    ctx->pc = 0x274828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274830u: goto label_274830;
            case 0x274848u: goto label_274848;
            case 0x274860u: goto label_274860;
            case 0x274878u: goto label_274878;
            case 0x274890u: goto label_274890;
            case 0x274C80u: goto label_274c80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274828u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274830u;
label_274830:
    // 0x274830: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274830u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x274834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274838: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274838u;
    SET_GPR_U32(ctx, 31, 0x274840u);
    ctx->pc = 0x27483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274838u;
    // 0x27483c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274838u, 0x274840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274840u;
label_274840:
    // 0x274840: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x274840u;
    {
        const bool branch_taken_0x274840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274840u;
        // 0x274844: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274840) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274848u;
label_274848:
    // 0x274848: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x27484c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27484cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274850: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274850u;
    SET_GPR_U32(ctx, 31, 0x274858u);
    ctx->pc = 0x274854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274850u;
    // 0x274854: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274850u, 0x274858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274858u;
label_274858:
    // 0x274858: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x274858u;
    {
        const bool branch_taken_0x274858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274858u;
        // 0x27485c: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274858) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274860u;
label_274860:
    // 0x274860: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274860u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x274864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274868: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274868u;
    SET_GPR_U32(ctx, 31, 0x274870u);
    ctx->pc = 0x27486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274868u;
    // 0x27486c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274868u, 0x274870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274870u;
label_274870:
    // 0x274870: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x274870u;
    {
        const bool branch_taken_0x274870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274870u;
        // 0x274874: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274870) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274878u;
label_274878:
    // 0x274878: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274878u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x27487c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274880: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274880u;
    SET_GPR_U32(ctx, 31, 0x274888u);
    ctx->pc = 0x274884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274880u;
    // 0x274884: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274880u, 0x274888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274888u;
label_274888:
    // 0x274888: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x274888u;
    {
        const bool branch_taken_0x274888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274888u;
        // 0x27488c: 0x2442000f  addiu       $v0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274888) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274890u;
label_274890:
    // 0x274890: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x274890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x274894: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x274894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274898: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x274898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27489c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27489cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2748a0: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x2748A0u;
    {
        const bool branch_taken_0x2748a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748A0u;
        // 0x2748a4: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748a0) {
            ctx->pc = 0x274CA8u;
            goto label_274ca8;
        }
    }
    ctx->pc = 0x2748A8u;
label_2748a8:
    // 0x2748a8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2748A8u;
    SET_GPR_U32(ctx, 31, 0x2748B0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2748A8u, 0x2748B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2748B0u;
label_2748b0:
    // 0x2748b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2748b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2748b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2748B4u;
    {
        const bool branch_taken_0x2748b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748B4u;
        // 0x2748b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748b4) {
            ctx->pc = 0x2748D0u;
            goto label_2748d0;
        }
    }
    ctx->pc = 0x2748BCu;
    // 0x2748bc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2748bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2748c0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2748C0u;
    SET_GPR_U32(ctx, 31, 0x2748C8u);
    ctx->pc = 0x2748C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2748C0u;
    // 0x2748c4: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2748C0u, 0x2748C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2748C8u;
label_2748c8:
    // 0x2748c8: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x2748C8u;
    {
        const bool branch_taken_0x2748c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748C8u;
        // 0x2748cc: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748c8) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2748D0u;
label_2748d0:
    // 0x2748d0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2748d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2748d4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2748D4u;
    SET_GPR_U32(ctx, 31, 0x2748DCu);
    ctx->pc = 0x2748D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2748D4u;
    // 0x2748d8: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2748D4u, 0x2748DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2748DCu;
label_2748dc:
    // 0x2748dc: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x2748DCu;
    {
        const bool branch_taken_0x2748dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748DCu;
        // 0x2748e0: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748dc) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2748E4u;
label_2748e4:
    // 0x2748e4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2748E4u;
    SET_GPR_U32(ctx, 31, 0x2748ECu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2748E4u, 0x2748ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2748ECu;
label_2748ec:
    // 0x2748ec: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2748ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2748f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2748f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2748f4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2748F4u;
    {
        const bool branch_taken_0x2748f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2748F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748F4u;
        // 0x2748f8: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748f4) {
            ctx->pc = 0x27492Cu;
            goto label_27492c;
        }
    }
    ctx->pc = 0x2748FCu;
    // 0x2748fc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2748FCu;
    {
        const bool branch_taken_0x2748fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748FCu;
        // 0x274900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748fc) {
            ctx->pc = 0x27491Cu;
            goto label_27491c;
        }
    }
    ctx->pc = 0x274904u;
    // 0x274904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274908: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x274908u;
    {
        const bool branch_taken_0x274908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x274908) {
            ctx->pc = 0x274940u;
            goto label_274940;
        }
    }
    ctx->pc = 0x274910u;
    // 0x274910: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x274910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274914: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x274914u;
    {
        const bool branch_taken_0x274914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x274914) {
            ctx->pc = 0x274950u;
            goto label_274950;
        }
    }
    ctx->pc = 0x27491Cu;
label_27491c:
    // 0x27491c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x27491Cu;
    SET_GPR_U32(ctx, 31, 0x274924u);
    ctx->pc = 0x274920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27491Cu;
    // 0x274920: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x27491Cu, 0x274924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274924u;
label_274924:
    // 0x274924: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x274924u;
    {
        const bool branch_taken_0x274924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274924u;
        // 0x274928: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274924) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x27492Cu;
label_27492c:
    // 0x27492c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274930: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274930u;
    SET_GPR_U32(ctx, 31, 0x274938u);
    ctx->pc = 0x274934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274930u;
    // 0x274934: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274930u, 0x274938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274938u;
label_274938:
    // 0x274938: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x274938u;
    {
        const bool branch_taken_0x274938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274938u;
        // 0x27493c: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274938) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274940u;
label_274940:
    // 0x274940: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274940u;
    SET_GPR_U32(ctx, 31, 0x274948u);
    ctx->pc = 0x274944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274940u;
    // 0x274944: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274940u, 0x274948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274948u;
label_274948:
    // 0x274948: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x274948u;
    {
        const bool branch_taken_0x274948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274948u;
        // 0x27494c: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274948) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274950u;
label_274950:
    // 0x274950: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274950u;
    SET_GPR_U32(ctx, 31, 0x274958u);
    ctx->pc = 0x274954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274950u;
    // 0x274954: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274950u, 0x274958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274958u;
label_274958:
    // 0x274958: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x274958u;
    {
        const bool branch_taken_0x274958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274958u;
        // 0x27495c: 0x2442000f  addiu       $v0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274958) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274960u;
label_274960:
    // 0x274960: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x274960u;
    SET_GPR_U32(ctx, 31, 0x274968u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x274960u, 0x274968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274968u;
label_274968:
    // 0x274968: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x274968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27496c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27496cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274970: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x274970u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274974: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274974u;
    {
        const bool branch_taken_0x274974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274974) {
            ctx->pc = 0x274978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274974u;
            // 0x274978: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27497Cu;
            goto label_27497c;
        }
    }
    ctx->pc = 0x27497Cu;
label_27497c:
    // 0x27497c: 0x2810  mfhi        $a1
    ctx->pc = 0x27497cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x274980: 0x10a4000a  beq         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x274980u;
    {
        const bool branch_taken_0x274980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x274984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274980u;
        // 0x274984: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274980) {
            ctx->pc = 0x2749ACu;
            goto label_2749ac;
        }
    }
    ctx->pc = 0x274988u;
    // 0x274988: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274988u;
    {
        const bool branch_taken_0x274988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274988u;
        // 0x27498c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274988) {
            ctx->pc = 0x27499Cu;
            goto label_27499c;
        }
    }
    ctx->pc = 0x274990u;
    // 0x274990: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274994: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274994u;
    {
        const bool branch_taken_0x274994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x274994) {
            ctx->pc = 0x2749C0u;
            goto label_2749c0;
        }
    }
    ctx->pc = 0x27499Cu;
label_27499c:
    // 0x27499c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x27499Cu;
    SET_GPR_U32(ctx, 31, 0x2749A4u);
    ctx->pc = 0x2749A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27499Cu;
    // 0x2749a0: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x27499Cu, 0x2749A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2749A4u;
label_2749a4:
    // 0x2749a4: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2749A4u;
    {
        const bool branch_taken_0x2749a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749A4u;
        // 0x2749a8: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749a4) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2749ACu;
label_2749ac:
    // 0x2749ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2749acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2749b0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2749B0u;
    SET_GPR_U32(ctx, 31, 0x2749B8u);
    ctx->pc = 0x2749B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2749B0u;
    // 0x2749b4: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2749B0u, 0x2749B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2749B8u;
label_2749b8:
    // 0x2749b8: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x2749B8u;
    {
        const bool branch_taken_0x2749b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749B8u;
        // 0x2749bc: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749b8) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2749C0u;
label_2749c0:
    // 0x2749c0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2749C0u;
    SET_GPR_U32(ctx, 31, 0x2749C8u);
    ctx->pc = 0x2749C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2749C0u;
    // 0x2749c4: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2749C0u, 0x2749C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2749C8u;
label_2749c8:
    // 0x2749c8: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x2749C8u;
    {
        const bool branch_taken_0x2749c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749C8u;
        // 0x2749cc: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749c8) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x2749D0u;
label_2749d0:
    // 0x2749d0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2749D0u;
    SET_GPR_U32(ctx, 31, 0x2749D8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2749D0u, 0x2749D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2749D8u;
label_2749d8:
    // 0x2749d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2749d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2749dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2749dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2749e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2749e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2749e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2749E4u;
    {
        const bool branch_taken_0x2749e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2749e4) {
            ctx->pc = 0x2749E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2749E4u;
            // 0x2749e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2749ECu;
            goto label_2749ec;
        }
    }
    ctx->pc = 0x2749ECu;
label_2749ec:
    // 0x2749ec: 0x2810  mfhi        $a1
    ctx->pc = 0x2749ecu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2749f0: 0x10a4000a  beq         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2749F0u;
    {
        const bool branch_taken_0x2749f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2749F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749F0u;
        // 0x2749f4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749f0) {
            ctx->pc = 0x274A1Cu;
            goto label_274a1c;
        }
    }
    ctx->pc = 0x2749F8u;
    // 0x2749f8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2749F8u;
    {
        const bool branch_taken_0x2749f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749F8u;
        // 0x2749fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749f8) {
            ctx->pc = 0x274A0Cu;
            goto label_274a0c;
        }
    }
    ctx->pc = 0x274A00u;
    // 0x274a00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274a04: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274A04u;
    {
        const bool branch_taken_0x274a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x274a04) {
            ctx->pc = 0x274A30u;
            goto label_274a30;
        }
    }
    ctx->pc = 0x274A0Cu;
label_274a0c:
    // 0x274a0c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274A0Cu;
    SET_GPR_U32(ctx, 31, 0x274A14u);
    ctx->pc = 0x274A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A0Cu;
    // 0x274a10: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274A0Cu, 0x274A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A14u;
label_274a14:
    // 0x274a14: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x274A14u;
    {
        const bool branch_taken_0x274a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A14u;
        // 0x274a18: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a14) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274A1Cu;
label_274a1c:
    // 0x274a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a20: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274A20u;
    SET_GPR_U32(ctx, 31, 0x274A28u);
    ctx->pc = 0x274A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A20u;
    // 0x274a24: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274A20u, 0x274A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A28u;
label_274a28:
    // 0x274a28: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x274A28u;
    {
        const bool branch_taken_0x274a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A28u;
        // 0x274a2c: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a28) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274A30u;
label_274a30:
    // 0x274a30: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274A30u;
    SET_GPR_U32(ctx, 31, 0x274A38u);
    ctx->pc = 0x274A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A30u;
    // 0x274a34: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274A30u, 0x274A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A38u;
label_274a38:
    // 0x274a38: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x274A38u;
    {
        const bool branch_taken_0x274a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A38u;
        // 0x274a3c: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a38) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274A40u;
label_274a40:
    // 0x274a40: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x274A40u;
    SET_GPR_U32(ctx, 31, 0x274A48u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x274A40u, 0x274A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A48u;
label_274a48:
    // 0x274a48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x274a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274a4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x274a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274a50: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x274a50u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274a54: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274A54u;
    {
        const bool branch_taken_0x274a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a54) {
            ctx->pc = 0x274A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274A54u;
            // 0x274a58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x274A5Cu;
            goto label_274a5c;
        }
    }
    ctx->pc = 0x274A5Cu;
label_274a5c:
    // 0x274a5c: 0x2810  mfhi        $a1
    ctx->pc = 0x274a5cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x274a60: 0x10a4000a  beq         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x274A60u;
    {
        const bool branch_taken_0x274a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x274A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A60u;
        // 0x274a64: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a60) {
            ctx->pc = 0x274A8Cu;
            goto label_274a8c;
        }
    }
    ctx->pc = 0x274A68u;
    // 0x274a68: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274A68u;
    {
        const bool branch_taken_0x274a68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A68u;
        // 0x274a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a68) {
            ctx->pc = 0x274A7Cu;
            goto label_274a7c;
        }
    }
    ctx->pc = 0x274A70u;
    // 0x274a70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274a74: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274A74u;
    {
        const bool branch_taken_0x274a74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x274a74) {
            ctx->pc = 0x274AA0u;
            goto label_274aa0;
        }
    }
    ctx->pc = 0x274A7Cu;
label_274a7c:
    // 0x274a7c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274A7Cu;
    SET_GPR_U32(ctx, 31, 0x274A84u);
    ctx->pc = 0x274A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A7Cu;
    // 0x274a80: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274A7Cu, 0x274A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A84u;
label_274a84:
    // 0x274a84: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x274A84u;
    {
        const bool branch_taken_0x274a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A84u;
        // 0x274a88: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a84) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274A8Cu;
label_274a8c:
    // 0x274a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a90: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274A90u;
    SET_GPR_U32(ctx, 31, 0x274A98u);
    ctx->pc = 0x274A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A90u;
    // 0x274a94: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274A90u, 0x274A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A98u;
label_274a98:
    // 0x274a98: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x274A98u;
    {
        const bool branch_taken_0x274a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A98u;
        // 0x274a9c: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a98) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274AA0u;
label_274aa0:
    // 0x274aa0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274AA0u;
    SET_GPR_U32(ctx, 31, 0x274AA8u);
    ctx->pc = 0x274AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274AA0u;
    // 0x274aa4: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274AA0u, 0x274AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274AA8u;
label_274aa8:
    // 0x274aa8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x274AA8u;
    {
        const bool branch_taken_0x274aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AA8u;
        // 0x274aac: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274aa8) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274AB0u;
label_274ab0:
    // 0x274ab0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x274AB0u;
    SET_GPR_U32(ctx, 31, 0x274AB8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x274AB0u, 0x274AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274AB8u;
label_274ab8:
    // 0x274ab8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x274ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274abc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x274abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274ac0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x274ac0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274ac4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274AC4u;
    {
        const bool branch_taken_0x274ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274ac4) {
            ctx->pc = 0x274AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274AC4u;
            // 0x274ac8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x274ACCu;
            goto label_274acc;
        }
    }
    ctx->pc = 0x274ACCu;
label_274acc:
    // 0x274acc: 0x2810  mfhi        $a1
    ctx->pc = 0x274accu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x274ad0: 0x10a4000a  beq         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x274AD0u;
    {
        const bool branch_taken_0x274ad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x274AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AD0u;
        // 0x274ad4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ad0) {
            ctx->pc = 0x274AFCu;
            goto label_274afc;
        }
    }
    ctx->pc = 0x274AD8u;
    // 0x274ad8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274AD8u;
    {
        const bool branch_taken_0x274ad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x274ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AD8u;
        // 0x274adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ad8) {
            ctx->pc = 0x274AECu;
            goto label_274aec;
        }
    }
    ctx->pc = 0x274AE0u;
    // 0x274ae0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274ae4: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274AE4u;
    {
        const bool branch_taken_0x274ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x274ae4) {
            ctx->pc = 0x274B10u;
            goto label_274b10;
        }
    }
    ctx->pc = 0x274AECu;
label_274aec:
    // 0x274aec: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274AECu;
    SET_GPR_U32(ctx, 31, 0x274AF4u);
    ctx->pc = 0x274AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274AECu;
    // 0x274af0: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274AECu, 0x274AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274AF4u;
label_274af4:
    // 0x274af4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x274AF4u;
    {
        const bool branch_taken_0x274af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AF4u;
        // 0x274af8: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274af4) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274AFCu;
label_274afc:
    // 0x274afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b00: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274B00u;
    SET_GPR_U32(ctx, 31, 0x274B08u);
    ctx->pc = 0x274B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B00u;
    // 0x274b04: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274B00u, 0x274B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B08u;
label_274b08:
    // 0x274b08: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x274B08u;
    {
        const bool branch_taken_0x274b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B08u;
        // 0x274b0c: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b08) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274B10u;
label_274b10:
    // 0x274b10: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274B10u;
    SET_GPR_U32(ctx, 31, 0x274B18u);
    ctx->pc = 0x274B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B10u;
    // 0x274b14: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274B10u, 0x274B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B18u;
label_274b18:
    // 0x274b18: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x274B18u;
    {
        const bool branch_taken_0x274b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B18u;
        // 0x274b1c: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b18) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274B20u;
label_274b20:
    // 0x274b20: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x274B20u;
    SET_GPR_U32(ctx, 31, 0x274B28u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x274B20u, 0x274B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B28u;
label_274b28:
    // 0x274b28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x274b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274b2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x274b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274b30: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x274b30u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274b34: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274B34u;
    {
        const bool branch_taken_0x274b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b34) {
            ctx->pc = 0x274B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274B34u;
            // 0x274b38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x274B3Cu;
            goto label_274b3c;
        }
    }
    ctx->pc = 0x274B3Cu;
label_274b3c:
    // 0x274b3c: 0x2810  mfhi        $a1
    ctx->pc = 0x274b3cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x274b40: 0x10a4000a  beq         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x274B40u;
    {
        const bool branch_taken_0x274b40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x274B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B40u;
        // 0x274b44: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b40) {
            ctx->pc = 0x274B6Cu;
            goto label_274b6c;
        }
    }
    ctx->pc = 0x274B48u;
    // 0x274b48: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274B48u;
    {
        const bool branch_taken_0x274b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B48u;
        // 0x274b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b48) {
            ctx->pc = 0x274B5Cu;
            goto label_274b5c;
        }
    }
    ctx->pc = 0x274B50u;
    // 0x274b50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274b54: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274B54u;
    {
        const bool branch_taken_0x274b54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x274b54) {
            ctx->pc = 0x274B80u;
            goto label_274b80;
        }
    }
    ctx->pc = 0x274B5Cu;
label_274b5c:
    // 0x274b5c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274B5Cu;
    SET_GPR_U32(ctx, 31, 0x274B64u);
    ctx->pc = 0x274B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B5Cu;
    // 0x274b60: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274B5Cu, 0x274B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B64u;
label_274b64:
    // 0x274b64: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x274B64u;
    {
        const bool branch_taken_0x274b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B64u;
        // 0x274b68: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b64) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274B6Cu;
label_274b6c:
    // 0x274b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b70: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274B70u;
    SET_GPR_U32(ctx, 31, 0x274B78u);
    ctx->pc = 0x274B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B70u;
    // 0x274b74: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274B70u, 0x274B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B78u;
label_274b78:
    // 0x274b78: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x274B78u;
    {
        const bool branch_taken_0x274b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B78u;
        // 0x274b7c: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b78) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274B80u;
label_274b80:
    // 0x274b80: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274B80u;
    SET_GPR_U32(ctx, 31, 0x274B88u);
    ctx->pc = 0x274B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B80u;
    // 0x274b84: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274B80u, 0x274B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B88u;
label_274b88:
    // 0x274b88: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x274B88u;
    {
        const bool branch_taken_0x274b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B88u;
        // 0x274b8c: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b88) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274B90u;
label_274b90:
    // 0x274b90: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x274B90u;
    SET_GPR_U32(ctx, 31, 0x274B98u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x274B90u, 0x274B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B98u;
label_274b98:
    // 0x274b98: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x274b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x274b9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274B9Cu;
    {
        const bool branch_taken_0x274b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B9Cu;
        // 0x274ba0: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b9c) {
            ctx->pc = 0x274BB0u;
            goto label_274bb0;
        }
    }
    ctx->pc = 0x274BA4u;
    // 0x274ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274ba8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274BA8u;
    {
        const bool branch_taken_0x274ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BA8u;
        // 0x274bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ba8) {
            ctx->pc = 0x274BC4u;
            goto label_274bc4;
        }
    }
    ctx->pc = 0x274BB0u;
label_274bb0:
    // 0x274bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bb4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274BB4u;
    SET_GPR_U32(ctx, 31, 0x274BBCu);
    ctx->pc = 0x274BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274BB4u;
    // 0x274bb8: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274BB4u, 0x274BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BBCu;
label_274bbc:
    // 0x274bbc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x274BBCu;
    {
        const bool branch_taken_0x274bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BBCu;
        // 0x274bc0: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bbc) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274BC4u;
label_274bc4:
    // 0x274bc4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274BC4u;
    SET_GPR_U32(ctx, 31, 0x274BCCu);
    ctx->pc = 0x274BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274BC4u;
    // 0x274bc8: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274BC4u, 0x274BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BCCu;
label_274bcc:
    // 0x274bcc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x274BCCu;
    {
        const bool branch_taken_0x274bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BCCu;
        // 0x274bd0: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bcc) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274BD4u;
label_274bd4:
    // 0x274bd4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x274bd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x274bd8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x274bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x274bdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274BDCu;
    {
        const bool branch_taken_0x274bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BDCu;
        // 0x274be0: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bdc) {
            ctx->pc = 0x274BF8u;
            goto label_274bf8;
        }
    }
    ctx->pc = 0x274BE4u;
    // 0x274be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274be8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274BE8u;
    SET_GPR_U32(ctx, 31, 0x274BF0u);
    ctx->pc = 0x274BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274BE8u;
    // 0x274bec: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274BE8u, 0x274BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BF0u;
label_274bf0:
    // 0x274bf0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x274BF0u;
    {
        const bool branch_taken_0x274bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BF0u;
        // 0x274bf4: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bf0) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274BF8u;
label_274bf8:
    // 0x274bf8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x274BF8u;
    SET_GPR_U32(ctx, 31, 0x274C00u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x274BF8u, 0x274C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C00u;
label_274c00:
    // 0x274c00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x274c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x274c04: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x274c04u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274c08: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274C08u;
    {
        const bool branch_taken_0x274c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c08) {
            ctx->pc = 0x274C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274C08u;
            // 0x274c0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C10u;
            goto label_274c10;
        }
    }
    ctx->pc = 0x274C10u;
label_274c10:
    // 0x274c10: 0x2010  mfhi        $a0
    ctx->pc = 0x274c10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x274c14: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x274c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x274c18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274C18u;
    {
        const bool branch_taken_0x274c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C18u;
        // 0x274c1c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c18) {
            ctx->pc = 0x274C38u;
            goto label_274c38;
        }
    }
    ctx->pc = 0x274C20u;
    // 0x274c20: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x274c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x274c24: 0x244275e0  addiu       $v0, $v0, 0x75E0
    ctx->pc = 0x274c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30176));
    // 0x274c28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274c2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x274c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274c30: 0x800008  jr          $a0
    ctx->pc = 0x274C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274C38u: goto label_274c38;
            case 0x274C50u: goto label_274c50;
            case 0x274C68u: goto label_274c68;
            case 0x274C80u: goto label_274c80;
            case 0x274CC4u: goto label_274cc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274C30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274C38u;
label_274c38:
    // 0x274c38: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274c38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x274c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c40: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274C40u;
    SET_GPR_U32(ctx, 31, 0x274C48u);
    ctx->pc = 0x274C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274C40u;
    // 0x274c44: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274C40u, 0x274C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C48u;
label_274c48:
    // 0x274c48: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x274C48u;
    {
        const bool branch_taken_0x274c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C48u;
        // 0x274c4c: 0x2442000b  addiu       $v0, $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c48) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274C50u;
label_274c50:
    // 0x274c50: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274c50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x274c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c58: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274C58u;
    SET_GPR_U32(ctx, 31, 0x274C60u);
    ctx->pc = 0x274C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274C58u;
    // 0x274c5c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274C58u, 0x274C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C60u;
label_274c60:
    // 0x274c60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274C60u;
    {
        const bool branch_taken_0x274c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C60u;
        // 0x274c64: 0x2442000e  addiu       $v0, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c60) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274C68u;
label_274c68:
    // 0x274c68: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274c68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x274c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c70: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274C70u;
    SET_GPR_U32(ctx, 31, 0x274C78u);
    ctx->pc = 0x274C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274C70u;
    // 0x274c74: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274C70u, 0x274C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C78u;
label_274c78:
    // 0x274c78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274C78u;
    {
        const bool branch_taken_0x274c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C78u;
        // 0x274c7c: 0x2442000f  addiu       $v0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c78) {
            ctx->pc = 0x274C94u;
            goto label_274c94;
        }
    }
    ctx->pc = 0x274C80u;
label_274c80:
    // 0x274c80: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274c80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x274c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c88: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274C88u;
    SET_GPR_U32(ctx, 31, 0x274C90u);
    ctx->pc = 0x274C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274C88u;
    // 0x274c8c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274C88u, 0x274C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C90u;
label_274c90:
    // 0x274c90: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x274c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_274c94:
    // 0x274c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x274c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x274c9c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x274c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ca0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x274ca0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x274ca4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x274ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274ca8:
    // 0x274ca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x274cacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x274cb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cb4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x274CB4u;
    SET_GPR_U32(ctx, 31, 0x274CBCu);
    ctx->pc = 0x274CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274CB4u;
    // 0x274cb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x274CB4u, 0x274CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CBCu;
label_274cbc:
    // 0x274cbc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x274CBCu;
    {
        const bool branch_taken_0x274cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CBCu;
        // 0x274cc0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274cbc) {
            ctx->pc = 0x274D04u;
            goto label_274d04;
        }
    }
    ctx->pc = 0x274CC4u;
label_274cc4:
    // 0x274cc4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x274cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x274cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ccc: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x274CCCu;
    SET_GPR_U32(ctx, 31, 0x274CD4u);
    ctx->pc = 0x274CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274CCCu;
    // 0x274cd0: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x274CCCu, 0x274CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CD4u;
label_274cd4:
    // 0x274cd4: 0x24420011  addiu       $v0, $v0, 0x11
    ctx->pc = 0x274cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    // 0x274cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cdc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x274cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x274ce0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x274ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ce4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x274ce4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x274ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x274ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274cec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x274cf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cf4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x274cf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cf8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x274CF8u;
    SET_GPR_U32(ctx, 31, 0x274D00u);
    ctx->pc = 0x274CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274CF8u;
    // 0x274cfc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x274CF8u, 0x274D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D00u;
label_274d00:
    // 0x274d00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x274d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_274d04:
    // 0x274d04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x274D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D0Cu;
        // 0x274d10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274D14u;
    // 0x274d14: 0x0  nop
    ctx->pc = 0x274d14u;
    // NOP
    ctx->pc = 0x274d18u;
}
