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

// Function: cEvent_endPlay
// Address: 0x297128 - 0x297378
void cEvent_endPlay_0x297128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_endPlay_0x297128");
#endif

    switch (ctx->pc) {
        case 0x297140u: goto label_297140;
        case 0x297154u: goto label_297154;
        case 0x297174u: goto label_297174;
        case 0x29717cu: goto label_29717c;
        case 0x2971fcu: goto label_2971fc;
        case 0x29724cu: goto label_29724c;
        case 0x297254u: goto label_297254;
        case 0x297268u: goto label_297268;
        case 0x297274u: goto label_297274;
        case 0x2972b8u: goto label_2972b8;
        case 0x2972d4u: goto label_2972d4;
        case 0x297310u: goto label_297310;
        case 0x297360u: goto label_297360;
        default: break;
    }

    ctx->pc = 0x297128u;

    // 0x297128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x297128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29712c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x297130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297138: 0xc0a5eb4  jal         func_297AD0
    ctx->pc = 0x297138u;
    SET_GPR_U32(ctx, 31, 0x297140u);
    ctx->pc = 0x29713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297138u;
    // 0x29713c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297AD0u, 0x297138u, 0x297140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297140u;
label_297140:
    // 0x297140: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x297140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x297144: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x297144u;
    {
        const bool branch_taken_0x297144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297144u;
        // 0x297148: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297144) {
            ctx->pc = 0x297158u;
            goto label_297158;
        }
    }
    ctx->pc = 0x29714Cu;
    // 0x29714c: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x29714Cu;
    SET_GPR_U32(ctx, 31, 0x297154u);
    ctx->pc = 0x297150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29714Cu;
    // 0x297150: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x29714Cu, 0x297154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297154u;
label_297154:
    // 0x297154: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x297154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_297158:
    // 0x297158: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x297158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x29715c: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x29715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
    // 0x297160: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x297160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x297164: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x297164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x297168: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x297168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29716c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x29716Cu;
    SET_GPR_U32(ctx, 31, 0x297174u);
    ctx->pc = 0x297170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29716Cu;
    // 0x297170: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x29716Cu, 0x297174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297174u;
label_297174:
    // 0x297174: 0xc0b6db0  jal         func_2DB6C0
    ctx->pc = 0x297174u;
    SET_GPR_U32(ctx, 31, 0x29717Cu);
    ctx->pc = 0x297178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297174u;
    // 0x297178: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x297174u, 0x29717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29717Cu;
label_29717c:
    // 0x29717c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29717cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297180: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x297180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x297184: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x297184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x297188: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x297188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x29718c: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x29718cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x297190: 0x34a5fffd  ori         $a1, $a1, 0xFFFD
    ctx->pc = 0x297190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65533);
    // 0x297194: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x297194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x297198: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x297198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29719c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29719Cu;
    {
        const bool branch_taken_0x29719c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2971A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29719Cu;
        // 0x2971a0: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29719c) {
            ctx->pc = 0x2971B4u;
            goto label_2971b4;
        }
    }
    ctx->pc = 0x2971A4u;
    // 0x2971a4: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2971a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2971a8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2971a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2971ac: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2971acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2971b0: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x2971b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_2971b4:
    // 0x2971b4: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x2971b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
    // 0x2971b8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2971B8u;
    {
        const bool branch_taken_0x2971b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2971BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971B8u;
        // 0x2971bc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2971b8) {
            ctx->pc = 0x2971E0u;
            goto label_2971e0;
        }
    }
    ctx->pc = 0x2971C0u;
    // 0x2971c0: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2971c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2971c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2971c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2971c8: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x2971c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x2971cc: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x2971ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
    // 0x2971d0: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2971d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2971d4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2971d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2971d8: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x2971d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x2971dc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2971dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2971e0:
    // 0x2971e0: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x2971e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2971e4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x2971e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x2971e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2971e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2971ec: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x2971ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2971f0: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x2971f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2971f4: 0xc0b1110  jal         func_2C4440
    ctx->pc = 0x2971F4u;
    SET_GPR_U32(ctx, 31, 0x2971FCu);
    ctx->pc = 0x2971F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2971F4u;
    // 0x2971f8: 0xc60f0030  lwc1        $f15, 0x30($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4440u, 0x2971F4u, 0x2971FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2971FCu;
label_2971fc:
    // 0x2971fc: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x2971fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x297200: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x297200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
    // 0x297204: 0x24c87a84  addiu       $t0, $a2, 0x7A84
    ctx->pc = 0x297204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 31364));
    // 0x297208: 0x8cc57a84  lw          $a1, 0x7A84($a2)
    ctx->pc = 0x297208u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A84u));
    // 0x29720c: 0x8d03fff4  lw          $v1, -0xC($t0)
    ctx->pc = 0x29720cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x297210: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x297210u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x297214: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x297214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x297218: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x297218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x29721c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x297220: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x297220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x297224: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x297224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x297228: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x297228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29722c: 0xacc57a84  sw          $a1, 0x7A84($a2)
    ctx->pc = 0x29722cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31364), GPR_U32(ctx, 5));
    // 0x297230: 0xad03fff4  sw          $v1, -0xC($t0)
    ctx->pc = 0x297230u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294967284), GPR_U32(ctx, 3));
    // 0x297234: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x297234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297238: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x297238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x29723c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29723Cu;
    {
        const bool branch_taken_0x29723c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29723Cu;
        // 0x297240: 0x3c040000  lui         $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297240u) & 0xFFFFu)) << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29723c) {
            ctx->pc = 0x29726Cu;
            goto label_29726c;
        }
    }
    ctx->pc = 0x297244u;
    // 0x297244: 0xc000000  jal         func_000000
    ctx->pc = 0x297244u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297244u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x29724Cu);
        ctx->pc = 0x297248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297244u;
        // 0x297248: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297248u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297244u, 0x29724Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29724Cu;
label_29724c:
    // 0x29724c: 0xc0a5d3c  jal         func_2974F0
    ctx->pc = 0x29724Cu;
    SET_GPR_U32(ctx, 31, 0x297254u);
    ctx->pc = 0x297250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29724Cu;
    // 0x297250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2974F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2974F0u, 0x29724Cu, 0x297254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297254u;
label_297254:
    // 0x297254: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x297254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x297258: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x297258u;
    {
        const bool branch_taken_0x297258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x297258) {
            ctx->pc = 0x29725Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297258u;
            // 0x29725c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29726Cu;
            goto label_29726c;
        }
    }
    ctx->pc = 0x297260u;
    // 0x297260: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x297260u;
    SET_GPR_U32(ctx, 31, 0x297268u);
    ctx->pc = 0x297264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297260u;
    // 0x297264: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x297260u, 0x297268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297268u;
label_297268:
    // 0x297268: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x297268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_29726c:
    // 0x29726c: 0xc0a5d98  jal         func_297660
    ctx->pc = 0x29726Cu;
    SET_GPR_U32(ctx, 31, 0x297274u);
    ctx->pc = 0x297270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29726Cu;
    // 0x297270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297660u, 0x29726Cu, 0x297274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297274u;
label_297274:
    // 0x297274: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x297274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x297278: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x297278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29727c: 0x24636b30  addiu       $v1, $v1, 0x6B30
    ctx->pc = 0x29727cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27440));
    // 0x297280: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x297280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B34u));
    // 0x297284: 0x311ba  dsrl        $v0, $v1, 6
    ctx->pc = 0x297284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 6);
    // 0x297288: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x297288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29728c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x29728Cu;
    {
        const bool branch_taken_0x29728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29728Cu;
        // 0x297290: 0x26026b30  addiu       $v0, $s0, 0x6B30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 27440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29728c) {
            ctx->pc = 0x297320u;
            goto label_297320;
        }
    }
    ctx->pc = 0x297294u;
    // 0x297294: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x297294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x297298: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x297298u;
    {
        const bool branch_taken_0x297298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297298u;
        // 0x29729c: 0x26026b30  addiu       $v0, $s0, 0x6B30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 27440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297298) {
            ctx->pc = 0x297320u;
            goto label_297320;
        }
    }
    ctx->pc = 0x2972A0u;
    // 0x2972a0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2972a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2972a4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2972A4u;
    {
        const bool branch_taken_0x2972a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2972A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972A4u;
        // 0x2972a8: 0x26026b30  addiu       $v0, $s0, 0x6B30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 27440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972a4) {
            ctx->pc = 0x297320u;
            goto label_297320;
        }
    }
    ctx->pc = 0x2972ACu;
    // 0x2972ac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2972acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2972b0: 0xc0a5328  jal         func_294CA0
    ctx->pc = 0x2972B0u;
    SET_GPR_U32(ctx, 31, 0x2972B8u);
    ctx->pc = 0x2972B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972B0u;
    // 0x2972b4: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294CA0u, 0x2972B0u, 0x2972B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972B8u;
label_2972b8:
    // 0x2972b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2972b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2972bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2972bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2972c0: 0x24434700  addiu       $v1, $v0, 0x4700
    ctx->pc = 0x2972c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x2972c4: 0x90454700  lbu         $a1, 0x4700($v0)
    ctx->pc = 0x2972c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x604700u));
    // 0x2972c8: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x2972c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x604701u));
    // 0x2972cc: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x2972CCu;
    SET_GPR_U32(ctx, 31, 0x2972D4u);
    ctx->pc = 0x2972D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972CCu;
    // 0x2972d0: 0x90670002  lbu         $a3, 0x2($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x2972CCu, 0x2972D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972D4u;
label_2972d4:
    // 0x2972d4: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x2972d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x2972d8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x2972d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x2972dc: 0x8cc37a80  lw          $v1, 0x7A80($a2)
    ctx->pc = 0x2972dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x2972e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2972e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2972e4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2972e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2972e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2972e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2972ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2972f0: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x2972f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x2972f4: 0xacc37a80  sw          $v1, 0x7A80($a2)
    ctx->pc = 0x2972f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31360), GPR_U32(ctx, 3));
    // 0x2972f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2972f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972fc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2972fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x297300: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x297300u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x297304: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x297304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297308: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x297308u;
    SET_GPR_U32(ctx, 31, 0x297310u);
    ctx->pc = 0x29730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297308u;
    // 0x29730c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x297308u, 0x297310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297310u;
label_297310:
    // 0x297310: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x297310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x297314: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x297314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x297318: 0xa462ae40  sh          $v0, -0x51C0($v1)
    ctx->pc = 0x297318u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAE40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CAE40u, _value); } while (0);
    // 0x29731c: 0x26026b30  addiu       $v0, $s0, 0x6B30
    ctx->pc = 0x29731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 27440));
label_297320:
    // 0x297320: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x297320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x297324: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x297324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x297328: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297328u;
    {
        const bool branch_taken_0x297328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297328u;
        // 0x29732c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297328) {
            ctx->pc = 0x297344u;
            goto label_297344;
        }
    }
    ctx->pc = 0x297330u;
    // 0x297330: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x297330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x297334: 0x8c447a80  lw          $a0, 0x7A80($v0)
    ctx->pc = 0x297334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31360)));
    // 0x297338: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x297338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x29733c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x29733cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x297340: 0xac447a80  sw          $a0, 0x7A80($v0)
    ctx->pc = 0x297340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31360), GPR_U32(ctx, 4));
label_297344:
    // 0x297344: 0x511ba  dsrl        $v0, $a1, 6
    ctx->pc = 0x297344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 6);
    // 0x297348: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x297348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29734c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29734Cu;
    {
        const bool branch_taken_0x29734c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29734Cu;
        // 0x297350: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29734c) {
            ctx->pc = 0x297364u;
            goto label_297364;
        }
    }
    ctx->pc = 0x297354u;
    // 0x297354: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x297354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x297358: 0xc0ad97c  jal         func_2B65F0
    ctx->pc = 0x297358u;
    SET_GPR_U32(ctx, 31, 0x297360u);
    ctx->pc = 0x29735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297358u;
    // 0x29735c: 0x8c442558  lw          $a0, 0x2558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65F0u, 0x297358u, 0x297360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297360u;
label_297360:
    // 0x297360: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x297360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_297364:
    // 0x297364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29736c: 0x3e00008  jr          $ra
    ctx->pc = 0x29736Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29736Cu;
        // 0x297370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29736Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297374u;
    // 0x297374: 0x0  nop
    ctx->pc = 0x297374u;
    // NOP
    ctx->pc = 0x297378u;
}
